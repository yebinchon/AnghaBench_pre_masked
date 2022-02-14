
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_device {struct nbd_config* config; } ;
struct nbd_config {unsigned long bytesize; unsigned long blksize; unsigned long flags; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned long VAR_2 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct nbd_device*,unsigned long,int) ;
 int FUNC_2 (struct nbd_device*,struct block_device*) ;
 int FUNC_3 (struct nbd_device*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct nbd_device*,unsigned long) ;
 int FUNC_6 (struct nbd_device*,unsigned long,unsigned long) ;
 int FUNC_7 (struct nbd_device*,struct block_device*) ;

__attribute__((used)) static int FUNC_8(struct block_device *VAR_3, struct nbd_device *VAR_4,
         unsigned int VAR_5, unsigned long VAR_6)
{
 struct nbd_config *VAR_7 = VAR_4->config;

 switch (VAR_5) {
 case 136:
  return FUNC_3(VAR_4);
 case 137:
  FUNC_2(VAR_4, VAR_3);
  return 0;
 case 129:
  return FUNC_1(VAR_4, VAR_6, 0);
 case 133:
  if (!VAR_6)
   VAR_6 = VAR_2;
  if (!FUNC_4(VAR_6))
   return -VAR_0;
  FUNC_6(VAR_4, VAR_6,
        FUNC_0(VAR_7->bytesize, VAR_6));
  return 0;
 case 131:
  FUNC_6(VAR_4, VAR_7->blksize,
        FUNC_0(VAR_6, VAR_7->blksize));
  return 0;
 case 130:
  FUNC_6(VAR_4, VAR_7->blksize, VAR_6);
  return 0;
 case 128:
  FUNC_5(VAR_4, VAR_6);
  return 0;

 case 132:
  VAR_7->flags = VAR_6;
  return 0;
 case 135:
  return FUNC_7(VAR_4, VAR_3);
 case 138:




  return 0;
 case 134:




  return 0;
 }
 return -VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cxd2880_spi {int (* write_read ) (struct cxd2880_spi*,int*,int,int*,int) ;} ;
struct cxd2880_io {struct cxd2880_spi* if_object; } ;
typedef int send_data ;
typedef enum cxd2880_io_tgt { ____Placeholder_cxd2880_io_tgt } cxd2880_io_tgt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxd2880_spi*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct cxd2880_io *VAR_2,
       enum cxd2880_io_tgt VAR_3,
       u8 VAR_4, u8 *VAR_5,
       u32 VAR_6)
{
 int VAR_7 = 0;
 struct cxd2880_spi *VAR_8 = ((void*)0);
 u8 VAR_9[6];
 u8 *VAR_10 = VAR_5;

 if (!VAR_2 || !VAR_2->if_object || !VAR_5)
  return -VAR_1;

 if (VAR_4 + VAR_6 > 0x100)
  return -VAR_1;

 VAR_8 = VAR_2->if_object;

 if (VAR_3 == VAR_0)
  VAR_9[0] = 0x0b;
 else
  VAR_9[0] = 0x0a;

 VAR_9[3] = 0;
 VAR_9[4] = 0;
 VAR_9[5] = 0;

 while (VAR_6 > 0) {
  VAR_9[1] = VAR_4;
  if (VAR_6 > 255)
   VAR_9[2] = 255;
  else
   VAR_9[2] = VAR_6;

  VAR_7 =
      VAR_8->write_read(VAR_8, VAR_9, sizeof(VAR_9),
        VAR_10, VAR_9[2]);
  if (VAR_7)
   return VAR_7;

  VAR_4 += VAR_9[2];
  VAR_10 += VAR_9[2];
  VAR_6 -= VAR_9[2];
 }

 return VAR_7;
}

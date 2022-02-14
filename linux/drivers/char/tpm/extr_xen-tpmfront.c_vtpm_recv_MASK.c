
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vtpm_shared_page {size_t length; scalar_t__ state; } ;
struct tpm_private {int read_queue; struct vtpm_shared_page* shr; } ;
struct tpm_chip {int timeout_c; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct tpm_private* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,size_t) ;
 unsigned int FUNC_2 (struct vtpm_shared_page*) ;
 int FUNC_3 (struct tpm_chip*) ;
 scalar_t__ FUNC_4 (struct tpm_chip*,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct tpm_chip *VAR_6, u8 *VAR_7, size_t VAR_8)
{
 struct tpm_private *VAR_9 = FUNC_0(&VAR_6->dev);
 struct vtpm_shared_page *VAR_10 = VAR_9->shr;
 unsigned int VAR_11 = FUNC_2(VAR_10);
 size_t VAR_12 = VAR_10->length;

 if (VAR_10->state == VAR_4)
  return -VAR_0;


 if (FUNC_4(VAR_6, VAR_5, VAR_6->timeout_c,
   &VAR_9->read_queue, 1) < 0) {
  FUNC_3(VAR_6);
  return -VAR_2;
 }

 if (VAR_11 > VAR_3)
  return -VAR_1;

 if (VAR_11 + VAR_12 > VAR_3)
  VAR_12 = VAR_3 - VAR_11;

 if (VAR_12 > VAR_8)
  VAR_12 = VAR_8;

 FUNC_1(VAR_7, VAR_11 + (u8 *)VAR_10, VAR_12);

 return VAR_12;
}

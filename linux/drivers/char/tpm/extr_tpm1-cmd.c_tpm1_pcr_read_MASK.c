
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tpm_chip {int dummy; } ;
struct tpm_buf {int * data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (struct tpm_buf*,int ) ;
 int FUNC_2 (struct tpm_buf*) ;
 int FUNC_3 (struct tpm_buf*,int ,int ) ;
 scalar_t__ FUNC_4 (struct tpm_buf*) ;
 int FUNC_5 (struct tpm_chip*,struct tpm_buf*,scalar_t__,char*) ;

int FUNC_6(struct tpm_chip *VAR_5, u32 VAR_6, u8 *VAR_7)
{
 struct tpm_buf VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(&VAR_8, VAR_4, VAR_3);
 if (VAR_9)
  return VAR_9;

 FUNC_1(&VAR_8, VAR_6);

 VAR_9 = FUNC_5(VAR_5, &VAR_8, VAR_1,
         "attempting to read a pcr value");
 if (VAR_9)
  goto out;

 if (FUNC_4(&VAR_8) < VAR_1) {
  VAR_9 = -VAR_0;
  goto out;
 }

 FUNC_0(VAR_7, &VAR_8.data[VAR_2], VAR_1);

out:
 FUNC_2(&VAR_8);
 return VAR_9;
}

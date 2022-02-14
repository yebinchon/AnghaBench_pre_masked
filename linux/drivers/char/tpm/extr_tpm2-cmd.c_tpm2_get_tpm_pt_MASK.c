
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_chip {int dummy; } ;
struct tpm_buf {int * data; } ;
struct tpm2_get_cap_out {int value; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tpm_buf*,int) ;
 int FUNC_2 (struct tpm_buf*) ;
 int FUNC_3 (struct tpm_buf*,int ,int ) ;
 int FUNC_4 (struct tpm_chip*,struct tpm_buf*,int ,int *) ;

ssize_t FUNC_5(struct tpm_chip *VAR_4, u32 VAR_5, u32 *VAR_6,
   const char *VAR_7)
{
 struct tpm2_get_cap_out *VAR_8;
 struct tpm_buf VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(&VAR_9, VAR_2, VAR_1);
 if (VAR_10)
  return VAR_10;
 FUNC_1(&VAR_9, VAR_0);
 FUNC_1(&VAR_9, VAR_5);
 FUNC_1(&VAR_9, 1);
 VAR_10 = FUNC_4(VAR_4, &VAR_9, 0, ((void*)0));
 if (!VAR_10) {
  VAR_8 = (struct tpm2_get_cap_out *)
   &VAR_9.data[VAR_3];
  *VAR_6 = FUNC_0(VAR_8->value);
 }
 FUNC_2(&VAR_9);
 return VAR_10;
}

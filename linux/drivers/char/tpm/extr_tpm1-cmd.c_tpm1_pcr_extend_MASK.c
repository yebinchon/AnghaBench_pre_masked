
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tpm_chip {int dummy; } ;
struct tpm_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tpm_buf*,int const*,int ) ;
 int FUNC_1 (struct tpm_buf*,int ) ;
 int FUNC_2 (struct tpm_buf*) ;
 int FUNC_3 (struct tpm_buf*,int ,int ) ;
 int FUNC_4 (struct tpm_chip*,struct tpm_buf*,int ,char const*) ;

int FUNC_5(struct tpm_chip *VAR_3, u32 VAR_4, const u8 *VAR_5,
      const char *VAR_6)
{
 struct tpm_buf VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(&VAR_7, VAR_2, VAR_1);
 if (VAR_8)
  return VAR_8;

 FUNC_1(&VAR_7, VAR_4);
 FUNC_0(&VAR_7, VAR_5, VAR_0);

 VAR_8 = FUNC_4(VAR_3, &VAR_7, VAR_0, VAR_6);
 FUNC_2(&VAR_7);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dummy; } ;
struct tpm_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tpm_buf*,int) ;
 int FUNC_1 (struct tpm_buf*) ;
 int FUNC_2 (struct tpm_buf*,int ,int ) ;
 int FUNC_3 (struct tpm_chip*,struct tpm_buf*,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct tpm_chip *VAR_5)
{
 struct tpm_buf VAR_6;
 int VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  VAR_8 = FUNC_2(&VAR_6, VAR_4, VAR_0);
  if (VAR_8)
   return VAR_8;

  FUNC_0(&VAR_6, VAR_7);
  VAR_8 = FUNC_3(VAR_5, &VAR_6, 0,
          "attempting the self test");
  FUNC_1(&VAR_6);

  if (VAR_8 == VAR_3)
   VAR_8 = VAR_2;
  if (VAR_8 == VAR_1 || VAR_8 == VAR_2)
   return VAR_8;
 }

 return VAR_8;
}

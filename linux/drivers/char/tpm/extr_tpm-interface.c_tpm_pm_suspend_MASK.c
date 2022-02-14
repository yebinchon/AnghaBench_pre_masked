
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int flags; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tpm_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (struct tpm_chip*,int ) ;
 int FUNC_2 (struct tpm_chip*,int ) ;
 int FUNC_3 (struct tpm_chip*) ;
 int FUNC_4 (struct tpm_chip*) ;
 int VAR_4 ;

int FUNC_5(struct device *VAR_5)
{
 struct tpm_chip *VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = 0;

 if (!VAR_6)
  return -VAR_0;

 if (VAR_6->flags & VAR_2)
  return 0;

 if (!FUNC_3(VAR_6)) {
  if (VAR_6->flags & VAR_3)
   FUNC_2(VAR_6, VAR_1);
  else
   VAR_7 = FUNC_1(VAR_6, VAR_4);

  FUNC_4(VAR_6);
 }

 return VAR_7;
}

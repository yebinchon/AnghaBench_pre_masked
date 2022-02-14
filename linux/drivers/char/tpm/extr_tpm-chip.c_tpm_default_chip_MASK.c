
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct tpm_chip* FUNC_1 (int *,int*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct tpm_chip *FUNC_4(void)
{
 struct tpm_chip *VAR_2, *VAR_3 = ((void*)0);
 int VAR_4 = 0;
 int VAR_5;

 FUNC_2(&VAR_1);

 do {
  VAR_5 = VAR_4;
  VAR_2 = FUNC_1(&VAR_0, &VAR_4);
  if (VAR_2) {
   FUNC_0(&VAR_2->dev);
   VAR_3 = VAR_2;
   break;
  }
 } while (VAR_5 != VAR_4);

 FUNC_3(&VAR_1);

 return VAR_3;
}

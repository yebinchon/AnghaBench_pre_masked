
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_tis_data {int dummy; } ;
struct tpm_chip {unsigned long timeout_a; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct tpm_tis_data* FUNC_1 (int *) ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tpm_tis_data*,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct tpm_chip *VAR_3, int VAR_4)
{
 struct tpm_tis_data *VAR_5 = FUNC_1(&VAR_3->dev);
 unsigned long VAR_6 = VAR_2 + VAR_3->timeout_a;

 do {
  int VAR_7;
  u8 VAR_8;

  VAR_7 = FUNC_4(VAR_5, FUNC_0(VAR_4), &VAR_8);
  if (VAR_7 < 0)
   return VAR_7;

  if (VAR_8 & VAR_0)
   return 0;
  FUNC_3(VAR_1);
 } while (FUNC_2(VAR_2, VAR_6));
 return -1;
}

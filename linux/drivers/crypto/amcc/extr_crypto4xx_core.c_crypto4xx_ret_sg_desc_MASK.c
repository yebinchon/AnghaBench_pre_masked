
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_uinfo {int num_gd; int first_gd; int num_sd; int first_sd; } ;
struct crypto4xx_device {int dummy; } ;


 int FUNC_0 (struct crypto4xx_device*) ;
 int FUNC_1 (struct crypto4xx_device*) ;

__attribute__((used)) static void FUNC_2(struct crypto4xx_device *VAR_0,
      struct pd_uinfo *VAR_1)
{
 int VAR_2;
 if (VAR_1->num_gd) {
  for (VAR_2 = 0; VAR_2 < VAR_1->num_gd; VAR_2++)
   FUNC_0(VAR_0);
  VAR_1->first_gd = 0xffffffff;
  VAR_1->num_gd = 0;
 }
 if (VAR_1->num_sd) {
  for (VAR_2 = 0; VAR_2 < VAR_1->num_sd; VAR_2++)
   FUNC_1(VAR_0);

  VAR_1->first_sd = 0xffffffff;
  VAR_1->num_sd = 0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct smu_context*,int ) ;
 int FUNC_3 (struct smu_context*) ;

__attribute__((used)) static int FUNC_4(struct smu_context *VAR_2, bool VAR_3)
{
 int VAR_4 = 0, VAR_5 = 500;

 if (VAR_3) {
  VAR_4 = FUNC_2(VAR_2, VAR_0);


  while (!(FUNC_3(VAR_2) == 0)) {
   FUNC_1(10);
   VAR_5--;
   if (VAR_5 == 0) {
    FUNC_0("enable gfxoff timeout and failed!\n");
    break;
   }
  }
 } else {
  VAR_4 = FUNC_2(VAR_2, VAR_1);


  while (!(FUNC_3(VAR_2) == 2)) {
   FUNC_1(1);
   VAR_5--;
   if (VAR_5 == 0) {
    FUNC_0("disable gfxoff timeout and failed!\n");
    break;
   }
  }
 }

 return VAR_4;
}

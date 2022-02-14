
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kxcjk1013_data {int dummy; } ;
typedef enum kxcjk1013_mode { ____Placeholder_kxcjk1013_mode } kxcjk1013_mode ;
struct TYPE_3__ {int scale; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kxcjk1013_data*,int*) ;
 int FUNC_2 (struct kxcjk1013_data*,int) ;
 int FUNC_3 (struct kxcjk1013_data*,int) ;

__attribute__((used)) static int FUNC_4(struct kxcjk1013_data *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 enum kxcjk1013_mode VAR_8;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); ++VAR_7) {
  if (VAR_1[VAR_7].scale == VAR_5) {
   VAR_6 = FUNC_1(VAR_4, &VAR_8);
   if (VAR_6 < 0)
    return VAR_6;

   VAR_6 = FUNC_2(VAR_4, VAR_3);
   if (VAR_6 < 0)
    return VAR_6;

   VAR_6 = FUNC_3(VAR_4, VAR_7);
   if (VAR_6 < 0)
    return VAR_6;

   if (VAR_8 == VAR_2) {
    VAR_6 = FUNC_2(VAR_4, VAR_2);
    if (VAR_6)
     return VAR_6;
   }

   return 0;
  }
 }

 return -VAR_0;
}

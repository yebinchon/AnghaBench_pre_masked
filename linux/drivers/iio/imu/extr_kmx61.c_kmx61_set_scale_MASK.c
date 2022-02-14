
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct kmx61_data {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kmx61_data*,int *,int) ;
 int FUNC_2 (struct kmx61_data*,int ,int,int) ;
 int FUNC_3 (struct kmx61_data*,int) ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct kmx61_data *VAR_5, u16 VAR_6)
{
 int VAR_7, VAR_8;
 u8 VAR_9;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  if (VAR_4[VAR_8] == VAR_6) {
   VAR_7 = FUNC_1(VAR_5, &VAR_9,
          VAR_1 | VAR_3);
   if (VAR_7 < 0)
    return VAR_7;

   VAR_7 = FUNC_2(VAR_5, VAR_2,
          VAR_1 | VAR_3, 1);
   if (VAR_7 < 0)
    return VAR_7;

   VAR_7 = FUNC_3(VAR_5, VAR_8);
   if (VAR_7 < 0)
    return VAR_7;

   return FUNC_2(VAR_5, VAR_9,
            VAR_1 | VAR_3, 1);
  }
 }
 return -VAR_0;
}

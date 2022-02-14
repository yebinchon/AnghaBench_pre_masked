
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm78_data {int update_lock; void** fan_min; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (struct lm78_data*,int ) ;
 int FUNC_2 (struct lm78_data*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct lm78_data *VAR_1)
{
 u8 VAR_2;
 int VAR_3;


 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if ((VAR_2 & 0x09) != 0x01)
  FUNC_2(VAR_1, VAR_0,
     (VAR_2 & 0xf7) | 0x01);


 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  VAR_1->fan_min[VAR_3] = FUNC_1(VAR_1,
     FUNC_0(VAR_3));
 }

 FUNC_3(&VAR_1->update_lock);
}

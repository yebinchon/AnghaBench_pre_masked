
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct goodix_ts_data {int contact_size; int input_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct goodix_ts_data*,int*) ;
 int FUNC_2 (struct goodix_ts_data*,int*) ;
 int FUNC_3 (struct goodix_ts_data*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct goodix_ts_data *VAR_3)
{
 u8 VAR_4[1 + VAR_1 * VAR_0];
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5 < 0)
  return;





 FUNC_5(VAR_3->input_dev, VAR_2, VAR_4[0] & FUNC_0(4));

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  if (VAR_3->contact_size == 9)
   FUNC_3(VAR_3,
    &VAR_4[1 + VAR_3->contact_size * VAR_6]);
  else
   FUNC_2(VAR_3,
    &VAR_4[1 + VAR_3->contact_size * VAR_6]);

 FUNC_4(VAR_3->input_dev);
 FUNC_6(VAR_3->input_dev);
}

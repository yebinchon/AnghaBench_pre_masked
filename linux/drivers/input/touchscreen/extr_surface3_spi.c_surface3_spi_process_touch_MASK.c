
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct surface3_ts_data_finger {int status; } ;
struct surface3_ts_data {int input_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct surface3_ts_data*,struct surface3_ts_data_finger*) ;

__attribute__((used)) static void FUNC_4(struct surface3_ts_data *VAR_0, u8 *VAR_1)
{
 u16 VAR_2;
 unsigned int VAR_3;
 VAR_2 = FUNC_0(&VAR_1[15]);

 for (VAR_3 = 0; VAR_3 < 13; VAR_3++) {
  struct surface3_ts_data_finger *VAR_4;

  VAR_4 = (struct surface3_ts_data_finger *)&VAR_1[17 +
    VAR_3 * sizeof(struct surface3_ts_data_finger)];







  if (VAR_4->status & 0x10)
   break;

  FUNC_3(VAR_0, VAR_4);
 }

 FUNC_1(VAR_0->input_dev);
 FUNC_2(VAR_0->input_dev);
}

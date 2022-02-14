
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_dev {int dummy; } ;
struct elan_tp_data {struct input_dev* input; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (struct elan_tp_data*,int,int,int*) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*) ;

__attribute__((used)) static void FUNC_6(struct elan_tp_data *VAR_9, u8 *VAR_10)
{
 struct input_dev *VAR_11 = VAR_9->input;
 u8 *VAR_12 = &VAR_10[VAR_5];
 int VAR_13;
 u8 VAR_14 = VAR_10[VAR_8];
 u8 VAR_15 = VAR_10[VAR_6];
 bool VAR_16, VAR_17;

 VAR_17 = VAR_15 & 0x40;
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  VAR_16 = VAR_14 & (1U << (3 + VAR_13));
  FUNC_1(VAR_9, VAR_13, VAR_16, VAR_12);

  if (VAR_16)
   VAR_12 += VAR_4;
 }

 FUNC_4(VAR_11, VAR_1, VAR_14 & FUNC_0(0));
 FUNC_4(VAR_11, VAR_2, VAR_14 & FUNC_0(2));
 FUNC_4(VAR_11, VAR_3, VAR_14 & FUNC_0(1));
 FUNC_3(VAR_11, VAR_0, VAR_17 != 0);
 FUNC_2(VAR_11, 1);
 FUNC_5(VAR_11);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cma3000_accl_data {scalar_t__ bit_to_mg; int input_dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct cma3000_accl_data*,int ,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct cma3000_accl_data*,int*,int*,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__** VAR_14 ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_15, void *VAR_16)
{
 struct cma3000_accl_data *VAR_17 = VAR_16;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 u8 VAR_22, VAR_23, VAR_24;

 VAR_21 = FUNC_0(VAR_17, VAR_9, "interrupt status");
 if (VAR_21 < 0)
  return VAR_13;


 if (VAR_21 & VAR_10) {
  FUNC_2(VAR_17->input_dev, VAR_0, 1);
  FUNC_3(VAR_17->input_dev);
 } else {
  FUNC_2(VAR_17->input_dev, VAR_0, 0);
 }

 VAR_18 = FUNC_0(VAR_17, VAR_5, "X");
 VAR_19 = FUNC_0(VAR_17, VAR_6, "Y");
 VAR_20 = FUNC_0(VAR_17, VAR_7, "Z");

 VAR_22 = FUNC_0(VAR_17, VAR_4, "ctrl");
 VAR_23 = (VAR_22 & VAR_11) >> 1;
 VAR_24 = (VAR_22 & VAR_8) >> 7;

 VAR_17->bit_to_mg = VAR_14[VAR_23][VAR_24];


 if (VAR_17->bit_to_mg == 0)
  return VAR_13;


 FUNC_1(VAR_17, &VAR_18, &VAR_19, &VAR_20);

 FUNC_2(VAR_17->input_dev, VAR_1, VAR_18);
 FUNC_2(VAR_17->input_dev, VAR_2, VAR_19);
 FUNC_2(VAR_17->input_dev, VAR_3, VAR_20);
 FUNC_3(VAR_17->input_dev);

 return VAR_12;
}

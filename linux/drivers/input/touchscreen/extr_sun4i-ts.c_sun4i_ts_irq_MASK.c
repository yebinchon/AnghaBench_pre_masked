
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_ts_data {scalar_t__ base; scalar_t__ input; void* temp_data; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sun4i_ts_data*,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct sun4i_ts_data *VAR_6 = VAR_5;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6->base + VAR_3);

 if (VAR_7 & VAR_2)
  VAR_6->temp_data = FUNC_0(VAR_6->base + VAR_1);

 if (VAR_6->input)
  FUNC_1(VAR_6, VAR_7);

 FUNC_2(VAR_7, VAR_6->base + VAR_3);

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_ts_data {scalar_t__ base; scalar_t__ input; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct sun4i_ts_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct sun4i_ts_data *VAR_2 = FUNC_1(VAR_1);


 if (VAR_2->input)
  FUNC_0(VAR_2->input);


 FUNC_2(0, VAR_2->base + VAR_0);

 return 0;
}

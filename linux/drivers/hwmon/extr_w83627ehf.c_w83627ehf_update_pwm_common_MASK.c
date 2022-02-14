
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_sio_data {scalar_t__ kind; } ;
struct w83627ehf_data {int dummy; } ;
struct device {int dummy; } ;


 struct w83627ehf_sio_data* FUNC_0 (struct device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct w83627ehf_data*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct w83627ehf_data*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2,
     struct w83627ehf_data *VAR_3)
{
 struct w83627ehf_sio_data *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->kind == VAR_0 || VAR_4->kind == VAR_1)
  FUNC_1(VAR_3);
 else
  FUNC_2(VAR_3);
}

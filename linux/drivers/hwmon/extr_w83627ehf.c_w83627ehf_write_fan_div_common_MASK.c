
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_sio_data {scalar_t__ kind; } ;
struct w83627ehf_data {int dummy; } ;
struct device {int dummy; } ;


 struct w83627ehf_sio_data* FUNC_0 (struct device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct w83627ehf_data*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct w83627ehf_data*,int) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2,
        struct w83627ehf_data *VAR_3, int VAR_4)
{
 struct w83627ehf_sio_data *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->kind == VAR_1)
  ;
 else if (VAR_5->kind == VAR_0)
  FUNC_1(VAR_3, VAR_4);
 else
  FUNC_2(VAR_3, VAR_4);
}

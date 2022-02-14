
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st1232_ts_data {scalar_t__ reset_gpio; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct st1232_ts_data *VAR_0, bool VAR_1)
{
 if (VAR_0->reset_gpio)
  FUNC_0(VAR_0->reset_gpio, !VAR_1);
}

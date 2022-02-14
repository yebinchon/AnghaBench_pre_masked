
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_sensor_settings {int dummy; } ;


 int FUNC_0 (struct st_sensor_settings const*) ;
 struct st_sensor_settings const* VAR_0 ;
 int FUNC_1 (char const*,struct st_sensor_settings const*,int ) ;

const struct st_sensor_settings *FUNC_2(const char *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1,
     VAR_0,
     FUNC_0(VAR_0));
 if (VAR_2 < 0)
  return ((void*)0);

 return &VAR_0[VAR_2];
}

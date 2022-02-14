
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwmon_channel_info {scalar_t__* config; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(const struct hwmon_channel_info *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = VAR_2 = 0; VAR_0->config[VAR_1]; VAR_1++)
  VAR_2 += FUNC_0(VAR_0->config[VAR_1]);

 return VAR_2;
}

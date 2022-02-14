
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char const*) ;
 int FUNC_5 (int ,int ,char*) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_2, device_t VAR_3, const char *VAR_4)
{

 FUNC_4(VAR_2, VAR_3, VAR_4);

 if (FUNC_0(VAR_4, "/state") != 0
  && FUNC_0(VAR_4, "/online") != 0)
  return;

 if (FUNC_3(VAR_3) != VAR_1
  || FUNC_1(VAR_3) != 0)
  return;
 FUNC_5(VAR_0, FUNC_2(VAR_3), "hotplug-status");
}

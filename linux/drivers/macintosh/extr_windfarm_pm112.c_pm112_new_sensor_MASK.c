
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_sensor {unsigned int* name; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct wf_sensor* VAR_2 ;
 unsigned int VAR_3 ;
 struct wf_sensor** VAR_4 ;
 struct wf_sensor** VAR_5 ;
 struct wf_sensor* VAR_6 ;
 int FUNC_0 (unsigned int*,char*) ;
 int FUNC_1 (unsigned int*,char*,int) ;
 struct wf_sensor* VAR_7 ;
 scalar_t__ FUNC_2 (struct wf_sensor*) ;

__attribute__((used)) static void FUNC_3(struct wf_sensor *VAR_8)
{
 unsigned int VAR_9;

 if (!FUNC_1(VAR_8->name, "cpu-temp-", 9)) {
  VAR_9 = VAR_8->name[9] - '0';
  if (VAR_8->name[10] == 0 && VAR_9 < VAR_0 &&
      VAR_5[VAR_9] == ((void*)0) && FUNC_2(VAR_8) == 0)
   VAR_5[VAR_9] = VAR_8;

 } else if (!FUNC_1(VAR_8->name, "cpu-power-", 10)) {
  VAR_9 = VAR_8->name[10] - '0';
  if (VAR_8->name[11] == 0 && VAR_9 < VAR_0 &&
      VAR_4[VAR_9] == ((void*)0) && FUNC_2(VAR_8) == 0)
   VAR_4[VAR_9] = VAR_8;
 } else if (!FUNC_0(VAR_8->name, "hd-temp")) {
  if (VAR_2 == ((void*)0) && FUNC_2(VAR_8) == 0)
   VAR_2 = VAR_8;
 } else if (!FUNC_0(VAR_8->name, "slots-power")) {
  if (VAR_6 == ((void*)0) && FUNC_2(VAR_8) == 0)
   VAR_6 = VAR_8;
 } else if (!FUNC_0(VAR_8->name, "backside-temp")) {
  if (VAR_7 == ((void*)0) && FUNC_2(VAR_8) == 0)
   VAR_7 = VAR_8;
 } else
  return;


 for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9)
  if (VAR_5[VAR_9] == ((void*)0) || VAR_4[VAR_9] == ((void*)0))
   return;

 VAR_1 = 1;
}

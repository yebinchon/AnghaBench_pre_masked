
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_sensor {int name; } ;
struct wf_control {int name; } ;
struct notifier_block {int dummy; } ;


 int FUNC_0 (char*,int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_3,
          unsigned long VAR_4, void *VAR_5)
{
 switch(VAR_4) {
 case 130:
  FUNC_0("wf: new control %s detected\n",
      ((struct wf_control *)VAR_5)->name);
  FUNC_1(VAR_5);
  VAR_2 = 1;
  break;
 case 129:
  FUNC_0("wf: new sensor %s detected\n",
      ((struct wf_sensor *)VAR_5)->name);
  FUNC_2(VAR_5);
  break;
 case 128:
  if (VAR_0 && VAR_1)
   FUNC_3();
 }

 return 0;
}

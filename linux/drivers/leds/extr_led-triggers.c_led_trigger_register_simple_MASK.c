
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_trigger {char const* name; } ;


 int VAR_0 ;
 int FUNC_0 (struct led_trigger*) ;
 struct led_trigger* FUNC_1 (int,int ) ;
 int FUNC_2 (struct led_trigger*) ;
 int FUNC_3 (char*,char const*,...) ;

void FUNC_4(const char *VAR_1, struct led_trigger **VAR_2)
{
 struct led_trigger *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(sizeof(struct led_trigger), VAR_0);

 if (VAR_3) {
  VAR_3->name = VAR_1;
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4 < 0) {
   FUNC_0(VAR_3);
   VAR_3 = ((void*)0);
   FUNC_3("LED trigger %s failed to register (%d)\n",
    VAR_1, VAR_4);
  }
 } else {
  FUNC_3("LED trigger %s failed to register (no memory)\n",
   VAR_1);
 }
 *VAR_2 = VAR_3;
}

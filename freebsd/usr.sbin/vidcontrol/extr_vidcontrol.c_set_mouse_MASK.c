
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mouse_info {scalar_t__ operation; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ,struct mouse_info*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_3)
{
 struct mouse_info VAR_4;

 if (!FUNC_4(VAR_3, "on")) {
  VAR_4.operation = VAR_2;
 } else if (!FUNC_4(VAR_3, "off")) {
  VAR_4.operation = VAR_1;
 } else {
  FUNC_3();
  FUNC_1(1, "argument to -m must be either on or off");
 }

 if (FUNC_2(0, VAR_0, &VAR_4) == -1) {
  FUNC_3();
  FUNC_0(1, "%sing the mouse",
       VAR_4.operation == VAR_2 ? "show" : "hid");
 }
}

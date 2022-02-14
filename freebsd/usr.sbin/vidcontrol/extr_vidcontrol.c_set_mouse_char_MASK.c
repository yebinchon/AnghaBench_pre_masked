
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mouse_char; } ;
struct mouse_info {TYPE_1__ u; int operation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,struct mouse_info*) ;
 int FUNC_2 () ;
 long FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void
FUNC_5(char *VAR_3)
{
 struct mouse_info VAR_4;
 long VAR_5;

 VAR_5 = FUNC_3(VAR_3, ((void*)0), 0);

 if ((VAR_5 < 0) || (VAR_5 > VAR_2 - 3)) {
  FUNC_2();
  FUNC_4("argument to -M must be 0 through %d", VAR_2 - 3);
  return;
 }

 VAR_4.operation = VAR_1;
 VAR_4.u.mouse_char = (int)VAR_5;

 if (FUNC_1(0, VAR_0, &VAR_4) == -1) {
  FUNC_2();
  FUNC_0(1, "setting mouse character");
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* keynumToStringBuf ) (int,char*,int) ;} ;
struct TYPE_3__ {int bind1; int bind2; int command; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int,char*,int) ;

void FUNC_6(const char *VAR_5) {
 int VAR_6, VAR_7, VAR_8;


 for (VAR_6=0; VAR_6 < VAR_1; VAR_6++)
 {
  if (FUNC_0(VAR_5, VAR_2[VAR_6].command) == 0) {
   VAR_7 = VAR_2[VAR_6].bind1;
   if (VAR_7 == -1) {
    break;
   }
    VAR_0->keynumToStringBuf( VAR_7, VAR_3, 32 );
    FUNC_1(VAR_3);

    VAR_8 = VAR_2[VAR_6].bind2;
    if (VAR_8 != -1)
    {
     VAR_0->keynumToStringBuf( VAR_8, VAR_4, 32 );
     FUNC_1(VAR_4);
     FUNC_2( VAR_3, " or " );
     FUNC_2( VAR_3, VAR_4 );
    }
   return;
  }
 }
 FUNC_3(VAR_3, "???");
}

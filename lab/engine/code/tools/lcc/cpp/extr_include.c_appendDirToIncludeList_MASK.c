
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_2__ {char* file; int always; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int *,int,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

void FUNC_4( char *VAR_3 )
{
 int VAR_4;
 char *VAR_5;

 VAR_5 = (char *)FUNC_1( (uchar *)VAR_2[VAR_1-1].file, 256, 0 );
 FUNC_2( VAR_5, "/" );
 FUNC_2( VAR_5, VAR_3 );


 for (VAR_4=VAR_1-2; VAR_4>=0; VAR_4--) {
  if (VAR_2[VAR_4].file &&
    !FUNC_3 (VAR_2[VAR_4].file, VAR_5)) {
   return;
  }
 }

 for (VAR_4=VAR_1-2; VAR_4>=0; VAR_4--) {
  if (VAR_2[VAR_4].file==((void*)0)) {
   VAR_2[VAR_4].always = 1;
   VAR_2[VAR_4].file = VAR_5;
   break;
  }
 }
 if (VAR_4<0)
  FUNC_0(VAR_0, "Too many -I directives");
}

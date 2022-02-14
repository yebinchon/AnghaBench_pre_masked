
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* includepath; } ;
typedef TYPE_1__ source_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int ) ;
 size_t FUNC_2 (char*) ;

void FUNC_3(source_t *VAR_1, char *VAR_2)
{
 size_t VAR_3;

 FUNC_0(VAR_1->includepath, VAR_2, sizeof(VAR_1->includepath)-1);

 VAR_3 = FUNC_2(VAR_1->includepath);

 if (VAR_3 > 0 && VAR_1->includepath[VAR_3-1] != '\\' &&
  VAR_1->includepath[VAR_3-1] != '/')
 {
  FUNC_1(VAR_1->includepath, VAR_0);
 }
}

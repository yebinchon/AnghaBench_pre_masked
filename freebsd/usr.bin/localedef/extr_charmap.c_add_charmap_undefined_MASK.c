
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_4__ {char* name; scalar_t__ wc; } ;
typedef TYPE_1__ charmap_t ;


 TYPE_1__* FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,char*) ;

void
FUNC_4(char *VAR_2)
{
 charmap_t VAR_3;
 charmap_t *VAR_4 = ((void*)0);

 VAR_3.name = VAR_2;
 VAR_4 = FUNC_0(VAR_0, &VAR_0, &VAR_3);

 if ((VAR_1 == 0) && ((VAR_4 == ((void*)0)) || (VAR_4->wc == (wchar_t)-1))) {
  FUNC_3("undefined symbol <%s>", VAR_2);
  FUNC_1(VAR_2, -1, 0);
 } else {
  FUNC_2(VAR_2);
 }
}

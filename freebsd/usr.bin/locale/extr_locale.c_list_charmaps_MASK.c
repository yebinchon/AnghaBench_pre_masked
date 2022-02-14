
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t sl_cur; char** sl_str; } ;
struct TYPE_6__ {char** sl_str; size_t sl_cur; } ;
typedef TYPE_1__ StringList ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 TYPE_5__* VAR_0 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char**,size_t,int,int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int * FUNC_5 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_6 () ;
 char* FUNC_7 (char*,char) ;
 char* FUNC_8 (char*) ;

void
FUNC_9(void)
{
 size_t VAR_2;
 char *VAR_3, *VAR_4;
 StringList *VAR_5;


 VAR_5 = FUNC_6();
 if (VAR_5 == ((void*)0))
  FUNC_0(1, "could not allocate memory");


 FUNC_1();


 for (VAR_2 = 0; VAR_2 < VAR_0->sl_cur; VAR_2++) {
  VAR_3 = VAR_0->sl_str[VAR_2];
  if ((VAR_4 = FUNC_7(VAR_3, '.')) != ((void*)0)) {
   VAR_4++;
   if (FUNC_5(VAR_5, VAR_4) == ((void*)0))
    FUNC_4(VAR_5, VAR_4);
  }
 }


 if (FUNC_5(VAR_5, "US-ASCII") == ((void*)0))
  FUNC_4(VAR_5, FUNC_8("US-ASCII"));


 FUNC_3(VAR_5->sl_str, VAR_5->sl_cur, sizeof(char *), VAR_1);


 for (VAR_2 = 0; VAR_2 < VAR_5->sl_cur; VAR_2++) {
  FUNC_2("%s\n", VAR_5->sl_str[VAR_2]);
 }
}

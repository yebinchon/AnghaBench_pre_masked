
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * cache; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,char const*,int ) ;
 int FUNC_5 (char*,char const*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,int ,int *,int *,int *) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (char const*,char*,char const**) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char const*,int *,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_12 (char const*,char*,int) ;

int FUNC_13(int VAR_3, const char **VAR_4)
{
 int VAR_5, VAR_6 = 1;
 const char *VAR_7 = ((void*)0);

 if (VAR_3 > 1 && FUNC_9(VAR_4[1], "--print-and-refresh=", &VAR_7)) {
  VAR_3--;
  VAR_4++;
 }

 if (VAR_3 == 2)
  VAR_6 = FUNC_11(VAR_4[1], ((void*)0), 0);
 FUNC_8();
 FUNC_3(VAR_1, ((void*)0));
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  FUNC_6();
  if (VAR_7) {
   int VAR_8;

   FUNC_7(&VAR_2, VAR_0,
          ((void*)0), ((void*)0), ((void*)0));
   VAR_8 = FUNC_4(&VAR_2, VAR_7, FUNC_10(VAR_7));
   if (VAR_8 < 0)
    FUNC_1("%s not in index", VAR_7);
   FUNC_5("%s is%s up to date\n", VAR_7,
          FUNC_0(VAR_2.cache[VAR_8]) ? "" : " not");
   FUNC_12(VAR_7, "%d\n", VAR_5);
  }
  FUNC_2();
 }
 return 0;
}

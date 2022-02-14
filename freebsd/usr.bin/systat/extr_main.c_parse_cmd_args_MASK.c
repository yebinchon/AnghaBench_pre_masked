
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdentry {int * argv; int * cmd; } ;


 int FUNC_0 (int *,struct cmdentry*,int ) ;
 scalar_t__ VAR_0 ;
 struct cmdentry* FUNC_1 (int,int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (int,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 void* FUNC_4 (char*) ;
 double FUNC_5 (char*,int *) ;

__attribute__((used)) static void
FUNC_6 (int VAR_4, char **VAR_5)
{
 int VAR_6 = 0;
 struct cmdentry *VAR_7 = ((void*)0);
 double VAR_8;

 while (VAR_4) {
  if (VAR_5[0][0] == '-') {
   if (VAR_6)
     FUNC_0(&VAR_1, VAR_7, VAR_3);

   if (FUNC_3(VAR_5[0], "--", 3) == 0) {
    VAR_6 = 0;
    VAR_4 --, VAR_5 ++;
    continue;
   }
   VAR_7 = FUNC_1(1, sizeof(struct cmdentry));
   if (VAR_7 == ((void*)0))
    FUNC_2(1, "memory allocating failure");
   VAR_7->cmd = FUNC_4(&VAR_5[0][1]);
   if (VAR_7->cmd == ((void*)0))
    FUNC_2(1, "memory allocating failure");
   VAR_6 = 1;
  }
  else if (!VAR_6) {
   VAR_8 = FUNC_5(VAR_5[0], ((void*)0)) * 1000000.0;
   if (VAR_8 > 0 && VAR_8 < (double)VAR_0)
    VAR_2 = (unsigned int)VAR_8;
  }
  else if (VAR_7 != ((void*)0)) {
   VAR_7->argv = FUNC_4(VAR_5[0]);
   if (VAR_7->argv == ((void*)0))
    FUNC_2(1, "memory allocating failure");
   VAR_6 = 0;
   FUNC_0(&VAR_1, VAR_7, VAR_3);
  }
  else
   FUNC_2(1, "invalid arguments list");

  VAR_4--, VAR_5++;
 }
 if (VAR_6 && VAR_7 != ((void*)0))
  FUNC_0(&VAR_1, VAR_7, VAR_3);

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_request {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mc_request*,char*,int,int ) ;
 int FUNC_4 (char*,char*,int,char**) ;

__attribute__((used)) static void FUNC_5(int (*VAR_2)(char *, char *, int,
        char **),
    struct mc_request *VAR_3, char *VAR_4)
{
 char VAR_5[VAR_0], *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_2 == ((void*)0)) {
  FUNC_3(VAR_3, "No get_config routine defined", 1, 0);
  return;
 }

 VAR_6 = ((void*)0);
 VAR_9 = FUNC_0(VAR_5);
 VAR_7 = VAR_5;

 while (1) {
  VAR_8 = (*VAR_2)(VAR_4, VAR_7, VAR_9, &VAR_6);
  if (VAR_6 != ((void*)0)) {
   FUNC_3(VAR_3, VAR_6, 1, 0);
   goto out;
  }

  if (VAR_8 <= VAR_9) {
   FUNC_3(VAR_3, VAR_7, 0, 0);
   goto out;
  }

  if (VAR_7 != VAR_5)
   FUNC_1(VAR_7);

  VAR_9 = VAR_8;
  VAR_7 = FUNC_2(VAR_9, VAR_1);
  if (VAR_7 == ((void*)0)) {
   FUNC_3(VAR_3, "Failed to allocate buffer", 1, 0);
   return;
  }
 }
 out:
 if (VAR_7 != VAR_5)
  FUNC_1(VAR_7);
}

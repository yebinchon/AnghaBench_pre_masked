
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int ut_id; int ut_tv; int ut_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (struct utmpx*) ;
 int VAR_1 ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_7(char *VAR_2[])
{
 struct utmpx VAR_3 = { .ut_type = VAR_0 };
 size_t VAR_4;
 int VAR_5 = 0;

 (void)FUNC_2(&VAR_3.ut_tv, ((void*)0));
 for (; *VAR_2 != ((void*)0); VAR_2++) {
  VAR_4 = FUNC_5(*VAR_2);
  if (VAR_4 <= sizeof(VAR_3.ut_id)) {

   FUNC_6(VAR_3.ut_id, *VAR_2, sizeof(VAR_3.ut_id));
  } else if (VAR_4 != sizeof(VAR_3.ut_id) * 2 ||
      FUNC_0(*VAR_2, VAR_3.ut_id, sizeof(VAR_3.ut_id)) != 0) {

   FUNC_1(VAR_1, "%s: Invalid identifier format\n", *VAR_2);
   VAR_5 = 1;
   continue;
  }


  if (FUNC_4(&VAR_3) == ((void*)0)) {
   FUNC_3(*VAR_2);
   VAR_5 = 1;
  }
 }
 return (VAR_5);
}

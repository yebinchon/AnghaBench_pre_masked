
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct utmpx {scalar_t__ ut_type; int ut_user; } ;
struct passwd {int dummy; } ;
struct TYPE_7__ {int (* seq ) (TYPE_2__*,TYPE_1__*,TYPE_1__*,int) ;} ;
struct TYPE_6__ {int data; } ;
typedef int PERSON ;
typedef TYPE_1__ DBT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct passwd*) ;
 int FUNC_3 (struct utmpx*,int *) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*) ;
 int * FUNC_6 (int ) ;
 struct passwd* FUNC_7 (int ) ;
 struct utmpx* FUNC_8 () ;
 scalar_t__ FUNC_9 (struct passwd*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int **,int ,int) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_13(void)
{
 PERSON *VAR_6;
 DBT VAR_7, VAR_8;
 struct passwd *VAR_9;
 struct utmpx *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_4)
  FUNC_5(1, "can't list logins without reading utmp");

 FUNC_11();
 while ((VAR_10 = FUNC_8()) != ((void*)0)) {
  if (VAR_10->ut_type != VAR_2)
   continue;
  if ((VAR_6 = FUNC_6(VAR_10->ut_user)) == ((void*)0)) {
   if ((VAR_9 = FUNC_7(VAR_10->ut_user)) == ((void*)0))
    continue;
   if (FUNC_9(VAR_9))
    continue;
   VAR_6 = FUNC_2(VAR_9);
  }
  FUNC_3(VAR_10, VAR_6);
 }
 FUNC_0();
 if (VAR_3 && VAR_5)
  for (VAR_12 = VAR_0;; VAR_12 = VAR_1) {
   PERSON *VAR_13;

   VAR_11 = (*VAR_3->seq)(VAR_3, &VAR_8, &VAR_7, VAR_12);
   if (VAR_11 == -1)
    FUNC_4(1, "db seq");
   if (VAR_11 == 1)
    break;
   FUNC_10(&VAR_13, VAR_7.data, sizeof VAR_13);
   FUNC_1(VAR_13);
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_file {int dummy; } ;
typedef int FILE ;


 struct lock_file VAR_0 ;
 scalar_t__ FUNC_0 (struct lock_file*) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (struct lock_file*,char*) ;
 scalar_t__ FUNC_5 (struct lock_file*,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct lock_file*) ;
 char* FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(void)
{
 struct lock_file VAR_7 = VAR_0;
 FILE *VAR_8;

 if (!VAR_2 || (VAR_4 && !VAR_5))
  return;

 if (FUNC_5(&VAR_7, VAR_2, 0) < 0) {
  VAR_3 |= FUNC_3("Unable to write marks file %s",
           VAR_2);
  return;
 }

 VAR_8 = FUNC_4(&VAR_7, "w");
 if (!VAR_8) {
  int VAR_9 = VAR_1;
  FUNC_6(&VAR_7);
  VAR_3 |= FUNC_2("Unable to write marks file %s: %s",
   VAR_2, FUNC_7(VAR_9));
  return;
 }

 FUNC_1(VAR_8, 0, VAR_6);
 if (FUNC_0(&VAR_7)) {
  VAR_3 |= FUNC_3("Unable to write file %s",
           VAR_2);
  return;
 }
}

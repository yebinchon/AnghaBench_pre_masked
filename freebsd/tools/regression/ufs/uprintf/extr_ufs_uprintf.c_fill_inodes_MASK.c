
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_6(void)
{
 char VAR_7[VAR_5];
 int VAR_8, VAR_9, VAR_10;




 VAR_9 = 0;
 while (1) {
  FUNC_2(VAR_7, VAR_5, "%d", VAR_9);
  VAR_8 = FUNC_1(VAR_7, VAR_2 | VAR_4 | VAR_3, 0600);
  if (VAR_8 < 0)
   break;
  FUNC_0(VAR_8);
  VAR_9++;
 }
 VAR_10 = VAR_9;
 if (VAR_6 != VAR_0) {
  FUNC_4("fill_inodes: open(%s)", VAR_7);
  goto teardown;
 }

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_8 = FUNC_1(VAR_7, VAR_2 | VAR_4 | VAR_3, 0600);
  if (VAR_8 < 0 && VAR_6 != VAR_0) {
   FUNC_4("fill_inodes: open(%s) after ENOSPC", VAR_7);
   goto teardown;
  }
  if (VAR_8 >= 0) {
   FUNC_5("fill_inodes: open(%s) after ENOSPC returned "
       " %d", VAR_7, VAR_8);
   FUNC_0(VAR_8);
   goto teardown;
  }
 }

teardown:
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  FUNC_2(VAR_7, VAR_5, "%d", VAR_9);
  (void)FUNC_3(VAR_7);
 }
}

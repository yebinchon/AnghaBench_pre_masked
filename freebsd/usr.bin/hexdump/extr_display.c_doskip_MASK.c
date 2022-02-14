
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int,char*,char const*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ,struct stat*) ;
 scalar_t__ FUNC_9 (int ,int ,int*) ;
 int FUNC_10 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void
FUNC_11(const char *VAR_6, int VAR_7)
{
 int VAR_8;
 struct stat VAR_9;

 if (VAR_7) {
  if (FUNC_8(FUNC_6(VAR_5), &VAR_9))
   FUNC_5(1, "%s", VAR_6);
  if (FUNC_3(VAR_9.st_mode) && VAR_4 > VAR_9.st_size) {
   VAR_3 += VAR_9.st_size;
   VAR_4 -= VAR_9.st_size;
   return;
  }
 }
 if (!VAR_7 || FUNC_2(VAR_9.st_mode) || FUNC_4(VAR_9.st_mode)) {
  FUNC_10();
  return;
 }
 if (FUNC_1(VAR_9.st_mode) || FUNC_0(VAR_9.st_mode)) {
  if (FUNC_9(FUNC_6(VAR_5), VAR_1, &VAR_8))
   FUNC_5(1, "%s", VAR_6);




  if (VAR_8 & VAR_0) {
   FUNC_10();
   return;
  }
 }
 if (FUNC_7(VAR_5, VAR_4, VAR_2)) {
  FUNC_10();
  return;
 }
 VAR_3 += VAR_4;
 VAR_4 = 0;
}

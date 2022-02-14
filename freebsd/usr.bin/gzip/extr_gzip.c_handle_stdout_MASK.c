
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int time_t ;
struct stat {scalar_t__ st_mtime; int st_size; int st_mode; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (int ,int ,int*,char*,scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,int,int) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_9(void)
{
 off_t VAR_5;

 off_t VAR_6;
 struct stat VAR_7;
 time_t VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 FUNC_3("(stdout)", 0);

 if (VAR_2 == 0 && FUNC_4(VAR_1)) {
  FUNC_6("standard output is a terminal -- ignoring");
  return;
 }


 VAR_10 = FUNC_1(VAR_0, &VAR_7);
 if (VAR_10 < 0) {
  FUNC_5("Can't stat stdin");
  return;
 }

 if (FUNC_0(VAR_7.st_mode)) {
  FUNC_3("(stdout)", VAR_7.st_size);
  VAR_9 = (uint32_t)VAR_7.st_mtime;
 } else {
  VAR_8 = FUNC_8(((void*)0));
  if (VAR_8 == -1) {
   FUNC_5("time");
   return;
  }
  VAR_9 = (uint32_t)VAR_8;
 }

 VAR_6 =

  FUNC_2(VAR_0, VAR_1, &VAR_5, "", VAR_9);

        if (VAR_4 && !VAR_3 && VAR_6 != -1 && VAR_5 != -1)
  FUNC_7(((void*)0), ((void*)0), VAR_6, VAR_5);

}

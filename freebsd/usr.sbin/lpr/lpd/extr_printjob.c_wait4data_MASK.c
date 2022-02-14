
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_mtime; } ;
struct printer {int printer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char const* VAR_5 ;
 int FUNC_0 (struct printer*,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char const*,struct stat*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,int ,...) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct printer *VAR_6, const char *VAR_7)
{
 const char *VAR_8;
 int VAR_9;
 u_int VAR_10;
 size_t VAR_11, VAR_12;
 time_t VAR_13, VAR_14, VAR_15;
 struct stat VAR_16;


 VAR_11 = FUNC_4(VAR_7);
 VAR_12 = FUNC_4(VAR_5);
 if (VAR_11 > VAR_12) {
  VAR_8 = VAR_7 + VAR_11 - VAR_12;
  if (FUNC_3(VAR_8, VAR_5) == 0)
   return;
 }





 VAR_13 = 0;
 VAR_9 = FUNC_2(VAR_7, &VAR_16);
 while (VAR_9 < 0 && VAR_13 < VAR_3) {
  if (VAR_13 == 0)
   FUNC_0(VAR_6, "Waiting for data file from remote host");
  VAR_13 += VAR_4 - FUNC_1(VAR_4);
  VAR_9 = FUNC_2(VAR_7, &VAR_16);
 }
 if (VAR_9 < 0) {

  FUNC_5(VAR_1, "%s: wait4data() abandoned wait for %s",
      VAR_6->printer, VAR_7);
  return;
 }
 VAR_15 = VAR_16.st_mtime;
 VAR_14 = FUNC_6(((void*)0));
 if (VAR_16.st_mtime >= VAR_14 - VAR_4) {
  if (VAR_16.st_mtime >= VAR_14)
   VAR_10 = VAR_4;
  else
   VAR_10 = VAR_14 - VAR_16.st_mtime;
  if (VAR_13 == 0)
   FUNC_0(VAR_6, "Waiting for data file from remote host");
  VAR_13 += VAR_10 - FUNC_1(VAR_10);
  VAR_9 = FUNC_2(VAR_7, &VAR_16);
 }
 VAR_10 = VAR_4;
 while (VAR_9 == 0 && VAR_13 < VAR_2) {
  if (VAR_16.st_mtime == VAR_15)
   break;
  VAR_15 = VAR_16.st_mtime;
  VAR_13 += VAR_10 - FUNC_1(VAR_10);
  VAR_9 = FUNC_2(VAR_7, &VAR_16);
 }

 if (VAR_9 != 0)
  FUNC_5(VAR_1, "%s: %s disappeared during wait4data()",
      VAR_6->printer, VAR_7);
 else if (VAR_13 > VAR_2)
  FUNC_5(VAR_1,
      "%s: %s still changing after %lu secs in wait4data()",
      VAR_6->printer, VAR_7, (unsigned long)VAR_13);





}

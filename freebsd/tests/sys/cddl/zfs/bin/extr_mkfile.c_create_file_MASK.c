
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,unsigned long long) ;
 scalar_t__ FUNC_3 (int,scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_4 (char*,int ,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (int,int ,size_t) ;

__attribute__((used)) static int
FUNC_6(char *VAR_8, unsigned long long VAR_9)
{
 int VAR_10;
 size_t VAR_11;
 ssize_t VAR_12;

 if (VAR_7) {
  FUNC_2(VAR_6, "%s %llu bytes\n", VAR_8, VAR_9);
  FUNC_1(VAR_6);
 }


 if ((VAR_10 = FUNC_4(VAR_8, VAR_0, VAR_1)) < 0) {
  return -1;
 }


 if ((FUNC_3(VAR_10, (off_t)(VAR_9 - 1LL), VAR_3) == (off_t)-1) ||
     (FUNC_5(VAR_10, VAR_4, (size_t)1) == (ssize_t)-1)) {





  return -1;
 }


 if (!VAR_5) {
  if (FUNC_3(VAR_10, (off_t)0, VAR_3) == (off_t)-1) {

   return -1;
  }
  while (VAR_9) {
   VAR_11 = (VAR_9 > VAR_2) ? VAR_2 : VAR_9;
   if ((VAR_12 = FUNC_5(VAR_10, VAR_4, VAR_11)) == (ssize_t)-1) {

    return -1;
   }
   VAR_9 -= VAR_12;
  }
 }
 FUNC_0(VAR_10);

 return 0;
}

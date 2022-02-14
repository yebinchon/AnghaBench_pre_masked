
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ssize_t ;
typedef int hashsig_in_progress ;
typedef int git_hashsig_option_t ;
typedef int git_hashsig ;
typedef int buf ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,scalar_t__,int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,int *,int) ;

int FUNC_11(
 git_hashsig **VAR_1,
 const char *VAR_2,
 git_hashsig_option_t VAR_3)
{
 uint8_t VAR_4[0x1000];
 ssize_t VAR_5 = 0;
 int VAR_6 = 0, VAR_7;
 hashsig_in_progress VAR_8;
 git_hashsig *VAR_9 = FUNC_6(VAR_3);
 FUNC_0(VAR_9);

 if ((VAR_7 = FUNC_3(VAR_2)) < 0) {
  FUNC_1(VAR_9);
  return VAR_7;
 }

 FUNC_8(&VAR_8, VAR_9);

 while (!VAR_6) {
  if ((VAR_5 = FUNC_10(VAR_7, VAR_4, sizeof(VAR_4))) <= 0) {
   if ((VAR_6 = (int)VAR_5) < 0)
    FUNC_2(VAR_0,
     "read error on '%s' calculating similarity hashes", VAR_2);
   break;
  }

  VAR_6 = FUNC_5(VAR_9, VAR_4, VAR_5, &VAR_8);
 }

 FUNC_9(VAR_7);

 if (!VAR_6)
  VAR_6 = FUNC_7(VAR_9);

 if (!VAR_6)
  *VAR_1 = VAR_9;
 else
  FUNC_4(VAR_9);

 return VAR_6;
}

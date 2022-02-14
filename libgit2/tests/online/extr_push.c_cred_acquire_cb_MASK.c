
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_cred ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,int ,int ,int ,int ) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(
 git_cred **VAR_10,
 const char *VAR_11,
 const char *VAR_12,
 unsigned int VAR_13,
 void *VAR_14)
{
 FUNC_0(VAR_11);
 FUNC_0(VAR_12);
 FUNC_0(VAR_14);

 if (VAR_2 & VAR_13) {
  if (!VAR_9) {
   FUNC_5("GITTEST_REMOTE_USER must be set\n");
   return -1;
  }

  return FUNC_3(VAR_10, VAR_9);
 }

 if (VAR_0 & VAR_13) {
  if (!VAR_4) {
   FUNC_5("GITTEST_REMOTE_DEFAULT must be set to use NTLM/Negotiate credentials\n");
   return -1;
  }

  return FUNC_1(VAR_10);
 }

 if (VAR_1 & VAR_13) {
  if (!VAR_9 || !VAR_8 || !VAR_6 || !VAR_7) {
   FUNC_5("GITTEST_REMOTE_USER, GITTEST_REMOTE_SSH_PUBKEY, GITTEST_REMOTE_SSH_KEY and GITTEST_REMOTE_SSH_PASSPHRASE must be set\n");
   return -1;
  }

  return FUNC_2(VAR_10, VAR_9, VAR_8, VAR_6, VAR_7);
 }

 if (VAR_3 & VAR_13) {
  if (!VAR_9 || !VAR_5) {
   FUNC_5("GITTEST_REMOTE_USER and GITTEST_REMOTE_PASS must be set\n");
   return -1;
  }

  return FUNC_4(VAR_10, VAR_9, VAR_5);
 }

 return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_opts {int explicit_cleanup; int * gpg_sign; int default_msg_cleanup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const**,char const*,char const*) ;
 int FUNC_4 (char const*,char const*,int *) ;
 int FUNC_5 (char const*,char const*,int *) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ,char const*) ;
 int * FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_4, const char *VAR_5, void *VAR_6)
{
 struct replay_opts *VAR_7 = VAR_6;
 int VAR_8;

 if (!FUNC_6(VAR_4, "commit.cleanup")) {
  const char *VAR_9;

  VAR_8 = FUNC_3(&VAR_9, VAR_4, VAR_5);
  if (VAR_8)
   return VAR_8;

  if (!FUNC_6(VAR_9, "verbatim")) {
   VAR_7->default_msg_cleanup = VAR_1;
   VAR_7->explicit_cleanup = 1;
  } else if (!FUNC_6(VAR_9, "whitespace")) {
   VAR_7->default_msg_cleanup = VAR_3;
   VAR_7->explicit_cleanup = 1;
  } else if (!FUNC_6(VAR_9, "strip")) {
   VAR_7->default_msg_cleanup = VAR_0;
   VAR_7->explicit_cleanup = 1;
  } else if (!FUNC_6(VAR_9, "scissors")) {
   VAR_7->default_msg_cleanup = VAR_2;
   VAR_7->explicit_cleanup = 1;
  } else {
   FUNC_7(FUNC_0("invalid commit message cleanup mode '%s'"),
      VAR_9);
  }

  FUNC_1((char *)VAR_9);
  return VAR_8;
 }

 if (!FUNC_6(VAR_4, "commit.gpgsign")) {
  VAR_7->gpg_sign = FUNC_2(VAR_4, VAR_5) ? FUNC_8("") : ((void*)0);
  return 0;
 }

 VAR_8 = FUNC_5(VAR_4, VAR_5, ((void*)0));
 if (VAR_8)
  return VAR_8;

 return FUNC_4(VAR_4, VAR_5, ((void*)0));
}

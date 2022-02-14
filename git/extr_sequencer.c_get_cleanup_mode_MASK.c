
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum commit_msg_cleanup_mode { ____Placeholder_commit_msg_cleanup_mode } commit_msg_cleanup_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*,char*) ;

enum commit_msg_cleanup_mode FUNC_3(const char *VAR_4,
 int VAR_5)
{
 if (!VAR_4 || !FUNC_2(VAR_4, "default"))
  return VAR_5 ? VAR_0 :
        VAR_3;
 else if (!FUNC_2(VAR_4, "verbatim"))
  return VAR_1;
 else if (!FUNC_2(VAR_4, "whitespace"))
  return VAR_3;
 else if (!FUNC_2(VAR_4, "strip"))
  return VAR_0;
 else if (!FUNC_2(VAR_4, "scissors"))
  return VAR_5 ? VAR_2 :
        VAR_3;
 else
  FUNC_1(FUNC_0("Invalid cleanup mode %s"), VAR_4);
}

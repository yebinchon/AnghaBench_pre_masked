
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct repository {int dummy; } ;
typedef enum replay_action { ____Placeholder_replay_action } replay_action ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,char const**) ;
 scalar_t__ FUNC_3 (struct strbuf*,char const*,int ) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (char*,char*) ;

int FUNC_6(struct repository *VAR_8, enum replay_action *VAR_9)
{
 const char *VAR_10, *VAR_11;
 struct strbuf VAR_12 = VAR_4;
 int VAR_13 = 0;

 VAR_10 = FUNC_1();
 if (FUNC_3(&VAR_12, VAR_10, 0) < 0) {
  if (VAR_7 == VAR_0 || VAR_7 == VAR_1)
   return -1;
  else
   return FUNC_0("unable to open '%s'", VAR_10);
 }
 VAR_11 = VAR_12.buf + FUNC_5(VAR_12.buf, " \t\r\n");
 if (FUNC_2(VAR_5, &VAR_11) && (*VAR_11 == ' ' || *VAR_11 == '\t'))
  *VAR_9 = VAR_2;
 else if (FUNC_2(VAR_6, &VAR_11) &&
   (*VAR_11 == ' ' || *VAR_11 == '\t'))
  *VAR_9 = VAR_3;
 else
  VAR_13 = -1;

 FUNC_4(&VAR_12);

 return VAR_13;
}

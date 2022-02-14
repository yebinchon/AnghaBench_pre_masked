
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct object_id*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (struct strbuf*,int ,int) ;
 int FUNC_5 (struct strbuf*) ;
 int VAR_1 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ,struct object_id*) ;

int FUNC_9(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 struct strbuf VAR_5 = VAR_0;
 struct object_id VAR_6;

 if (VAR_2 != 1)
  FUNC_6("git mktag");

 if (FUNC_4(&VAR_5, 0, 4096) < 0) {
  FUNC_1("could not read from stdin");
 }



 if (FUNC_7(VAR_5.buf, VAR_5.len) < 0)
  FUNC_0("invalid tag signature file");

 if (FUNC_8(VAR_5.buf, VAR_5.len, VAR_1, &VAR_6) < 0)
  FUNC_0("unable to write tag file");

 FUNC_5(&VAR_5);
 FUNC_3("%s\n", FUNC_2(&VAR_6));
 return 0;
}

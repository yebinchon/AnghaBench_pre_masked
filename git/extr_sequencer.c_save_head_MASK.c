
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct lock_file {int dummy; } ;
typedef scalar_t__ ssize_t ;


 struct lock_file VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct lock_file*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,...) ;
 int FUNC_4 () ;
 int FUNC_5 (struct lock_file*,int ,int ) ;
 int FUNC_6 (struct lock_file*) ;
 int FUNC_7 (struct strbuf*,char*,char const*) ;
 int FUNC_8 (struct strbuf*) ;
 scalar_t__ FUNC_9 (int,int ,int ) ;

__attribute__((used)) static int FUNC_10(const char *VAR_2)
{
 struct lock_file VAR_3 = VAR_0;
 struct strbuf VAR_4 = VAR_1;
 int VAR_5;
 ssize_t VAR_6;

 VAR_5 = FUNC_5(&VAR_3, FUNC_4(), 0);
 if (VAR_5 < 0)
  return FUNC_3(FUNC_0("could not lock HEAD"));
 FUNC_7(&VAR_4, "%s\n", VAR_2);
 VAR_6 = FUNC_9(VAR_5, VAR_4.buf, VAR_4.len);
 FUNC_8(&VAR_4);
 if (VAR_6 < 0) {
  FUNC_3(FUNC_0("could not write to '%s'"), FUNC_4());
  FUNC_6(&VAR_3);
  return -1;
 }
 if (FUNC_1(&VAR_3) < 0)
  return FUNC_2(FUNC_0("failed to finalize '%s'"), FUNC_4());
 return 0;
}

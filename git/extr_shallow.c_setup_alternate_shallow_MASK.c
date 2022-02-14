
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct oid_array {int dummy; } ;
struct lock_file {int dummy; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (struct lock_file*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lock_file*,int ,int ) ;
 int FUNC_5 (struct strbuf*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int,int ,int ) ;
 scalar_t__ FUNC_7 (struct strbuf*,int ,struct oid_array const*) ;

void FUNC_8(struct lock_file *VAR_3,
        const char **VAR_4,
        const struct oid_array *VAR_5)
{
 struct strbuf VAR_6 = VAR_1;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_3,
           FUNC_3(VAR_2),
           VAR_0);
 FUNC_0(VAR_2);
 if (FUNC_7(&VAR_6, 0, VAR_5)) {
  if (FUNC_6(VAR_7, VAR_6.buf, VAR_6.len) < 0)
   FUNC_1("failed to write to %s",
      FUNC_2(VAR_3));
  *VAR_4 = FUNC_2(VAR_3);
 } else




  *VAR_4 = "";
 FUNC_5(&VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;
struct rev_info {int dummy; } ;
struct argv_array {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char*,struct rev_info*,int ,int ) ;
 int FUNC_2 (struct strbuf*,struct argv_array*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*,int) ;
 int FUNC_5 (struct strbuf*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct rev_info *VAR_4,
          struct argv_array *VAR_5)
{
 struct strbuf VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 VAR_8 = VAR_3;
 VAR_3 = 0;

 FUNC_4(&VAR_6, 1000);
 while (FUNC_3(&VAR_6, VAR_2) != VAR_0) {
  int VAR_9 = VAR_6.len;
  if (!VAR_9)
   break;
  if (VAR_6.buf[0] == '-') {
   if (VAR_9 == 2 && VAR_6.buf[1] == '-') {
    VAR_7 = 1;
    break;
   }
   FUNC_0("options not supported in --stdin mode");
  }
  if (FUNC_1(VAR_6.buf, VAR_4, 0,
     VAR_1))
   FUNC_0("bad revision '%s'", VAR_6.buf);
 }
 if (VAR_7)
  FUNC_2(&VAR_6, VAR_5);

 FUNC_5(&VAR_6);
 VAR_3 = VAR_8;
}

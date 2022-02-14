
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct TYPE_2__ {int path; } ;


 int FUNC_0 (char*) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct strbuf*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char*,int) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char) ;
 int FUNC_9 (struct strbuf*,char*) ;
 int FUNC_10 (struct strbuf*,int ,char*,int) ;
 int FUNC_11 (struct strbuf*,int ,int) ;
 int FUNC_12 (struct strbuf*) ;
 int FUNC_13 (struct strbuf*) ;
 int FUNC_14 (struct strbuf*,int ,int,char*,int) ;

__attribute__((used)) static int FUNC_15(struct strbuf *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 char *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_4(VAR_2->buf, 1);
 if (VAR_4) {
  FUNC_13(VAR_2);
  FUNC_9(VAR_2, VAR_4);
  FUNC_6(VAR_4);
 }

 if (VAR_2->buf[0] == '.' && FUNC_8(VAR_2->buf[1])) {
  const char *VAR_6;

  if (!VAR_1 || !VAR_1->path)
   return FUNC_3(FUNC_1("relative config include "
           "conditionals must come from files"));

  FUNC_11(&VAR_3, VAR_1->path, 1);
  VAR_6 = FUNC_5(VAR_3.buf);
  if (!VAR_6)
   FUNC_0("how is this possible?");
  FUNC_14(VAR_2, 0, 1, VAR_3.buf, VAR_6 - VAR_3.buf);
  VAR_5 = VAR_6 - VAR_3.buf + 1 ;
 } else if (!FUNC_7(VAR_2->buf))
  FUNC_10(VAR_2, 0, "**/", 3);

 FUNC_2(VAR_2);

 FUNC_12(&VAR_3);
 return VAR_5;
}

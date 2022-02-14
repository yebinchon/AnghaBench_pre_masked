
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct line_buffer {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct line_buffer*,int ) ;
 int FUNC_1 (struct line_buffer*,struct strbuf*,int ) ;
 int FUNC_2 (struct line_buffer*,int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int ,int,int ,int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int VAR_1 ;
 int FUNC_6 (struct strbuf*,char) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(const char *VAR_2, const char *VAR_3, struct line_buffer *VAR_4)
{
 if (FUNC_5(VAR_2, "binary ")) {
  struct strbuf VAR_5 = VAR_0;
  FUNC_6(&VAR_5, '>');
  FUNC_1(VAR_4, &VAR_5, FUNC_8(VAR_3));
  FUNC_4(VAR_5.buf, 1, VAR_5.len, VAR_1);
  FUNC_7(&VAR_5);
 } else if (FUNC_5(VAR_2, "copy ")) {
  FUNC_0(VAR_4, FUNC_8(VAR_3));
 } else if (FUNC_5(VAR_2, "skip ")) {
  FUNC_2(VAR_4, FUNC_8(VAR_3));
 } else {
  FUNC_3("unrecognized command: %s", VAR_2);
 }
}

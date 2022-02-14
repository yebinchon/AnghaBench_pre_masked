
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char* buf; } ;
struct format_commit_context {scalar_t__ flush_type; } ;


 int FUNC_0 (struct strbuf*,char const*,void*) ;
 int FUNC_1 (struct strbuf*,char const*,void*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct strbuf*,size_t,char*,int) ;
 int FUNC_3 (struct strbuf*,int) ;

__attribute__((used)) static size_t FUNC_4(struct strbuf *VAR_1,
     const char *VAR_2,
     void *VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 enum {
  NO_MAGIC,
  ADD_LF_BEFORE_NON_EMPTY,
  DEL_LF_BEFORE_EMPTY,
  ADD_SP_BEFORE_NON_EMPTY
 } VAR_6 = NO_MAGIC;

 switch (VAR_2[0]) {
 case '-':
  VAR_6 = DEL_LF_BEFORE_EMPTY;
  break;
 case '+':
  VAR_6 = ADD_LF_BEFORE_NON_EMPTY;
  break;
 case ' ':
  VAR_6 = ADD_SP_BEFORE_NON_EMPTY;
  break;
 default:
  break;
 }
 if (VAR_6 != NO_MAGIC)
  VAR_2++;

 VAR_5 = VAR_1->len;
 if (((struct format_commit_context *)VAR_3)->flush_type != VAR_0)
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 else
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_6 == NO_MAGIC)
  return VAR_4;

 if ((VAR_5 == VAR_1->len) && VAR_6 == DEL_LF_BEFORE_EMPTY) {
  while (VAR_1->len && VAR_1->buf[VAR_1->len - 1] == '\n')
   FUNC_3(VAR_1, VAR_1->len - 1);
 } else if (VAR_5 != VAR_1->len) {
  if (VAR_6 == ADD_LF_BEFORE_NON_EMPTY)
   FUNC_2(VAR_1, VAR_5, "\n", 1);
  else if (VAR_6 == ADD_SP_BEFORE_NON_EMPTY)
   FUNC_2(VAR_1, VAR_5, " ", 1);
 }
 return VAR_4 + 1;
}

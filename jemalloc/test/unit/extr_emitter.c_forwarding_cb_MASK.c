
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mid_quote; size_t buf; size_t len; } ;
typedef TYPE_1__ buf_descriptor_t ;


 int FUNC_0 (size_t,int ,char*) ;
 int FUNC_1 (size_t,int ,char*) ;
 int FUNC_2 (char*,...) ;
 size_t FUNC_3 (size_t,size_t,char*,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2, const char *VAR_3) {
 buf_descriptor_t *VAR_4 = (buf_descriptor_t *)VAR_2;

 if (VAR_1) {
  FUNC_2("%s", VAR_3);
 }
 if (VAR_0) {
  const char *VAR_5 = VAR_3;
  while (*VAR_5 != '\0') {
   if (!VAR_4->mid_quote) {
    FUNC_2("\"");
    VAR_4->mid_quote = 1;
   }
   switch (*VAR_5) {
   case '\\':
    FUNC_2("\\");
    break;
   case '\"':
    FUNC_2("\\\"");
    break;
   case '\t':
    FUNC_2("\\t");
    break;
   case '\n':
    FUNC_2("\\n\"\n");
    VAR_4->mid_quote = 0;
    break;
   default:
    FUNC_2("%c", *VAR_5);
   }
   VAR_5++;
  }
 }

 size_t VAR_6 = FUNC_3(VAR_4->buf,
     VAR_4->len, "%s", VAR_3);
 FUNC_0(VAR_6, FUNC_4(VAR_3), "Buffer overflow!");
 VAR_4->buf += VAR_6;
 VAR_4->len -= VAR_6;
 FUNC_1(VAR_4->len, 0, "Buffer out of space!");
}

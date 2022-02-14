
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {int len; char* buf; } ;
struct json_writer {TYPE_1__ json; } ;


 int FUNC_0 (struct strbuf*,char) ;
 int FUNC_1 (struct strbuf*,char,int) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0,
       const struct json_writer *VAR_1,
       int VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_1->json.len; VAR_3++) {
  char VAR_4 = VAR_1->json.buf[VAR_3];
  FUNC_0(VAR_0, VAR_4);
  if (VAR_4 == '\n')
   FUNC_1(VAR_0, ' ', VAR_2);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct json_writer {struct strbuf json; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char*,double) ;
 int FUNC_1 (struct strbuf*) ;

__attribute__((used)) static void FUNC_2(struct json_writer *VAR_1, int VAR_2,
         double VAR_3)
{
 if (VAR_2 < 0) {
  FUNC_0(&VAR_1->json, "%f", VAR_3);
 } else {
  struct strbuf VAR_4 = VAR_0;
  FUNC_0(&VAR_4, "%%.%df", VAR_2);
  FUNC_0(&VAR_1->json, VAR_4.buf, VAR_3);
  FUNC_1(&VAR_4);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {char* buf; int len; } ;
struct TYPE_3__ {unsigned int bit; char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char*,int) ;
 int FUNC_3 (struct strbuf*,char*) ;

__attribute__((used)) static void FUNC_4(struct strbuf *VAR_1, int VAR_2, unsigned VAR_3)
{
 int VAR_4;
 FUNC_3(VAR_1, ":(");
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  if (VAR_3 & VAR_0[VAR_4].bit) {
   if (VAR_1->buf[VAR_1->len - 1] != '(')
    FUNC_1(VAR_1, ',');
   FUNC_3(VAR_1, VAR_0[VAR_4].name);
  }
 FUNC_2(VAR_1, ",prefix:%d)", VAR_2);
}

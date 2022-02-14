
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
typedef int (* config_fn_t ) (int ,char*,void*) ;
struct TYPE_2__ {int linenr; scalar_t__ eof; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 char* FUNC_2 () ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(config_fn_t VAR_1, void *VAR_2, struct strbuf *VAR_3)
{
 int VAR_4;
 char *VAR_5;
 int VAR_6;


 for (;;) {
  VAR_4 = FUNC_0();
  if (VAR_0->eof)
   break;
  if (!FUNC_1(VAR_4))
   break;
  FUNC_3(VAR_3, FUNC_4(VAR_4));
 }

 while (VAR_4 == ' ' || VAR_4 == '\t')
  VAR_4 = FUNC_0();

 VAR_5 = ((void*)0);
 if (VAR_4 != '\n') {
  if (VAR_4 != '=')
   return -1;
  VAR_5 = FUNC_2();
  if (!VAR_5)
   return -1;
 }





 VAR_0->linenr--;
 VAR_6 = VAR_1(VAR_3->buf, VAR_5, VAR_2);
 if (VAR_6 >= 0)
  VAR_0->linenr++;
 return VAR_6;
}

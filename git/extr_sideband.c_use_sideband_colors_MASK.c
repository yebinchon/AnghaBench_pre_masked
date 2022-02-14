
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct TYPE_3__ {int color; int keyword; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char**) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (struct strbuf*,char*,char const*,int ) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static int FUNC_7(void)
{
 static int VAR_3 = -1;

 const char *VAR_4 = "color.remote";
 struct strbuf VAR_5 = VAR_1;
 char *VAR_6;
 int VAR_7;

 if (VAR_3 >= 0)
  return VAR_3;

 if (!FUNC_3(VAR_4, &VAR_6)) {
  VAR_3 = FUNC_2(VAR_4, VAR_6);
 } else if (!FUNC_3("color.ui", &VAR_6)) {
  VAR_3 = FUNC_2("color.ui", VAR_6);
 } else {
  VAR_3 = VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  FUNC_6(&VAR_5);
  FUNC_4(&VAR_5, "%s.%s", VAR_4, VAR_2[VAR_7].keyword);
  if (FUNC_3(VAR_5.buf, &VAR_6))
   continue;
  if (FUNC_1(VAR_6, VAR_2[VAR_7].color))
   continue;
 }
 FUNC_5(&VAR_5);
 return VAR_3;
}

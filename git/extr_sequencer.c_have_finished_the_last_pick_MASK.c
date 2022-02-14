
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 () ;
 scalar_t__ FUNC_2 (struct strbuf*,char const*,int ) ;
 int FUNC_3 (struct strbuf*) ;
 char* FUNC_4 (int ,char) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct strbuf VAR_3 = VAR_1;
 const char *VAR_4;
 const char *VAR_5 = FUNC_1();
 int VAR_6 = 0;

 if (FUNC_2(&VAR_3, VAR_5, 0) < 0) {
  if (VAR_2 == VAR_0) {
   return 0;
  } else {
   FUNC_0("unable to open '%s'", VAR_5);
   return 0;
  }
 }

 VAR_4 = FUNC_4(VAR_3.buf, '\n');
 if (!VAR_4 || !VAR_4[1])
  VAR_6 = 1;

 FUNC_3(&VAR_3);

 return VAR_6;
}

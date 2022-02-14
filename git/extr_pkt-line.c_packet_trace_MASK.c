
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,unsigned int,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct strbuf*,char const) ;
 int FUNC_4 (struct strbuf*,char*,char const,...) ;
 int FUNC_5 (struct strbuf*,unsigned int) ;
 int FUNC_6 (struct strbuf*) ;
 unsigned int FUNC_7 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int *,struct strbuf*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(const char *VAR_2, unsigned int VAR_3, int VAR_4)
{
 int VAR_5;
 struct strbuf VAR_6;
 static int VAR_7, VAR_8;

 if (!FUNC_9(&VAR_1) && !FUNC_9(&VAR_0))
  return;

 if (VAR_7) {
  if (FUNC_1(VAR_2, VAR_3, VAR_8))
   return;
 } else if (FUNC_2(VAR_2, "PACK") || FUNC_2(VAR_2, "\1PACK")) {
  VAR_7 = 1;
  VAR_8 = *VAR_2 == '\1';
  FUNC_1(VAR_2, VAR_3, VAR_8);





  VAR_2 = "PACK ...";
  VAR_3 = FUNC_7(VAR_2);
 }

 if (!FUNC_9(&VAR_1))
  return;


 FUNC_5(&VAR_6, VAR_3+32);

 FUNC_4(&VAR_6, "packet: %12s%c ",
      FUNC_0(), VAR_4 ? '>' : '<');


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {

  if (VAR_2[VAR_5] == '\n')
   continue;
  if (VAR_2[VAR_5] >= 0x20 && VAR_2[VAR_5] <= 0x7e)
   FUNC_3(&VAR_6, VAR_2[VAR_5]);
  else
   FUNC_4(&VAR_6, "\\%o", VAR_2[VAR_5]);
 }

 FUNC_3(&VAR_6, '\n');
 FUNC_8(&VAR_1, &VAR_6);
 FUNC_6(&VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*,char*,char const**,int*,char const**) ;
 int FUNC_3 (struct strbuf*,char const*,int) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(const char *VAR_0, struct strbuf *VAR_1,
      struct strbuf *VAR_2)
{
 const char *VAR_3, *VAR_4;
 int VAR_5, VAR_6;
 VAR_6 = FUNC_2(VAR_0, "submodule", &VAR_3,
   &VAR_5, &VAR_4);
 if (VAR_6 < 0 || !VAR_3)
  return 0;

 FUNC_3(VAR_1, VAR_3, VAR_5);
 if (FUNC_1(VAR_1->buf) < 0) {
  FUNC_6(FUNC_0("ignoring suspicious submodule name: %s"), VAR_1->buf);
  FUNC_5(VAR_1);
  return 0;
 }

 FUNC_4(VAR_2, VAR_4);

 return 1;
}

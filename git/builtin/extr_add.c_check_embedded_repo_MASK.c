
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,char*) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(const char *VAR_4)
{
 struct strbuf VAR_5 = VAR_0;

 if (!VAR_3)
  return;
 if (!FUNC_2(VAR_4, "/"))
  return;


 FUNC_3(&VAR_5, VAR_4);
 FUNC_5(&VAR_5, "/");

 FUNC_6(FUNC_0("adding embedded git repository: %s"), VAR_5.buf);
 if (VAR_1) {
  FUNC_1(VAR_2, VAR_5.buf, VAR_5.buf);

  VAR_1 = 0;
 }

 FUNC_4(&VAR_5);
}

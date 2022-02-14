
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xml_ctx {char const* name; int len; int (* userFunc ) (struct xml_ctx*,int ) ;int cdata; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct xml_ctx*,int ) ;
 char const* FUNC_4 (char const*,int) ;
 int FUNC_5 (char const*,int,char*,char const*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_0, const char *VAR_1, const char **VAR_2)
{
 struct xml_ctx *VAR_3 = (struct xml_ctx *)VAR_0;
 const char *VAR_4 = FUNC_1(VAR_1, ':');
 int VAR_5, VAR_6;

 if (VAR_4 == ((void*)0))
  VAR_4 = VAR_1;
 else
  VAR_4++;

 VAR_5 = FUNC_2(VAR_3->name);
 VAR_6 = VAR_5 + FUNC_2(VAR_4) + 2;

 if (VAR_6 > VAR_3->len) {
  VAR_3->name = FUNC_4(VAR_3->name, VAR_6);
  VAR_3->len = VAR_6;
 }
 FUNC_5(VAR_3->name + VAR_5, VAR_3->len - VAR_5, ".%s", VAR_4);

 FUNC_0(VAR_3->cdata);

 VAR_3->userFunc(VAR_3, 0);
}

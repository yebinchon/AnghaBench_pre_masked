
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {int url; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char const*,int ) ;
 int FUNC_2 (struct transport*,char const*,char const*) ;
 int FUNC_3 (int ,char const*,int ) ;

__attribute__((used)) static void FUNC_4(struct transport *VAR_0, const char *VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_1(FUNC_0("Option \"%s\" value \"%s\" is not valid for %s"),
      VAR_1, VAR_2, VAR_0->url);
 if (VAR_3 > 0)
  FUNC_3(FUNC_0("Option \"%s\" is ignored for %s\n"),
   VAR_1, VAR_0->url);
}

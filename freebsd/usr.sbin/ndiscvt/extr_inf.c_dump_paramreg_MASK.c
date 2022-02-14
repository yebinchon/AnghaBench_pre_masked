
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {int dummy; } ;
struct reg {char* subkey; } ;


 int FUNC_0 (struct section const*,struct reg const*,int) ;
 int FUNC_1 (struct section const*,struct reg const*) ;
 int FUNC_2 (struct section const*,struct reg const*) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(const struct section *VAR_1, const struct reg *VAR_2, int VAR_3)
{
 const char *VAR_4;

 VAR_4 = VAR_2->subkey + FUNC_4("Ndi\\params\\");
 FUNC_3(VAR_0, "\n\t{ \"%s\",", VAR_4);
 FUNC_1(VAR_1, VAR_2);
 FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_0, "\",");
 FUNC_0(VAR_1, VAR_2, VAR_3);

 return;
}

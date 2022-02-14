
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbcfg_env {int type; } ;



 int FUNC_0 (struct rbcfg_env const*,char const*) ;

__attribute__((used)) static int
FUNC_1(const struct rbcfg_env *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_0->type) {
 case 128:
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  break;
 }

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdtab {char* name; char* alias; scalar_t__ func; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static struct cmdtab const *
FUNC_2(struct cmdtab const *VAR_0, const char *VAR_1, int *VAR_2)
{
  int VAR_3;
  int VAR_4;
  struct cmdtab const *VAR_5;

  VAR_5 = ((void*)0);
  VAR_4 = FUNC_0(VAR_1);
  VAR_3 = 0;
  while (VAR_0->func) {
    if (VAR_0->name && FUNC_1(VAR_1, VAR_0->name, VAR_4) == 0) {
      if (VAR_0->name[VAR_4] == '\0') {
 *VAR_2 = 1;
 return VAR_0;
      }
      VAR_3++;
      VAR_5 = VAR_0;
    } else if (VAR_0->alias && FUNC_1(VAR_1, VAR_0->alias, VAR_4) == 0) {
      if (VAR_0->alias[VAR_4] == '\0') {
 *VAR_2 = 1;
 return VAR_0;
      }
      VAR_3++;
      VAR_5 = VAR_0;
    }
    VAR_0++;
  }
  *VAR_2 = VAR_3;
  return VAR_5;
}

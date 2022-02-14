
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link {int name; } ;
struct cmdargs {int prompt; } ;


 struct link* FUNC_0 (struct cmdargs const*) ;
 int FUNC_1 (struct link*,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct cmdargs const *VAR_0)
{
  struct link *VAR_1 = FUNC_0(VAR_0);

  FUNC_2(VAR_0->prompt, "%s:\n", VAR_1->name);
  FUNC_1(VAR_1, VAR_0->prompt);
  return 0;
}

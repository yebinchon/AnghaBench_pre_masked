
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apply_state {int prefix; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct apply_state *VAR_0, char **VAR_1)
{
 char *VAR_2 = *VAR_1;
 if (!VAR_2)
  return;
 *VAR_1 = FUNC_1(VAR_0->prefix, *VAR_1);
 FUNC_0(VAR_2);
}

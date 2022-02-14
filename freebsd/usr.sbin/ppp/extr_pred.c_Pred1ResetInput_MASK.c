
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pred1_state {int dict; scalar_t__ hash; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
  struct pred1_state *VAR_2 = (struct pred1_state *)VAR_1;
  VAR_2->hash = 0;
  FUNC_1(VAR_2->dict, '\0', sizeof VAR_2->dict);
  FUNC_0(VAR_0, "Predictor1: Input channel reset\n");
}

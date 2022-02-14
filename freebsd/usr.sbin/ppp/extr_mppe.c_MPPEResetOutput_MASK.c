
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mppe_state {int flushnext; scalar_t__ stateless; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1)
{
  struct mppe_state *VAR_2 = (struct mppe_state *)VAR_1;

  if (VAR_2->stateless)
    FUNC_0(VAR_0, "MPPE: Unexpected output channel reset\n");
  else {
    FUNC_0(VAR_0, "MPPE: Output channel reset\n");
    VAR_2->flushnext = 1;
  }

  return 0;
}

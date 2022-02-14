
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mppe_state {int keybits; int* sesskey; } ;



__attribute__((used)) static void
FUNC_0(struct mppe_state *VAR_0)
{
  switch(VAR_0->keybits) {
  case 40:
    VAR_0->sesskey[2] = 0x9e;
    VAR_0->sesskey[1] = 0x26;
  case 56:
    VAR_0->sesskey[0] = 0xd1;
  case 128:
    break;
  }
}

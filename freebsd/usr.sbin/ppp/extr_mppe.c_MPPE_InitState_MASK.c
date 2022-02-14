
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mppe_state {int keylen; int keybits; int stateless; } ;
struct fsm_opt {int data; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 struct mppe_state* FUNC_0 (int,int) ;
 int FUNC_1 (struct mppe_state*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int*) ;

__attribute__((used)) static struct mppe_state *
FUNC_4(struct fsm_opt *VAR_3)
{
  struct mppe_state *VAR_4;
  u_int32_t VAR_5;

  if ((VAR_4 = FUNC_0(1, sizeof *VAR_4)) != ((void*)0)) {
    FUNC_3(VAR_3->data, &VAR_5);

    switch (VAR_5 & VAR_1) {
    case 130:
      VAR_4->keylen = 16;
      VAR_4->keybits = 128;
      break;
    case 128:
      VAR_4->keylen = 8;
      VAR_4->keybits = 56;
      break;
    case 129:
      VAR_4->keylen = 8;
      VAR_4->keybits = 40;
      break;
    default:
      FUNC_2(VAR_0, "Unexpected MPPE options 0x%08x\n", VAR_5);
      FUNC_1(VAR_4);
      return ((void*)0);
    }

    VAR_4->stateless = !!(VAR_5 & VAR_2);
  }

  return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int comp; unsigned int val; int name; int rawval; } ;
typedef TYPE_1__ _TCBVAR ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3(_TCBVAR *VAR_3,unsigned VAR_4,unsigned VAR_5,
        unsigned VAR_6,unsigned VAR_7)
{
  unsigned VAR_8=(unsigned) VAR_3->rawval;

  switch(VAR_3->comp) {
  case 132: VAR_3->val=VAR_8; break;
  case 128: VAR_3->val=VAR_8; break;
  case 129:
    VAR_3->val=(VAR_5 - VAR_8) & 0xFFFFFFFF;
    break;
  case 130:
    if (FUNC_1(VAR_3->name,"rx_frag")) {
      unsigned VAR_9=0;
      if (!FUNC_2(VAR_3->name,"rx_frag0_start_idx_raw"))
 VAR_9=VAR_8;
      VAR_3->val=(VAR_6+VAR_7+VAR_9) & 0xFFFFFFFF;
    } else {
      VAR_3->val=(VAR_6 - VAR_8) & 0xFFFFFFFF;
    }
    break;
  case 131: VAR_3->val=VAR_8; break;
  case 133:
    {
      VAR_3->val=VAR_8;
      if (VAR_2==VAR_4 || VAR_0==VAR_4 ||
   VAR_1==VAR_4) {






 VAR_3->val=0;
 VAR_3->val=VAR_8;
      }
    }
    break;
  default:
    FUNC_0("decompress_val, bad switch: %d",VAR_3->comp);
    break;
  }



}

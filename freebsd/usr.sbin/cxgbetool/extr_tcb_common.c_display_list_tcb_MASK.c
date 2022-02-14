
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int aux; int hi; int lo; scalar_t__ comp; int val; scalar_t__ rawval; } ;
typedef TYPE_1__ _TCBVAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1(_TCBVAR *VAR_2,int VAR_3)
{
  _TCBVAR *VAR_4=VAR_2;
  while (VAR_4->name!=((void*)0)) {
    if (VAR_4->aux==0 || VAR_4->aux==VAR_3) {
      if (VAR_4->hi-VAR_4->lo+1<=32) {
 FUNC_0("  %4d:%4d %31s: %10u (0x%1x)",VAR_4->lo,VAR_4->hi,VAR_4->name,
        (unsigned) VAR_4->rawval,(unsigned) VAR_4->rawval);
 if (VAR_1==VAR_4->comp || VAR_0==VAR_4->comp)
   FUNC_0("  -> %1u (0x%x)", VAR_4->val,VAR_4->val);
      } else {
 FUNC_0("  %4d:%4d %31s: 0x%1llx",VAR_4->lo,VAR_4->hi,VAR_4->name,
        VAR_4->rawval);
      }
      FUNC_0("\n");
    }
    VAR_4+=1;
  }
}

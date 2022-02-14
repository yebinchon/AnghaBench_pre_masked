
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int chip_id; } ;
struct TYPE_5__ {int xstop_reason; TYPE_1__ u; } ;
struct TYPE_6__ {TYPE_2__ xstop_error; } ;
struct OpalHMIEvent {TYPE_3__ u; } ;
typedef int reason ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,int ,...) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0,
     struct OpalHMIEvent *VAR_1)
{
 uint8_t VAR_2, VAR_3, VAR_4;





 if (!VAR_1->u.xstop_error.xstop_reason) {
  FUNC_1("%s	NPU checkstop on chip %x\n", VAR_0,
   FUNC_0(VAR_1->u.xstop_error.u.chip_id));
  return;
 }
 VAR_3 = sizeof(VAR_1->u.xstop_error.xstop_reason) /
  sizeof(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_2 = (VAR_1->u.xstop_error.xstop_reason >> (8 * VAR_4)) & 0xFF;
  if (VAR_2)
   FUNC_1("%s	NPU checkstop on chip %x: FIR%d bit %d is set\n",
    VAR_0,
    FUNC_0(VAR_1->u.xstop_error.u.chip_id),
    VAR_2 >> 6, VAR_2 & 0x3F);
 }
}

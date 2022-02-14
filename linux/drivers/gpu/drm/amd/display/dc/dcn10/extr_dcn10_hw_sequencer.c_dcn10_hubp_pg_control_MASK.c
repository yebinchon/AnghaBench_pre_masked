
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct dce_hwseq {TYPE_3__* ctx; } ;
struct TYPE_6__ {TYPE_2__* dc; } ;
struct TYPE_4__ {scalar_t__ disable_hubp_power_gate; } ;
struct TYPE_5__ {TYPE_1__ debug; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int,int) ;

__attribute__((used)) static void FUNC_4(
  struct dce_hwseq *VAR_16,
  unsigned int VAR_17,
  bool VAR_18)
{
 uint32_t VAR_19 = VAR_18 ? 0 : 1;
 uint32_t VAR_20 = VAR_18 ? 0 : 2;

 if (VAR_16->ctx->dc->debug.disable_hubp_power_gate)
  return;
 if (FUNC_1(VAR_1) == 0)
  return;

 switch (VAR_17) {
 case 0:
  FUNC_2(VAR_1,
    VAR_3, VAR_19);

  FUNC_3(VAR_2,
    VAR_0, VAR_20,
    1, 1000);
  break;
 case 1:
  FUNC_2(VAR_5,
    VAR_7, VAR_19);

  FUNC_3(VAR_6,
    VAR_4, VAR_20,
    1, 1000);
  break;
 case 2:
  FUNC_2(VAR_9,
    VAR_11, VAR_19);

  FUNC_3(VAR_10,
    VAR_8, VAR_20,
    1, 1000);
  break;
 case 3:
  FUNC_2(VAR_13,
    VAR_15, VAR_19);

  FUNC_3(VAR_14,
    VAR_12, VAR_20,
    1, 1000);
  break;
 default:
  FUNC_0();
  break;
 }
}

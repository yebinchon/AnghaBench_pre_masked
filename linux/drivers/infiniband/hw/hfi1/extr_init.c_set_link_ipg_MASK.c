
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct hfi1_pportdata {int ibmaxlen; TYPE_1__* cca_timer; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;
struct TYPE_6__ {scalar_t__ ccti_limit; TYPE_2__* entries; } ;
struct cc_state {TYPE_3__ cct; } ;
struct TYPE_5__ {scalar_t__ entry; } ;
struct TYPE_4__ {scalar_t__ ccti; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct hfi1_pportdata*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 struct cc_state* FUNC_2 (struct hfi1_pportdata*) ;
 int FUNC_3 (struct hfi1_devdata*,int ,scalar_t__) ;

void FUNC_4(struct hfi1_pportdata *VAR_4)
{
 struct hfi1_devdata *VAR_5 = VAR_4->dd;
 struct cc_state *VAR_6;
 int VAR_7;
 u16 VAR_8, VAR_9, VAR_10 = 0;
 u16 VAR_11, VAR_12;
 u64 VAR_13;
 u32 VAR_14;
 u32 VAR_15;





 VAR_6 = FUNC_2(VAR_4);

 if (!VAR_6)





  return;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  u16 VAR_16 = VAR_4->cca_timer[VAR_7].ccti;

  if (VAR_16 > VAR_10)
   VAR_10 = VAR_16;
 }

 VAR_9 = VAR_6->cct.ccti_limit;
 if (VAR_10 > VAR_9)
  VAR_10 = VAR_9;

 VAR_8 = VAR_6->cct.entries[VAR_10].entry;
 VAR_11 = (VAR_8 & 0xc000) >> 14;
 VAR_12 = (VAR_8 & 0x3fff);

 VAR_14 = FUNC_0(VAR_4);

 VAR_15 = FUNC_1(VAR_4->ibmaxlen, VAR_14);

 VAR_13 = (VAR_15 >> VAR_11) * VAR_12;

 VAR_13 &= VAR_3;
 VAR_13 <<= VAR_2;

 FUNC_3(VAR_5, VAR_1, VAR_13);
}

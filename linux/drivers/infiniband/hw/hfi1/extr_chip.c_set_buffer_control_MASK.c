
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct hfi1_pportdata {int actual_vls_operational; int vls_operational; scalar_t__ port; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;
struct buffer_control {scalar_t__ overall_shared_limit; TYPE_1__* vl; } ;
typedef int lowering_dedicated ;
typedef int changing ;
struct TYPE_2__ {scalar_t__ dedicated; scalar_t__ shared; } ;


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
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct hfi1_devdata*,struct buffer_control*,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct hfi1_devdata*) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (struct hfi1_devdata*,int,char*,scalar_t__) ;
 int FUNC_5 (struct hfi1_devdata*,scalar_t__,int,int *) ;
 int FUNC_6 (struct hfi1_devdata*,scalar_t__,int,int *) ;
 int FUNC_7 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_8 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_9 (struct hfi1_devdata*,int,scalar_t__) ;
 int FUNC_10 (struct hfi1_devdata*,int,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct hfi1_devdata*,int const,char*) ;

int FUNC_13(struct hfi1_pportdata *VAR_12,
         struct buffer_control *VAR_13)
{
 struct hfi1_devdata *VAR_14 = VAR_12->dd;
 u64 VAR_15, VAR_16, VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;
 int VAR_22 = 0, VAR_23;




 int VAR_24;
 struct buffer_control VAR_25;
 u8 VAR_26[VAR_1];
 u8 VAR_27[VAR_1];
 u16 VAR_28;
 u32 VAR_29 = 0;
 const u64 VAR_30 =
 VAR_2
  | VAR_4
  | VAR_5
  | VAR_6
  | VAR_7
  | VAR_8
  | VAR_9
  | VAR_10
  | VAR_3;





 for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {
  if (((VAR_19) < VAR_11 || (VAR_19) == 15)) {
   VAR_29 += FUNC_0(VAR_13->vl[VAR_19].dedicated);
   continue;
  }
  FUNC_4(VAR_14, VAR_19, "dedicated",
       FUNC_0(VAR_13->vl[VAR_19].dedicated));
  FUNC_4(VAR_14, VAR_19, "shared",
       FUNC_0(VAR_13->vl[VAR_19].shared));
  VAR_13->vl[VAR_19].dedicated = 0;
  VAR_13->vl[VAR_19].shared = 0;
 }
 VAR_29 += FUNC_0(VAR_13->overall_shared_limit);


 FUNC_1(VAR_14, &VAR_25, &VAR_28);




 FUNC_3(VAR_26, 0, sizeof(VAR_26));
 FUNC_3(VAR_27, 0, sizeof(VAR_27));




 VAR_17 =
  VAR_2;
 VAR_15 = 0;
 VAR_16 = 0;
 VAR_18 = 0;
 VAR_24 = 0;
 for (VAR_19 = 0; VAR_19 < 16; VAR_19++, VAR_17 <<= 1) {
  if (!((VAR_19) < VAR_11 || (VAR_19) == 15))
   continue;
  VAR_21 = VAR_13->vl[VAR_19].shared
      != VAR_25.vl[VAR_19].shared;
  if (VAR_21)
   VAR_24 = 1;
  if (VAR_13->vl[VAR_19].dedicated != VAR_25.vl[VAR_19].dedicated ||
      VAR_21) {
   VAR_26[VAR_19] = 1;
   VAR_15 |= VAR_17;
   VAR_18++;
  }
  if (FUNC_0(VAR_13->vl[VAR_19].dedicated) <
     FUNC_0(VAR_25.vl[VAR_19].dedicated)) {
   VAR_27[VAR_19] = 1;
   VAR_16 |= VAR_17;
  }
 }


 if (VAR_29 > VAR_28)
  FUNC_7(VAR_14, VAR_29);




 VAR_20 = 0;
 if ((FUNC_0(VAR_13->overall_shared_limit) <
      FUNC_0(VAR_25.overall_shared_limit)) ||
     (FUNC_2(VAR_14) && VAR_24)) {
  FUNC_8(VAR_14, 0);
  VAR_25.overall_shared_limit = 0;
  VAR_20 = 1;
 }

 for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
  if (!((VAR_19) < VAR_11 || (VAR_19) == 15))
   continue;

  if (VAR_26[VAR_19]) {
   FUNC_10(VAR_14, VAR_19, 0);
   VAR_25.vl[VAR_19].shared = 0;
  }
 }

 FUNC_12(VAR_14, VAR_20 ? VAR_30 : VAR_15,
     "shared");

 if (VAR_18 > 0) {
  for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
   if (!((VAR_19) < VAR_11 || (VAR_19) == 15))
    continue;

   if (VAR_27[VAR_19]) {
    FUNC_9(VAR_14, VAR_19,
       FUNC_0(VAR_13->
            vl[VAR_19].dedicated));
    VAR_25.vl[VAR_19].dedicated =
      VAR_13->vl[VAR_19].dedicated;
   }
  }

  FUNC_12(VAR_14, VAR_16, "dedicated");


  for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
   if (!((VAR_19) < VAR_11 || (VAR_19) == 15))
    continue;

   if (FUNC_0(VAR_13->vl[VAR_19].dedicated) >
     FUNC_0(VAR_25.vl[VAR_19].dedicated))
    FUNC_9(VAR_14, VAR_19,
       FUNC_0(VAR_13->
            vl[VAR_19].dedicated));
  }
 }


 for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
  if (!((VAR_19) < VAR_11 || (VAR_19) == 15))
   continue;

  if (FUNC_0(VAR_13->vl[VAR_19].shared) >
    FUNC_0(VAR_25.vl[VAR_19].shared))
   FUNC_10(VAR_14, VAR_19, FUNC_0(VAR_13->vl[VAR_19].shared));
 }


 if (FUNC_0(VAR_13->overall_shared_limit) >
     FUNC_0(VAR_25.overall_shared_limit))
  FUNC_8(VAR_14,
      FUNC_0(VAR_13->overall_shared_limit));


 if (VAR_29 < VAR_28)
  FUNC_7(VAR_14, VAR_29);





 if (VAR_18 > 0) {
  for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++)
   if (FUNC_0(VAR_13->vl[VAR_19].dedicated) > 0 ||
       FUNC_0(VAR_13->vl[VAR_19].shared) > 0)
    VAR_22++;
  VAR_12->actual_vls_operational = VAR_22;
  VAR_23 = FUNC_6(VAR_14, VAR_12->port - 1, VAR_22 ?
        VAR_12->actual_vls_operational :
        VAR_12->vls_operational,
        ((void*)0));
  if (VAR_23 == 0)
   VAR_23 = FUNC_5(VAR_14, VAR_12->port - 1, VAR_22 ?
        VAR_12->actual_vls_operational :
        VAR_12->vls_operational, ((void*)0));
  if (VAR_23)
   return VAR_23;
 }
 return 0;
}

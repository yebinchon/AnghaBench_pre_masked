
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct hfi1_pportdata {int vls_supported; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {TYPE_2__* vld; TYPE_1__** rcd; } ;
struct TYPE_4__ {int mtu; int sc; } ;
struct TYPE_3__ {int rcvhdrqentsize; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct hfi1_devdata*,int,int) ;
 int FUNC_4 (struct hfi1_devdata*,int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct hfi1_pportdata *VAR_14)
{
 struct hfi1_devdata *VAR_15 = VAR_14->dd;
 u32 VAR_16 = FUNC_1(VAR_15), VAR_17;
 u32 VAR_18 = VAR_15->vld[15].mtu;
 u64 VAR_19 = 0, VAR_20 = (((VAR_15->vld[15].mtu + VAR_16) >> 2)
         & VAR_10) <<
  VAR_11;
 int VAR_21, VAR_22;
 u32 VAR_23;

 for (VAR_21 = 0; VAR_21 < VAR_14->vls_supported; VAR_21++) {
  if (VAR_15->vld[VAR_21].mtu > VAR_18)
   VAR_18 = VAR_15->vld[VAR_21].mtu;
  if (VAR_21 <= 3)
   VAR_19 |= (((VAR_15->vld[VAR_21].mtu + VAR_16) >> 2)
     & VAR_7) <<
    ((VAR_21 % 4) * VAR_8);
  else
   VAR_20 |= (((VAR_15->vld[VAR_21].mtu + VAR_16) >> 2)
     & VAR_12) <<
    ((VAR_21 % 4) * VAR_13);
 }
 FUNC_8(VAR_15, VAR_6, VAR_19);
 FUNC_8(VAR_15, VAR_9, VAR_20);


 for (VAR_21 = 0; VAR_21 < VAR_14->vls_supported; VAR_21++) {
  VAR_23 = FUNC_2(FUNC_6(VAR_15->vld[VAR_21].sc, 50),
       FUNC_5(VAR_15->vld[VAR_21].sc,
      VAR_15->vld[VAR_21].mtu,
      VAR_15->rcd[0]->rcvhdrqentsize));
  for (VAR_22 = 0; VAR_22 < VAR_5; VAR_22++)
   FUNC_7(
     FUNC_3(VAR_15, VAR_22, VAR_21),
         VAR_23);
 }
 VAR_23 = FUNC_2(FUNC_6(VAR_15->vld[15].sc, 50),
      FUNC_5(VAR_15->vld[15].sc,
     VAR_15->vld[15].mtu,
     VAR_15->rcd[0]->rcvhdrqentsize));
 FUNC_7(VAR_15->vld[15].sc, VAR_23);


 VAR_17 = VAR_18 == 10240 ? VAR_4 :
  (FUNC_0(VAR_18 >> 8) + 1);
 VAR_19 = FUNC_4(VAR_14->dd, VAR_0);
 VAR_19 &= ~VAR_3;
 VAR_19 |= ((u64)VAR_17 & VAR_1) <<
  VAR_2;
 FUNC_8(VAR_14->dd, VAR_0, VAR_19);
}

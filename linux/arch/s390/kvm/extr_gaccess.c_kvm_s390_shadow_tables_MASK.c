
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union vaddress {unsigned long addr; unsigned long rfx; unsigned long rsx; unsigned long rtx; unsigned long sx; int sx01; int rtx01; int rsx01; int rfx01; } ;
struct TYPE_6__ {int p; int pto; } ;
struct TYPE_5__ {unsigned long sfaa; } ;
union segment_table_entry {unsigned long val; TYPE_2__ fc0; TYPE_1__ fc1; int fc; int cs; int tt; int i; } ;
struct TYPE_8__ {int p; int sto; int tl; int tf; } ;
struct TYPE_7__ {unsigned long rfaa; } ;
union region3_table_entry {unsigned long val; TYPE_4__ fc0; TYPE_3__ fc1; int fc; int cr; int tt; int i; } ;
union region2_table_entry {unsigned long val; int p; int rto; int tl; int tf; int tt; int i; } ;
union region1_table_entry {unsigned long val; int p; int rto; int tl; int tf; int tt; int i; } ;
union asce {int origin; int dt; int p; int tl; scalar_t__ r; int val; } ;
struct gmap {int edat_level; int orig_asce; struct gmap* parent; } ;






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
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int FUNC_0 (struct gmap*,unsigned long,unsigned long*) ;
 int FUNC_1 (struct gmap*,unsigned long,unsigned long,int) ;
 int FUNC_2 (struct gmap*,unsigned long,unsigned long,int) ;
 int FUNC_3 (struct gmap*,unsigned long,unsigned long,int) ;
 int FUNC_4 (struct gmap*,unsigned long,unsigned long,int) ;

__attribute__((used)) static int FUNC_5(struct gmap *VAR_15, unsigned long VAR_16,
      unsigned long *VAR_17, int *VAR_18,
      int *VAR_19)
{
 struct gmap *VAR_20;
 union asce VAR_21;
 union vaddress VAR_22;
 unsigned long VAR_23;
 int VAR_24;

 *VAR_19 = 0;
 *VAR_18 = 0;
 VAR_20 = VAR_15->parent;
 VAR_22.addr = VAR_16;
 VAR_21.val = VAR_15->orig_asce;
 VAR_23 = VAR_21.origin * VAR_0;
 if (VAR_21.r) {
  *VAR_19 = 1;
  VAR_23 = 0;
  VAR_21.dt = 131;
 }
 switch (VAR_21.dt) {
 case 131:
  if (VAR_22.rfx01 > VAR_21.tl && !*VAR_19)
   return VAR_2;
  break;
 case 130:
  if (VAR_22.rfx)
   return VAR_1;
  if (VAR_22.rsx01 > VAR_21.tl)
   return VAR_3;
  break;
 case 129:
  if (VAR_22.rfx || VAR_22.rsx)
   return VAR_1;
  if (VAR_22.rtx01 > VAR_21.tl)
   return VAR_4;
  break;
 case 128:
  if (VAR_22.rfx || VAR_22.rsx || VAR_22.rtx)
   return VAR_1;
  if (VAR_22.sx01 > VAR_21.tl)
   return VAR_5;
  break;
 }

 switch (VAR_21.dt) {
 case 131: {
  union region1_table_entry VAR_25;

  if (*VAR_19) {
   VAR_23 += VAR_22.rfx * VAR_11;
   VAR_25.val = VAR_23;
   goto shadow_r2t;
  }
  VAR_24 = FUNC_0(VAR_20, VAR_23 + VAR_22.rfx * 8, &VAR_25.val);
  if (VAR_24)
   return VAR_24;
  if (VAR_25.i)
   return VAR_2;
  if (VAR_25.tt != VAR_7)
   return VAR_6;
  if (VAR_22.rsx01 < VAR_25.tf || VAR_22.rsx01 > VAR_25.tl)
   return VAR_3;
  if (VAR_15->edat_level >= 1)
   *VAR_18 |= VAR_25.p;
  VAR_23 = VAR_25.rto * VAR_0;
shadow_r2t:
  VAR_24 = FUNC_2(VAR_15, VAR_16, VAR_25.val, *VAR_19);
  if (VAR_24)
   return VAR_24;
 }
 case 130: {
  union region2_table_entry VAR_26;

  if (*VAR_19) {
   VAR_23 += VAR_22.rsx * VAR_12;
   VAR_26.val = VAR_23;
   goto shadow_r3t;
  }
  VAR_24 = FUNC_0(VAR_20, VAR_23 + VAR_22.rsx * 8, &VAR_26.val);
  if (VAR_24)
   return VAR_24;
  if (VAR_26.i)
   return VAR_3;
  if (VAR_26.tt != VAR_8)
   return VAR_6;
  if (VAR_22.rtx01 < VAR_26.tf || VAR_22.rtx01 > VAR_26.tl)
   return VAR_4;
  if (VAR_15->edat_level >= 1)
   *VAR_18 |= VAR_26.p;
  VAR_23 = VAR_26.rto * VAR_0;
shadow_r3t:
  VAR_26.p |= *VAR_18;
  VAR_24 = FUNC_3(VAR_15, VAR_16, VAR_26.val, *VAR_19);
  if (VAR_24)
   return VAR_24;
 }
 case 129: {
  union region3_table_entry VAR_27;

  if (*VAR_19) {
   VAR_23 += VAR_22.rtx * VAR_13;
   VAR_27.val = VAR_23;
   goto shadow_sgt;
  }
  VAR_24 = FUNC_0(VAR_20, VAR_23 + VAR_22.rtx * 8, &VAR_27.val);
  if (VAR_24)
   return VAR_24;
  if (VAR_27.i)
   return VAR_4;
  if (VAR_27.tt != VAR_9)
   return VAR_6;
  if (VAR_27.cr && VAR_21.p && VAR_15->edat_level >= 2)
   return VAR_6;
  if (VAR_27.fc && VAR_15->edat_level >= 2) {
   *VAR_18 |= VAR_27.fc0.p;
   *VAR_19 = 1;
   VAR_23 = VAR_27.fc1.rfaa * VAR_13;
   VAR_27.val = VAR_23;
   goto shadow_sgt;
  }
  if (VAR_22.sx01 < VAR_27.fc0.tf || VAR_22.sx01 > VAR_27.fc0.tl)
   return VAR_5;
  if (VAR_15->edat_level >= 1)
   *VAR_18 |= VAR_27.fc0.p;
  VAR_23 = VAR_27.fc0.sto * VAR_0;
shadow_sgt:
  VAR_27.fc0.p |= *VAR_18;
  VAR_24 = FUNC_4(VAR_15, VAR_16, VAR_27.val, *VAR_19);
  if (VAR_24)
   return VAR_24;
 }
 case 128: {
  union segment_table_entry VAR_28;

  if (*VAR_19) {
   VAR_23 += VAR_22.sx * VAR_14;
   VAR_28.val = VAR_23;
   goto shadow_pgt;
  }
  VAR_24 = FUNC_0(VAR_20, VAR_23 + VAR_22.sx * 8, &VAR_28.val);
  if (VAR_24)
   return VAR_24;
  if (VAR_28.i)
   return VAR_5;
  if (VAR_28.tt != VAR_10)
   return VAR_6;
  if (VAR_28.cs && VAR_21.p)
   return VAR_6;
  *VAR_18 |= VAR_28.fc0.p;
  if (VAR_28.fc && VAR_15->edat_level >= 1) {
   *VAR_19 = 1;
   VAR_23 = VAR_28.fc1.sfaa * VAR_14;
   VAR_28.val = VAR_23;
   goto shadow_pgt;
  }
  VAR_23 = VAR_28.fc0.pto * (VAR_0 / 2);
shadow_pgt:
  VAR_28.fc0.p |= *VAR_18;
  VAR_24 = FUNC_1(VAR_15, VAR_16, VAR_28.val, *VAR_19);
  if (VAR_24)
   return VAR_24;
 }
 }

 *VAR_17 = VAR_23;
 return 0;
}

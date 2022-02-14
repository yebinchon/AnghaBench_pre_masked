
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct rsm_rule_data {unsigned int offset; int pkt_type; unsigned int index1_width; unsigned int index2_width; int value2; int mask2; int value1; int mask1; int index2_off; int index1_off; int field2_off; int field1_off; } ;
struct rsm_map_table {scalar_t__ used; unsigned int* map; } ;
struct hfi1_devdata {unsigned int qos_shift; unsigned int n_krcv_queues; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct hfi1_devdata*,int ,struct rsm_rule_data*) ;
 int FUNC_1 (struct hfi1_devdata*,unsigned int,unsigned int) ;
 unsigned int* VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int FUNC_2 (struct hfi1_devdata*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct hfi1_devdata *VAR_15, struct rsm_map_table *VAR_16)
{
 struct rsm_rule_data VAR_17;
 unsigned VAR_18, VAR_19, VAR_20, VAR_21, VAR_22 = 1, VAR_23;
 unsigned int VAR_24;
 u64 VAR_25;

 if (!VAR_16)
  goto bail;
 VAR_24 = FUNC_2(VAR_15, &VAR_23, &VAR_22);
 if (VAR_24 == 0)
  goto bail;
 VAR_18 = 1 << VAR_23;


 VAR_24 = 1 << (VAR_23 + VAR_22);
 if (VAR_16->used + VAR_24 >= VAR_9)
  goto bail;


 for (VAR_20 = 0, VAR_19 = VAR_0; VAR_20 < VAR_14; VAR_20++) {
  unsigned VAR_26;

  for (VAR_21 = 0, VAR_26 = VAR_19;
       VAR_13[VAR_20] && VAR_21 < VAR_18; VAR_21++) {
   unsigned VAR_27, VAR_28, VAR_29;


   VAR_27 = VAR_16->used + ((VAR_21 << VAR_22) ^ VAR_20);
   VAR_28 = (VAR_27 % 8) * 8;
   VAR_29 = VAR_27 / 8;

   VAR_25 = VAR_16->map[VAR_29];
   VAR_25 &= ~(VAR_11
    << VAR_28);
   VAR_25 |= (u64)(VAR_26++) << VAR_28;
   VAR_16->map[VAR_29] = VAR_25;
   if (VAR_26 == VAR_19 + VAR_13[VAR_20])
    VAR_26 = VAR_19;
  }
  VAR_19 += VAR_13[VAR_20];
 }

 VAR_17.offset = VAR_16->used;
 VAR_17.pkt_type = 2;
 VAR_17.field1_off = VAR_3;
 VAR_17.field2_off = VAR_6;
 VAR_17.index1_off = VAR_7;
 VAR_17.index1_width = VAR_22;
 VAR_17.index2_off = VAR_10;
 VAR_17.index2_width = VAR_23 + VAR_22;
 VAR_17.mask1 = VAR_2;
 VAR_17.value1 = VAR_4;
 VAR_17.mask2 = VAR_5;
 VAR_17.value2 = VAR_8;


 FUNC_0(VAR_15, VAR_12, &VAR_17);


 VAR_16->used += VAR_24;

 FUNC_1(VAR_15, VAR_1, VAR_1);
 VAR_15->qos_shift = VAR_22 + 1;
 return;
bail:
 VAR_15->qos_shift = 1;
 FUNC_1(VAR_15, VAR_0, VAR_15->n_krcv_queues - 1);
}

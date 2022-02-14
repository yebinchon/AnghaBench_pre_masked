
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct rsm_rule_data {int field1_off; int field2_off; int index1_off; int index1_width; int mask1; int value1; int mask2; int value2; scalar_t__ index2_width; scalar_t__ index2_off; scalar_t__ pkt_type; scalar_t__ offset; } ;
struct rsm_map_table {int used; int* map; } ;
struct hfi1_devdata {int first_dyn_alloc_ctxt; int num_rcv_contexts; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hfi1_devdata*,int ,struct rsm_rule_data*) ;
 int FUNC_2 (struct hfi1_devdata*,char*) ;

__attribute__((used)) static void FUNC_3(struct hfi1_devdata *VAR_4,
          struct rsm_map_table *VAR_5)
{
 struct rsm_rule_data VAR_6;
 u64 VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 u8 VAR_13;
 u32 VAR_14;

 if (FUNC_0(VAR_3))

  VAR_12 = 1;
 else
  VAR_12 = VAR_4->first_dyn_alloc_ctxt;

 VAR_14 = VAR_4->num_rcv_contexts - VAR_12;


 if (VAR_5->used + VAR_14 >= VAR_0) {
  FUNC_2(VAR_4, "FECN handling disabled - too many contexts allocated\n");
  return;
 }
 VAR_13 = (u8)(VAR_0 + VAR_5->used - VAR_12);

 for (VAR_8 = VAR_12, VAR_9 = VAR_5->used; VAR_8 < VAR_4->num_rcv_contexts;
      VAR_8++, VAR_9++) {

  VAR_10 = (VAR_9 % 8) * 8;
  VAR_11 = VAR_9 / 8;
  VAR_7 = VAR_5->map[VAR_11];
  VAR_7 &= ~(VAR_1 << VAR_10);
  VAR_7 |= (u64)VAR_8 << VAR_10;
  VAR_5->map[VAR_11] = VAR_7;
 }
 VAR_6.offset = VAR_13;
 VAR_6.pkt_type = 0;
 VAR_6.field1_off = 95;
 VAR_6.field2_off = 133;
 VAR_6.index1_off = 64;
 VAR_6.index1_width = 8;
 VAR_6.index2_off = 0;
 VAR_6.index2_width = 0;
 VAR_6.mask1 = 1;
 VAR_6.value1 = 1;
 VAR_6.mask2 = 1;
 VAR_6.value2 = 1;


 FUNC_1(VAR_4, VAR_2, &VAR_6);

 VAR_5->used += VAR_14;
}

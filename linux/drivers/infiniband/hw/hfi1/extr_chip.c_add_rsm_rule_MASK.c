
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long long u64 ;
struct rsm_rule_data {scalar_t__ value2; scalar_t__ mask2; scalar_t__ value1; scalar_t__ mask1; scalar_t__ index2_width; scalar_t__ index2_off; scalar_t__ index1_width; scalar_t__ index1_off; scalar_t__ field2_off; scalar_t__ field1_off; scalar_t__ pkt_type; scalar_t__ offset; } ;
struct hfi1_devdata {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 unsigned long long VAR_13 ;
 unsigned long long VAR_14 ;
 int FUNC_0 (struct hfi1_devdata*,scalar_t__,unsigned long long) ;

__attribute__((used)) static void FUNC_1(struct hfi1_devdata *VAR_15, u8 VAR_16,
    struct rsm_rule_data *VAR_17)
{
 FUNC_0(VAR_15, VAR_0 + (8 * VAR_16),
    (u64)VAR_17->offset << VAR_1 |
    1ull << VAR_16 |
    (u64)VAR_17->pkt_type << VAR_2);
 FUNC_0(VAR_15, VAR_8 + (8 * VAR_16),
    (u64)VAR_17->field1_off << VAR_9 |
    (u64)VAR_17->field2_off << VAR_10 |
    (u64)VAR_17->index1_off << VAR_11 |
    (u64)VAR_17->index1_width << VAR_12 |
    (u64)VAR_17->index2_off << VAR_13 |
    (u64)VAR_17->index2_width << VAR_14);
 FUNC_0(VAR_15, VAR_3 + (8 * VAR_16),
    (u64)VAR_17->mask1 << VAR_4 |
    (u64)VAR_17->value1 << VAR_6 |
    (u64)VAR_17->mask2 << VAR_5 |
    (u64)VAR_17->value2 << VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct rsm_map_table {int used; } ;
struct TYPE_2__ {int rmt_start; } ;
struct hfi1_devdata {TYPE_1__ vnic; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 int VAR_5 ;
 struct rsm_map_table* FUNC_0 (struct hfi1_devdata*) ;
 int FUNC_1 (struct hfi1_devdata*,struct rsm_map_table*) ;
 int FUNC_2 (struct hfi1_devdata*,struct rsm_map_table*) ;
 int FUNC_3 (struct hfi1_devdata*,struct rsm_map_table*) ;
 int FUNC_4 (struct rsm_map_table*) ;
 unsigned long long FUNC_5 (struct hfi1_devdata*,int ) ;
 int FUNC_6 (struct hfi1_devdata*,int ,unsigned long long) ;

__attribute__((used)) static int FUNC_7(struct hfi1_devdata *VAR_6)
{
 struct rsm_map_table *VAR_7;
 u64 VAR_8;


 FUNC_6(VAR_6, VAR_5, ~0ull);

 VAR_7 = FUNC_0(VAR_6);
 if (!VAR_7)
  return -VAR_0;


 FUNC_3(VAR_6, VAR_7);
 FUNC_2(VAR_6, VAR_7);
 FUNC_1(VAR_6, VAR_7);

 VAR_6->vnic.rmt_start = VAR_7->used;
 FUNC_4(VAR_7);
 VAR_8 = FUNC_5(VAR_6, VAR_1);
 VAR_8 &= ~VAR_4;
 VAR_8 |= ((4ull & VAR_2) <<
  VAR_3);
 FUNC_6(VAR_6, VAR_1, VAR_8);
 return 0;
}

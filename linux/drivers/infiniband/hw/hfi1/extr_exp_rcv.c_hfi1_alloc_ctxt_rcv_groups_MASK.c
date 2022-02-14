
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tid_group {int size; int base; } ;
struct TYPE_2__ {int group_size; } ;
struct hfi1_devdata {TYPE_1__ rcv_entries; } ;
struct hfi1_ctxtdata {int expected_count; int expected_base; int tid_group_list; struct tid_group* groups; int numa_id; struct hfi1_devdata* dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tid_group* FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (struct tid_group*,int *) ;

int FUNC_2(struct hfi1_ctxtdata *VAR_2)
{
 struct hfi1_devdata *VAR_3 = VAR_2->dd;
 u32 VAR_4;
 struct tid_group *VAR_5;
 int VAR_6;
 u32 VAR_7;

 VAR_7 = VAR_2->expected_count / VAR_3->rcv_entries.group_size;
 VAR_2->groups =
  FUNC_0(VAR_7, sizeof(*VAR_2->groups),
        VAR_1, VAR_2->numa_id);
 if (!VAR_2->groups)
  return -VAR_0;
 VAR_4 = VAR_2->expected_base;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_5 = &VAR_2->groups[VAR_6];
  VAR_5->size = VAR_3->rcv_entries.group_size;
  VAR_5->base = VAR_4;
  FUNC_1(VAR_5, &VAR_2->tid_group_list);
  VAR_4 += VAR_3->rcv_entries.group_size;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hfi1_pportdata {TYPE_1__* dd; int * scntrs; } ;
struct cntr_entry {int offset; } ;
struct TYPE_2__ {int num_rcv_contexts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cntr_entry* VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct cntr_entry*,int *,struct hfi1_pportdata*,int) ;

u64 FUNC_1(struct hfi1_pportdata *VAR_4, int VAR_5, int VAR_6)
{
 struct cntr_entry *VAR_7;
 u64 *VAR_8;

 VAR_7 = &VAR_3[VAR_5];
 VAR_8 = VAR_4->scntrs + VAR_7->offset;

 if (VAR_6 != VAR_0)
  VAR_8 += VAR_6;

 if ((VAR_5 >= VAR_1 + VAR_4->dd->num_rcv_contexts) &&
     (VAR_5 <= VAR_2)) {

  return 0;
 }

 return FUNC_0(VAR_4->dd, VAR_7, VAR_8, VAR_4, VAR_6);
}

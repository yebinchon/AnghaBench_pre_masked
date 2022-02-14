
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {int * scntrs; } ;
struct cntr_entry {int offset; } ;


 int VAR_0 ;
 struct cntr_entry* VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,struct cntr_entry*,int *,struct hfi1_devdata*,int,int ) ;

u64 FUNC_1(struct hfi1_devdata *VAR_2, int VAR_3, int VAR_4, u64 VAR_5)
{
 struct cntr_entry *VAR_6;
 u64 *VAR_7;

 VAR_6 = &VAR_1[VAR_3];
 VAR_7 = VAR_2->scntrs + VAR_6->offset;

 if (VAR_4 != VAR_0)
  VAR_7 += VAR_4;

 return FUNC_0(VAR_2, VAR_6, VAR_7, VAR_2, VAR_4, VAR_5);
}

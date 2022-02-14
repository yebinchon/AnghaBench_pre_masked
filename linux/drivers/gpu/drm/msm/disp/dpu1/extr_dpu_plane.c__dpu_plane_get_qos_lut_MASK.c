
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct dpu_qos_lut_tbl {int nentry; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ fl; int lut; } ;



__attribute__((used)) static u64 FUNC_0(const struct dpu_qos_lut_tbl *VAR_0,
  u32 VAR_1)
{
 int VAR_2;

 if (!VAR_0 || !VAR_0->nentry || !VAR_0->entries)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->nentry; VAR_2++)
  if (VAR_1 <= VAR_0->entries[VAR_2].fl)
   return VAR_0->entries[VAR_2].lut;


 if (!VAR_0->entries[VAR_2-1].fl)
  return VAR_0->entries[VAR_2-1].lut;

 return 0;
}

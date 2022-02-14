
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition_desc {int nr_parts; struct partition_affinity* parts; } ;
struct partition_affinity {void* partition_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct partition_desc *VAR_1, void *VAR_2)
{
 struct partition_affinity *VAR_3 = ((void*)0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->nr_parts; VAR_4++) {
  if (VAR_1->parts[VAR_4].partition_id == VAR_2) {
   VAR_3 = &VAR_1->parts[VAR_4];
   break;
  }
 }

 if (FUNC_0(!VAR_3)) {
  FUNC_1("Failed to find partition\n");
  return -VAR_0;
 }

 return VAR_4;
}

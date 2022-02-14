
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long num_sdbt; } ;
struct aux_buffer {struct aux_buffer* sdb_index; struct aux_buffer* sdbt_index; TYPE_1__ sfb; } ;


 int FUNC_0 (int ,int,char*,unsigned long) ;
 int FUNC_1 (struct aux_buffer) ;
 int FUNC_2 (struct aux_buffer*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct aux_buffer *VAR_2 = VAR_1;
 unsigned long VAR_3, VAR_4;

 if (!VAR_2)
  return;


 VAR_4 = VAR_2->sfb.num_sdbt;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_1(VAR_2->sdbt_index[VAR_3]);

 FUNC_2(VAR_2->sdbt_index);
 FUNC_2(VAR_2->sdb_index);
 FUNC_2(VAR_2);

 FUNC_0(VAR_0, 4, "aux_buffer_free: free "
       "%lu SDBTs\n", VAR_4);
}

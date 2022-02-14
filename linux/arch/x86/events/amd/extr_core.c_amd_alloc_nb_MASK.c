
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amd_nb {int nb_id; TYPE_1__* event_constraints; } ;
struct TYPE_4__ {int num_counters; } ;
struct TYPE_3__ {int weight; int idxmsk; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 struct amd_nb* FUNC_2 (int,int ,int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static struct amd_nb *FUNC_3(int VAR_2)
{
 struct amd_nb *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(sizeof(struct amd_nb), VAR_0, FUNC_1(VAR_2));
 if (!VAR_3)
  return ((void*)0);

 VAR_3->nb_id = -1;




 for (VAR_4 = 0; VAR_4 < VAR_1.num_counters; VAR_4++) {
  FUNC_0(VAR_4, VAR_3->event_constraints[VAR_4].idxmsk);
  VAR_3->event_constraints[VAR_4].weight = 1;
 }
 return VAR_3;
}

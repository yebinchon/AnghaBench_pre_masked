
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent_sq; } ;
struct throtl_grp {int* has_rules; struct throtl_data* td; TYPE_1__ service_queue; } ;
struct throtl_data {size_t limit_index; scalar_t__* limit_valid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct throtl_grp* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct throtl_grp*,int) ;
 scalar_t__ FUNC_2 (struct throtl_grp*,int) ;

__attribute__((used)) static void FUNC_3(struct throtl_grp *VAR_4)
{
 struct throtl_grp *VAR_5 = FUNC_0(VAR_4->service_queue.parent_sq);
 struct throtl_data *VAR_6 = VAR_4->td;
 int VAR_7;

 for (VAR_7 = VAR_0; VAR_7 <= VAR_3; VAR_7++)
  VAR_4->has_rules[VAR_7] = (VAR_5 && VAR_5->has_rules[VAR_7]) ||
   (VAR_6->limit_valid[VAR_6->limit_index] &&
    (FUNC_1(VAR_4, VAR_7) != VAR_1 ||
     FUNC_2(VAR_4, VAR_7) != VAR_2));
}

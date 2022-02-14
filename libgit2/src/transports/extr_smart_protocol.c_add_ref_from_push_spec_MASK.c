
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dst; } ;
struct TYPE_11__ {TYPE_1__ refspec; int loid; } ;
typedef TYPE_3__ push_spec ;
typedef int git_vector ;
struct TYPE_10__ {int name; int oid; } ;
struct TYPE_12__ {TYPE_2__ head; int type; } ;
typedef TYPE_4__ git_pkt_ref ;
typedef int git_pkt ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(git_vector *VAR_1, push_spec *VAR_2)
{
 git_pkt_ref *VAR_3 = FUNC_1(1, sizeof(git_pkt_ref));
 FUNC_0(VAR_3);

 VAR_3->type = VAR_0;
 FUNC_3(&VAR_3->head.oid, &VAR_2->loid);
 VAR_3->head.name = FUNC_2(VAR_2->refspec.dst);

 if (!VAR_3->head.name ||
  FUNC_5(VAR_1, VAR_3) < 0) {
  FUNC_4((git_pkt *)VAR_3);
  return -1;
 }

 return 0;
}

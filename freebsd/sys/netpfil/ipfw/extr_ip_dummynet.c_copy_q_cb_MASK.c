
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dn_queue {int ni; } ;
struct TYPE_2__ {int id; int type; } ;
struct dn_flow {int fid; TYPE_1__ oid; } ;
struct copy_args {int end; scalar_t__* start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int *,char*,int) ;
 int FUNC_1 (uintptr_t,int ,int *) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, void *VAR_3)
{
 struct dn_queue *VAR_4 = VAR_2;
 struct copy_args *VAR_5 = VAR_3;
 struct dn_flow *VAR_6 = (struct dn_flow *)(*VAR_5->start);
        if (FUNC_0(VAR_5->start, VAR_5->end, &VAR_4->ni, "queue", -1))
                return VAR_0;
        VAR_6->oid.type = VAR_1;
        VAR_6->oid.id = FUNC_1((uintptr_t)&VAR_6->fid, 0, ((void*)0));
        return 0;
}

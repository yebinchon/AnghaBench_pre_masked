
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hashfile {int dummy; } ;
struct TYPE_3__ {int hash; } ;
struct commit_graph {TYPE_1__ oid; struct commit_graph* base_graph; } ;
struct TYPE_4__ {int rawsz; } ;


 int FUNC_0 (struct hashfile*,int ,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct hashfile *VAR_1,
        struct commit_graph *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_1(VAR_1, VAR_2->base_graph);
 FUNC_0(VAR_1, VAR_2->oid.hash, VAR_0->rawsz);
 return VAR_3 + 1;
}

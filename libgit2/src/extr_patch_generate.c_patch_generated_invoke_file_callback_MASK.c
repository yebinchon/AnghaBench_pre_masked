
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int payload; int (* file_cb ) (int ,float,int ) ;} ;
typedef TYPE_4__ git_patch_generated_output ;
struct TYPE_10__ {int delta; } ;
struct TYPE_12__ {TYPE_3__ base; TYPE_2__* diff; scalar_t__ delta_index; } ;
typedef TYPE_5__ git_patch_generated ;
struct TYPE_8__ {float length; } ;
struct TYPE_9__ {TYPE_1__ deltas; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,float,int ) ;

__attribute__((used)) static int FUNC_2(
 git_patch_generated *VAR_0, git_patch_generated_output *VAR_1)
{
 float VAR_2 = VAR_0->diff ?
  ((float)VAR_0->delta_index / VAR_0->diff->deltas.length) : 1.0f;

 if (!VAR_1->file_cb)
  return 0;

 return FUNC_0(
  VAR_1->file_cb(VAR_0->base.delta, VAR_2, VAR_1->payload),
  "git_patch");
}

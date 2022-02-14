
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* F; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_7__ {TYPE_1__* info; } ;
struct TYPE_6__ {scalar_t__ device; scalar_t__ inode; } ;



__attribute__((used)) static int FUNC_0 (stream_t *VAR_0, stream_t *VAR_1) {
  return VAR_0->F->info->device == VAR_1->F->info->device && VAR_0->F->info->inode == VAR_1->F->info->inode;
}

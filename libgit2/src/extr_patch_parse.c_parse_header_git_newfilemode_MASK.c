
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* delta; } ;
struct TYPE_9__ {TYPE_3__ base; } ;
typedef TYPE_4__ git_patch_parsed ;
typedef int git_patch_parse_ctx ;
struct TYPE_6__ {int mode; int * path; } ;
struct TYPE_7__ {int nfiles; TYPE_1__ new_file; int status; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(
 git_patch_parsed *VAR_1,
 git_patch_parse_ctx *VAR_2)
{
 FUNC_0((char *)VAR_1->base.delta->new_file.path);

 VAR_1->base.delta->new_file.path = ((void*)0);
 VAR_1->base.delta->status = VAR_0;
 VAR_1->base.delta->nfiles = 1;

 return FUNC_1(&VAR_1->base.delta->new_file.mode, VAR_2);
}

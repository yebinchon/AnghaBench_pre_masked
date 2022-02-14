
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; size_t len; } ;
struct TYPE_6__ {TYPE_1__ map; } ;
struct TYPE_7__ {TYPE_2__ nfile; } ;
typedef TYPE_3__ git_patch_generated ;



void FUNC_0(
 char **VAR_0, size_t *VAR_1, git_patch_generated *VAR_2)
{
 *VAR_0 = VAR_2->nfile.map.data;
 *VAR_1 = VAR_2->nfile.map.len;
}

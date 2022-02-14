
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_8__ {TYPE_1__* fts_statp; } ;
struct TYPE_7__ {int o_data; } ;
struct TYPE_6__ {int st_size; } ;
typedef TYPE_2__ PLAN ;
typedef TYPE_3__ FTSENT ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_1(PLAN *VAR_2, FTSENT *VAR_3)
{
 off_t VAR_4;

 VAR_4 = VAR_1 ? (VAR_3->fts_statp->st_size + VAR_0 - 1) /
     VAR_0 : VAR_3->fts_statp->st_size;
 FUNC_0(VAR_4, VAR_2->o_data);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_10__ {TYPE_1__* fts_statp; } ;
struct TYPE_8__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_9__ {int flags; TYPE_2__ t_data; } ;
struct TYPE_7__ {struct timespec st_mtim; struct timespec st_birthtim; struct timespec st_atim; struct timespec st_ctim; } ;
typedef TYPE_3__ PLAN ;
typedef TYPE_4__ FTSENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(PLAN *VAR_3, FTSENT *VAR_4)
{
 struct timespec VAR_5;

 if (VAR_3->flags & VAR_2)
  VAR_5 = VAR_4->fts_statp->st_ctim;






 else
  VAR_5 = VAR_4->fts_statp->st_mtim;
 return (VAR_5.tv_sec > VAR_3->t_data.tv_sec ||
     (VAR_5.tv_sec == VAR_3->t_data.tv_sec &&
     VAR_5.tv_nsec > VAR_3->t_data.tv_nsec));
}

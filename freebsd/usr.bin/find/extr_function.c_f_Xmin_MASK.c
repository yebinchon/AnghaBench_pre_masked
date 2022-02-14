
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* fts_statp; } ;
struct TYPE_8__ {int tv_sec; } ;
struct TYPE_9__ {int flags; TYPE_2__ t_data; } ;
struct TYPE_7__ {int st_ctime; int st_atime; int st_birthtime; int st_mtime; } ;
typedef TYPE_3__ PLAN ;
typedef TYPE_4__ FTSENT ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_1(PLAN *VAR_4, FTSENT *VAR_5)
{
 if (VAR_4->flags & VAR_2) {
  FUNC_0((VAR_3 - VAR_5->fts_statp->st_ctime +
      60 - 1) / 60, VAR_4->t_data.tv_sec);
 } else if (VAR_4->flags & VAR_0) {
  FUNC_0((VAR_3 - VAR_5->fts_statp->st_atime +
      60 - 1) / 60, VAR_4->t_data.tv_sec);





 } else {
  FUNC_0((VAR_3 - VAR_5->fts_statp->st_mtime +
      60 - 1) / 60, VAR_4->t_data.tv_sec);
 }
}

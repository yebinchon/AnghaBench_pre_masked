
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_8__ {TYPE_1__* fts_statp; } ;
struct TYPE_7__ {int flags; int m_data; } ;
struct TYPE_6__ {int st_mode; } ;
typedef TYPE_2__ PLAN ;
typedef TYPE_3__ FTSENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_0(PLAN *VAR_8, FTSENT *VAR_9)
{
 mode_t VAR_10;

 VAR_10 = VAR_9->fts_statp->st_mode &
     (VAR_7|VAR_5|VAR_6|VAR_4|VAR_2|VAR_3);
 if (VAR_8->flags & VAR_1)
  return (VAR_8->m_data | VAR_10) == VAR_10;
 else if (VAR_8->flags & VAR_0)
  return (VAR_10 & VAR_8->m_data);
 else
  return VAR_10 == VAR_8->m_data;

}

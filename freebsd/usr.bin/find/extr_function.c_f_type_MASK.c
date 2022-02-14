
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ fts_info; TYPE_1__* fts_statp; } ;
struct TYPE_7__ {int m_data; } ;
struct TYPE_6__ {int st_mode; } ;
typedef TYPE_2__ PLAN ;
typedef TYPE_3__ FTSENT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_0(PLAN *VAR_7, FTSENT *VAR_8)
{
 if (VAR_7->m_data == VAR_5)
  return (VAR_8->fts_info == VAR_0 || VAR_8->fts_info == VAR_1 ||
      VAR_8->fts_info == VAR_2 || VAR_8->fts_info == VAR_3 ||
      VAR_8->fts_info == VAR_4);
 else
  return (VAR_8->fts_statp->st_mode & VAR_6) == VAR_7->m_data;
}

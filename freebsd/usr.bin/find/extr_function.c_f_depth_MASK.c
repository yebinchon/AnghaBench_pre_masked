
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fts_level; } ;
struct TYPE_5__ {int flags; int d_data; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ FTSENT ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

int
FUNC_1(PLAN *VAR_1, FTSENT *VAR_2)
{
 if (VAR_1->flags & VAR_0)
  FUNC_0(VAR_2->fts_level, VAR_1->d_data);
 else
  return 1;
}

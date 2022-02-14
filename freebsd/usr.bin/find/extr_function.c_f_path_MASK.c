
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fts_path; } ;
struct TYPE_5__ {int flags; int c_data; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ FTSENT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

int
FUNC_1(PLAN *VAR_2, FTSENT *VAR_3)
{
 return !FUNC_0(VAR_2->c_data, VAR_3->fts_path,
     VAR_2->flags & VAR_1 ? VAR_0 : 0);
}

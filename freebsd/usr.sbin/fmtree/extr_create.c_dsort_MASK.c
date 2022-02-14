
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fts_name; TYPE_1__* fts_statp; } ;
struct TYPE_5__ {int st_mode; } ;
typedef TYPE_2__ FTSENT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(const FTSENT * const *VAR_0, const FTSENT * const *VAR_1)
{
 if (FUNC_0((*VAR_0)->fts_statp->st_mode)) {
  if (!FUNC_0((*VAR_1)->fts_statp->st_mode))
   return (1);
 } else if (FUNC_0((*VAR_1)->fts_statp->st_mode))
  return (-1);
 return (FUNC_1((*VAR_0)->fts_name, (*VAR_1)->fts_name));
}

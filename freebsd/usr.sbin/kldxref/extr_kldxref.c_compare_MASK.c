
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fts_info; int fts_name; } ;
typedef TYPE_1__ FTSENT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const FTSENT *const *VAR_1, const FTSENT *const *VAR_2)
{

 if ((*VAR_1)->fts_info == VAR_0 && (*VAR_2)->fts_info != VAR_0)
  return (1);
 if ((*VAR_1)->fts_info != VAR_0 && (*VAR_2)->fts_info == VAR_0)
  return (-1);
 return (FUNC_0((*VAR_1)->fts_name, (*VAR_2)->fts_name));
}

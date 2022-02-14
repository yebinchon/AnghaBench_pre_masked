
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
typedef int fn ;
struct TYPE_6__ {scalar_t__ fts_info; char* fts_name; int fts_accpath; } ;
struct TYPE_5__ {int flags; int c_data; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ FTSENT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (int ,char*,int) ;

int
FUNC_2(PLAN *VAR_7, FTSENT *VAR_8)
{
 char VAR_9[VAR_6];
 const char *VAR_10;
 ssize_t VAR_11;

 if (VAR_7->flags & VAR_5) {







  if (VAR_8->fts_info != VAR_1 && VAR_8->fts_info != VAR_2 &&
      VAR_8->fts_info != VAR_3)
   return 0;
  VAR_11 = FUNC_1(VAR_8->fts_accpath, VAR_9, sizeof(VAR_9) - 1);
  if (VAR_11 == -1)
   return 0;
  VAR_9[VAR_11] = '\0';
  VAR_10 = VAR_9;
 } else
  VAR_10 = VAR_8->fts_name;
 return !FUNC_0(VAR_7->c_data, VAR_10,
     VAR_7->flags & VAR_4 ? VAR_0 : 0);
}

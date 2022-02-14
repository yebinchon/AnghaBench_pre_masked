
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ show; int flags; } ;
typedef TYPE_1__ git_status_options ;


 int FUNC_0 (TYPE_1__ const*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(const git_status_options *VAR_5)
{
 if (!VAR_5)
  return 0;

 FUNC_0(VAR_5, VAR_1, "git_status_options");

 if (VAR_5->show > VAR_4) {
  FUNC_1(VAR_0, "unknown status 'show' option");
  return -1;
 }

 if ((VAR_5->flags & VAR_2) != 0 &&
  (VAR_5->flags & VAR_3) != 0) {
  FUNC_1(VAR_0, "updating index from status "
   "is not allowed when index refresh is disabled");
  return -1;
 }

 return 0;
}

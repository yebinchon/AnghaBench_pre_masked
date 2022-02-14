
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int symbolic; int oid; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ target; } ;
typedef TYPE_2__ git_reference ;
typedef int git_refdb_backend ;
typedef int git_oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**,int *,char const*) ;

__attribute__((used)) static int FUNC_4(int *VAR_2, git_refdb_backend *VAR_3, const char *VAR_4,
 const git_oid *VAR_5, const char *VAR_6)
{
 int VAR_7 = 0;
 git_reference *VAR_8 = ((void*)0);

 *VAR_2 = 0;

 if (!VAR_5 && !VAR_6)
  return 0;

 if ((VAR_7 = FUNC_3(&VAR_8, VAR_3, VAR_4)) < 0)
  goto out;


 if (VAR_5 && VAR_8->type != VAR_0) {
  *VAR_2 = -1;
  goto out;
 }
 if (VAR_6 && VAR_8->type != VAR_1) {
  *VAR_2 = 1;
  goto out;
 }

 if (VAR_5 && VAR_8->type == VAR_0)
  *VAR_2 = FUNC_1(VAR_5, &VAR_8->target.oid);

 if (VAR_6 && VAR_8->type == VAR_1)
  *VAR_2 = FUNC_0(VAR_6, VAR_8->target.symbolic);

out:
 FUNC_2(VAR_8);

 return VAR_7;
}

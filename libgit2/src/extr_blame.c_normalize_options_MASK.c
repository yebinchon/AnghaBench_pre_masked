
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_7__ {int min_line; int flags; int newest_commit; } ;
typedef TYPE_1__ git_blame_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*,int) ;

__attribute__((used)) static int FUNC_3(
  git_blame_options *VAR_5,
  const git_blame_options *VAR_6,
  git_repository *VAR_7)
{
 git_blame_options VAR_8 = VAR_0;
 if (!VAR_6) VAR_6 = &VAR_8;

 FUNC_2(VAR_5, VAR_6, sizeof(git_blame_options));


 if (FUNC_0(&VAR_5->newest_commit)) {
  if (FUNC_1(&VAR_5->newest_commit, VAR_7, "HEAD") < 0) {
   return -1;
  }
 }


 if (!VAR_5->min_line) VAR_5->min_line = 1;



 if (VAR_5->flags & VAR_1)
  VAR_5->flags |= VAR_2;
 if (VAR_5->flags & VAR_2)
  VAR_5->flags |= VAR_3;
 if (VAR_5->flags & VAR_3)
  VAR_5->flags |= VAR_4;

 return 0;
}

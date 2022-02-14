
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_revwalk ;
struct TYPE_3__ {int flags; int to; int from; } ;
typedef TYPE_1__ git_revspec ;
typedef int git_repository ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,char const*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(git_repository *VAR_2, git_revwalk *VAR_3, const char *VAR_4, int VAR_5)
{
 git_revspec VAR_6;
 int VAR_7 = 0;

 if ((VAR_7 = FUNC_2(&VAR_6, VAR_2, VAR_4)))
  return VAR_7;

 if (VAR_6.flags & VAR_1) {

  return VAR_0;
 }

 if ((VAR_7 = FUNC_3(VAR_3, FUNC_1(VAR_6.from), !VAR_5)))
  goto out;

 VAR_7 = FUNC_3(VAR_3, FUNC_1(VAR_6.to), VAR_5);

out:
 FUNC_0(VAR_6.from);
 FUNC_0(VAR_6.to);
 return VAR_7;
}

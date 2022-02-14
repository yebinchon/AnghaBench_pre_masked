
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_walk_context {int buf; int pb; } ;
typedef int git_tree_entry ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;

__attribute__((used)) static int FUNC_7(
 const char *VAR_1, const git_tree_entry *VAR_2, void *VAR_3)
{
 int VAR_4;
 struct tree_walk_context *VAR_5 = VAR_3;


 if (FUNC_6(VAR_2) == VAR_0)
  return 0;

 if (!(VAR_4 = FUNC_2(&VAR_5->buf, VAR_1)) &&
  !(VAR_4 = FUNC_1(&VAR_5->buf, FUNC_5(VAR_2))))
  VAR_4 = FUNC_3(
   VAR_5->pb, FUNC_4(VAR_2), FUNC_0(&VAR_5->buf));

 return VAR_4;
}

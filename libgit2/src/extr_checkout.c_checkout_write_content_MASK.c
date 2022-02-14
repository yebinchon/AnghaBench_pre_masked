
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int git_oid ;
typedef int git_blob ;
struct TYPE_5__ {int strategy; int repo; } ;
typedef TYPE_1__ checkout_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_1__*,struct stat*,int *,char const*,char const*,unsigned int) ;
 int FUNC_2 (TYPE_1__*,struct stat*,int *,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int const*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(
 checkout_data *VAR_3,
 const git_oid *VAR_4,
 const char *VAR_5,
 const char *VAR_6,
 unsigned int VAR_7,
 struct stat *VAR_8)
{
 int VAR_9 = 0;
 git_blob *VAR_10;

 if ((VAR_9 = FUNC_4(&VAR_10, VAR_3->repo, VAR_4)) < 0)
  return VAR_9;

 if (FUNC_0(VAR_7))
  VAR_9 = FUNC_2(VAR_3, VAR_8, VAR_10, VAR_5);
 else
  VAR_9 = FUNC_1(VAR_3, VAR_8, VAR_10, VAR_5, VAR_6, VAR_7);

 FUNC_3(VAR_10);





 if ((VAR_3->strategy & VAR_0) != 0 &&
  (VAR_9 == VAR_2 || VAR_9 == VAR_1))
 {
  FUNC_5();
  VAR_9 = 0;
 }

 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_signature ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ inmemory; } ;
typedef TYPE_1__ git_rebase ;
typedef int git_oid ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*,int const*,int const*,char const*,char const*) ;
 int FUNC_3 (int *,TYPE_1__*,int const*,int const*,char const*,char const*) ;

int FUNC_4(
 git_oid *VAR_1,
 git_rebase *VAR_2,
 const git_signature *VAR_3,
 const git_signature *VAR_4,
 const char *VAR_5,
 const char *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_2 && VAR_4);

 if (VAR_2->inmemory)
  VAR_7 = FUNC_2(
   VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 else if (VAR_2->type == VAR_0)
  VAR_7 = FUNC_3(
   VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 else
  FUNC_0();

 return VAR_7;
}

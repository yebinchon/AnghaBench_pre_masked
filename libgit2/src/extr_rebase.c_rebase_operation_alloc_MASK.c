
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ git_rebase_operation_t ;
struct TYPE_6__ {char const* exec; int id; scalar_t__ type; } ;
typedef TYPE_1__ git_rebase_operation ;
struct TYPE_7__ {int operations; } ;
typedef TYPE_2__ git_rebase ;
typedef int git_oid ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static git_rebase_operation *FUNC_3(
 git_rebase *VAR_1,
 git_rebase_operation_t VAR_2,
 git_oid *VAR_3,
 const char *VAR_4)
{
 git_rebase_operation *VAR_5;

 FUNC_0((VAR_2 == VAR_0) == !VAR_3);
 FUNC_0((VAR_2 == VAR_0) == !!VAR_4);

 if ((VAR_5 = FUNC_1(VAR_1->operations)) == ((void*)0))
  return ((void*)0);

 VAR_5->type = VAR_2;
 FUNC_2((git_oid *)&VAR_5->id, VAR_3);
 VAR_5->exec = VAR_4;

 return VAR_5;
}

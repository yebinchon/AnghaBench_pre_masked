
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;
struct TYPE_8__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,char const*) ;
 int FUNC_4 (int ,int const*,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,char const*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_9(const char *VAR_6, const char *VAR_7)
{
 git_oid VAR_8;
 git_commit *VAR_9;
 git_checkout_options VAR_10 = VAR_3;
 git_buf VAR_11 = VAR_0;

 FUNC_1(FUNC_3(&VAR_11, VAR_5, VAR_7));

 FUNC_1(FUNC_8(&VAR_8, VAR_4, VAR_6));
 FUNC_1(FUNC_6(&VAR_9, VAR_4, &VAR_8));

 VAR_10.checkout_strategy = VAR_2 |
  VAR_1;

 FUNC_1(FUNC_4(VAR_4, (const git_object *)VAR_9, &VAR_10));
 FUNC_0(!FUNC_7(VAR_11.ptr));

 FUNC_5(VAR_9);
 FUNC_2(&VAR_11);
}

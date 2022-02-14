
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
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,char const*) ;
 int FUNC_5 (int ,int const*,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,char const*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_10(const char *VAR_5, const char *VAR_6)
{
 git_oid VAR_7;
 git_commit *VAR_8;
 git_checkout_options VAR_9 = VAR_2;
 git_buf VAR_10 = VAR_0;

 FUNC_2(FUNC_4(&VAR_10, VAR_4, VAR_6));

 FUNC_2(FUNC_9(&VAR_7, VAR_3, VAR_5));
 FUNC_2(FUNC_7(&VAR_8, VAR_3, &VAR_7));

 VAR_9.checkout_strategy = VAR_1;

 FUNC_1(FUNC_5(VAR_3, (const git_object *)VAR_8, &VAR_9));
 FUNC_0(!FUNC_8(VAR_10.ptr));

 FUNC_6(VAR_8);
 FUNC_3(&VAR_10);
}

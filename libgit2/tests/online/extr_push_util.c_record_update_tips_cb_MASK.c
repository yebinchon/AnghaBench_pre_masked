
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int new_oid; int old_oid; struct TYPE_7__* name; } ;
typedef TYPE_1__ updated_tip ;
struct TYPE_8__ {int updated_tips; } ;
typedef TYPE_2__ record_callbacks_data ;
typedef int git_oid ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (char const*) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,TYPE_1__*) ;

int FUNC_5(const char *VAR_0, const git_oid *VAR_1, const git_oid *VAR_2, void *VAR_3)
{
 updated_tip *VAR_4;
 record_callbacks_data *VAR_5 = (record_callbacks_data *)VAR_3;

 FUNC_0(VAR_4 = FUNC_1(1, sizeof(*VAR_4)));

 FUNC_0(VAR_4->name = FUNC_2(VAR_0));
 FUNC_3(&VAR_4->old_oid, VAR_1);
 FUNC_3(&VAR_4->new_oid, VAR_2);

 FUNC_4(&VAR_5->updated_tips, VAR_4);

 return 0;
}

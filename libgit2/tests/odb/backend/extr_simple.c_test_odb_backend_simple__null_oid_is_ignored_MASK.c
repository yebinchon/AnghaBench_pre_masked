
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int member_0; } ;
struct TYPE_9__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ git_oid ;
typedef int git_odb_object ;
struct TYPE_10__ {char* member_0; char* member_1; } ;
typedef TYPE_3__ fake_object ;
struct TYPE_11__ {int message; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_7__* FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int **,int ,TYPE_2__*) ;
 int FUNC_7 (TYPE_3__ const*) ;
 scalar_t__ FUNC_8 (int ,char*) ;

void FUNC_9(void)
{
 const fake_object VAR_3[] = {
  { "0000000000000000000000000000000000000000", "null oid content" },
  { ((void*)0), ((void*)0) }
 };
 git_oid VAR_4 = {{0}};
 git_odb_object *VAR_5;

 FUNC_7(VAR_3);

 FUNC_2(FUNC_4(VAR_1, 0));
 FUNC_0(!FUNC_5(VAR_2, &VAR_4));

 FUNC_1(VAR_0, FUNC_6(&VAR_5, VAR_2, &VAR_4));
 FUNC_0(FUNC_3() && FUNC_8(FUNC_3()->message, "null OID"));
}

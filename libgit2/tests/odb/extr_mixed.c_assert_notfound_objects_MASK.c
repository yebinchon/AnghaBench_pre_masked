
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_0; } ;
struct TYPE_7__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ git_oid ;
struct TYPE_8__ {int type; int length; int id; } ;
typedef TYPE_3__ git_odb_expand_id ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(git_odb_expand_id *VAR_1)
{
 git_oid VAR_2 = {{0}};
 size_t VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_2(&VAR_2, &VAR_1[VAR_4].id);
  FUNC_1(0, VAR_1[VAR_4].length);
  FUNC_1(0, VAR_1[VAR_4].type);
 }
}

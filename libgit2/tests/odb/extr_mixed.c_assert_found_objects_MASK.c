
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int member_0; } ;
struct TYPE_10__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ git_oid ;
struct TYPE_11__ {int type; int length; int id; } ;
typedef TYPE_3__ git_odb_expand_id ;
typedef size_t git_object_t ;
struct TYPE_12__ {size_t expected_type; scalar_t__ expected_id; } ;


 size_t FUNC_0 (TYPE_5__*) ;
 size_t VAR_0 ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 TYPE_5__* VAR_1 ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(git_odb_expand_id *VAR_2)
{
 size_t VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  git_oid VAR_5 = {{0}};
  size_t VAR_6 = 0;
  git_object_t VAR_7 = 0;

  if (VAR_1[VAR_4].expected_id) {
   FUNC_3(&VAR_5, VAR_1[VAR_4].expected_id);
   VAR_6 = VAR_0;
   VAR_7 = VAR_1[VAR_4].expected_type;
  }

  FUNC_2(&VAR_5, &VAR_2[VAR_4].id);
  FUNC_1(VAR_6, VAR_2[VAR_4].length);
  FUNC_1(VAR_7, VAR_2[VAR_4].type);
 }
}

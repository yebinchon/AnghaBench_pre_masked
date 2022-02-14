
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned short length; int type; int id; } ;
typedef TYPE_1__ git_odb_expand_id ;
struct TYPE_8__ {int expected_type; int lookup_id; } ;


 size_t FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_4__* VAR_0 ;
 TYPE_1__* FUNC_2 (size_t,int) ;
 int FUNC_3 (int *,int ,size_t) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(
 git_odb_expand_id **VAR_1,
 size_t *VAR_2)
{
 git_odb_expand_id *VAR_3;
 size_t VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_0);

 FUNC_1((VAR_3 = FUNC_2(VAR_4, sizeof(git_odb_expand_id))));

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  git_odb_expand_id *VAR_6 = &VAR_3[VAR_5];

  size_t VAR_7 = FUNC_4(VAR_0[VAR_5].lookup_id);

  FUNC_3(&VAR_6->id, VAR_0[VAR_5].lookup_id, VAR_7);
  VAR_6->length = (unsigned short)VAR_7;
  VAR_6->type = VAR_0[VAR_5].expected_type;
 }

 *VAR_1 = VAR_3;
 *VAR_2 = VAR_4;
}

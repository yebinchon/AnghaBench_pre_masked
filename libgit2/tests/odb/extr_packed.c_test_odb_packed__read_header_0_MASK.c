
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_5__ {size_t size; scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ cached; } ;
typedef TYPE_2__ git_odb_object ;
typedef scalar_t__ git_object_t ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__**,int ,int *) ;
 int FUNC_5 (size_t*,scalar_t__*,int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int * VAR_1 ;

void FUNC_7(void)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); ++VAR_2) {
  git_oid VAR_3;
  git_odb_object *VAR_4;
  size_t VAR_5;
  git_object_t VAR_6;

  FUNC_2(FUNC_6(&VAR_3, VAR_1[VAR_2]));

  FUNC_2(FUNC_4(&VAR_4, VAR_0, &VAR_3));
  FUNC_2(FUNC_5(&VAR_5, &VAR_6, VAR_0, &VAR_3));

  FUNC_1(VAR_4->cached.size == VAR_5);
  FUNC_1(VAR_4->cached.type == VAR_6);

  FUNC_3(VAR_4);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_vector ;
struct TYPE_8__ {int _cmp; } ;
struct TYPE_7__ {TYPE_2__ entries; int readers; } ;
typedef TYPE_1__ git_index ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(git_vector *VAR_0, git_index *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1);

 FUNC_1(&VAR_1->readers);
 FUNC_4(&VAR_1->entries);

 VAR_2 = FUNC_3(VAR_0, &VAR_1->entries, VAR_1->entries._cmp);

 if (VAR_2 < 0)
  FUNC_2(VAR_0, VAR_1);

 return VAR_2;
}

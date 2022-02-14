
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_2__ {int annotated_object_sha; int note_sha; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_4(
 const git_oid *VAR_2, const git_oid *VAR_3, void *VAR_4)
{
 git_oid VAR_5, VAR_6;

 unsigned int *VAR_7 = (unsigned int *)VAR_4;

 FUNC_0(*VAR_7 < VAR_0);

 FUNC_2(FUNC_3(&VAR_5, VAR_1[*VAR_7].note_sha));
 FUNC_1(&VAR_5, VAR_2);

 FUNC_2(FUNC_3(&VAR_6, VAR_1[*VAR_7].annotated_object_sha));
 FUNC_1(&VAR_6, VAR_3);

 (*VAR_7)++;

 return 0;
}

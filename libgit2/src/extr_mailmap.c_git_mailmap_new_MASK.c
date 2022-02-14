
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int entries; } ;
typedef TYPE_1__ git_mailmap ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_0 ;

int FUNC_4(git_mailmap **VAR_1)
{
 int VAR_2;
 git_mailmap *VAR_3 = FUNC_1(1, sizeof(git_mailmap));
 FUNC_0(VAR_3);

 VAR_2 = FUNC_3(&VAR_3->entries, 0, VAR_0);
 if (VAR_2 < 0) {
  FUNC_2(VAR_3);
  return VAR_2;
 }
 *VAR_1 = VAR_3;
 return 0;
}

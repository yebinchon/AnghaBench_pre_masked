
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int file_size; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 () ;

void FUNC_7(void)
{
 git_index *VAR_1;
 const git_index_entry *VAR_2;

 FUNC_6();







 FUNC_2(FUNC_5(&VAR_1, VAR_0));
 FUNC_2(FUNC_4(VAR_1));

 FUNC_0(VAR_2 = FUNC_3(VAR_1, "A", 0));
 FUNC_1(0, VAR_2->file_size);
}

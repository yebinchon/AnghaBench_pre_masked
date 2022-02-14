
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags_extended; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 () ;

void FUNC_8(void)
{
 git_index *VAR_2;
 const git_index_entry *VAR_3;

 FUNC_7();

 FUNC_2(FUNC_6(&VAR_2, VAR_1));


 FUNC_0((VAR_3 = FUNC_4(VAR_2, "A", 0)));
 FUNC_1(VAR_0, (VAR_3->flags_extended & VAR_0));

 FUNC_0((VAR_3 = FUNC_4(VAR_2, "B", 0)));
 FUNC_1(VAR_0, (VAR_3->flags_extended & VAR_0));

 FUNC_0((VAR_3 = FUNC_4(VAR_2, "C", 0)));
 FUNC_1(VAR_0, (VAR_3->flags_extended & VAR_0));

 FUNC_2(FUNC_5(VAR_2));

 FUNC_3(VAR_2);
}

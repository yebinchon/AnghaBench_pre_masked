
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int entries; } ;
typedef TYPE_1__ git_index ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__**,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,unsigned int) ;
 int FUNC_9 (int *) ;

void FUNC_10(void)
{
 git_index *VAR_2;
 unsigned int VAR_3;

 FUNC_2(FUNC_6(&VAR_2, VAR_1));
 FUNC_2(FUNC_9(&VAR_2->entries));

 VAR_3 = FUNC_3(VAR_2);
 FUNC_2(FUNC_8(VAR_2, VAR_3 &= ~VAR_0));
 FUNC_2(FUNC_7(VAR_2, 1));
 FUNC_2(FUNC_9(&VAR_2->entries));
 FUNC_0(FUNC_5(VAR_2, ".HEADER", 0));
 FUNC_1(((void*)0), FUNC_5(VAR_2, ".header", 0));

 FUNC_2(FUNC_8(VAR_2, VAR_3 | VAR_0));
 FUNC_2(FUNC_7(VAR_2, 1));
 FUNC_2(FUNC_9(&VAR_2->entries));
 FUNC_0(FUNC_5(VAR_2, ".HEADER", 0));
 FUNC_0(FUNC_5(VAR_2, ".header", 0));

 FUNC_4(VAR_2);
}

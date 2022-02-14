
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_12__ {int entries; int ignore_case; } ;
typedef TYPE_2__ git_index ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,TYPE_1__ const*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,char*,int ) ;
 int FUNC_8 (TYPE_2__**,int ) ;
 int FUNC_9 (TYPE_2__*,unsigned int) ;
 int FUNC_10 (int *) ;

void FUNC_11(void)
{
 git_index *VAR_2;
 unsigned int VAR_3;
 const git_index_entry *VAR_4;

 FUNC_4(FUNC_8(&VAR_2, VAR_1));
 FUNC_4(FUNC_10(&VAR_2->entries));

 VAR_3 = FUNC_5(VAR_2);
 FUNC_4(FUNC_9(VAR_2, VAR_3 &= ~VAR_0));
 FUNC_1(0, VAR_2->ignore_case);
 FUNC_4(FUNC_10(&VAR_2->entries));
 FUNC_0(VAR_4 = FUNC_7(VAR_2, "src/common.h", 0));
 FUNC_2(((void*)0), VAR_4 = FUNC_7(VAR_2, "SRC/Common.h", 0));
 FUNC_0(VAR_4 = FUNC_7(VAR_2, "COPYING", 0));
 FUNC_2(((void*)0), VAR_4 = FUNC_7(VAR_2, "copying", 0));

 FUNC_4(FUNC_9(VAR_2, VAR_3 | VAR_0));
 FUNC_1(1, VAR_2->ignore_case);
 FUNC_4(FUNC_10(&VAR_2->entries));
 FUNC_0(VAR_4 = FUNC_7(VAR_2, "COPYING", 0));
 FUNC_3("COPYING", VAR_4->path);
 FUNC_0(VAR_4 = FUNC_7(VAR_2, "copying", 0));
 FUNC_3("COPYING", VAR_4->path);

 FUNC_6(VAR_2);
}

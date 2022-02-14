
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_4__ {int * oid; int path; } ;
typedef TYPE_1__ git_index_reuc_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,int *,int,int *,int,int *) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *,int ) ;
 int VAR_4 ;

void FUNC_12(void)
{
 const git_index_reuc_entry *VAR_5;
 git_oid VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 FUNC_6(VAR_4);

 VAR_10 = FUNC_5(VAR_4);

 VAR_10 |= VAR_0;
 FUNC_4(FUNC_10(VAR_4, VAR_10));

 FUNC_11(&VAR_6, VAR_1);
 FUNC_11(&VAR_7, VAR_2);
 FUNC_11(&VAR_8, VAR_3);

 FUNC_4(FUNC_7(VAR_4, "two.txt",
  0100644, &VAR_6,
  0100644, &VAR_7,
  0100644, &VAR_8));

 FUNC_4(FUNC_7(VAR_4, "TWO.txt",
  0100644, &VAR_7,
  0100644, &VAR_8,
  0100644, &VAR_6));

 FUNC_1(1, FUNC_8(VAR_4));

 FUNC_0(VAR_5 = FUNC_9(VAR_4, 0));

 FUNC_3("TWO.txt", VAR_5->path);
 FUNC_11(&VAR_9, VAR_2);
 FUNC_2(&VAR_5->oid[0], &VAR_9);
 FUNC_11(&VAR_9, VAR_3);
 FUNC_2(&VAR_5->oid[1], &VAR_9);
 FUNC_11(&VAR_9, VAR_1);
 FUNC_2(&VAR_5->oid[2], &VAR_9);
}

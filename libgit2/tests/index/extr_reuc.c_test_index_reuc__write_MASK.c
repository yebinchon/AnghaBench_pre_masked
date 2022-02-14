
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_4__ {int path; } ;
typedef TYPE_1__ git_index_reuc_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int *,int,int *,int,int *) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int VAR_6 ;

void FUNC_10(void)
{
 git_oid VAR_7, VAR_8, VAR_9;
 const git_index_reuc_entry *VAR_10;

 FUNC_4(VAR_6);


 FUNC_9(&VAR_7, VAR_3);
 FUNC_9(&VAR_8, VAR_4);
 FUNC_9(&VAR_9, VAR_5);

 FUNC_3(FUNC_5(VAR_6, "two.txt",
  0100644, &VAR_7,
  0100644, &VAR_8,
  0100644, &VAR_9));

 FUNC_9(&VAR_7, VAR_0);
 FUNC_9(&VAR_8, VAR_1);
 FUNC_9(&VAR_9, VAR_2);

 FUNC_3(FUNC_5(VAR_6, "one.txt",
  0100644, &VAR_7,
  0100644, &VAR_8,
  0100644, &VAR_9));

 FUNC_3(FUNC_8(VAR_6));
 FUNC_1(2, FUNC_6(VAR_6));


 FUNC_0(VAR_10 = FUNC_7(VAR_6, 0));
 FUNC_2("one.txt", VAR_10->path);

 FUNC_0(VAR_10 = FUNC_7(VAR_6, 1));
 FUNC_2("two.txt", VAR_10->path);
}

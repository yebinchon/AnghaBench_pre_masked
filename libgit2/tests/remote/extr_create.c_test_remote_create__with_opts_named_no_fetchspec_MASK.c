
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int count; } ;
typedef TYPE_1__ git_strarray ;
struct TYPE_8__ {char* name; int flags; int repository; } ;
typedef TYPE_2__ git_remote_create_options ;
typedef int git_remote ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int **,char*,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;

void FUNC_11(void)
{
 git_remote *VAR_4;
 git_strarray VAR_5;
 git_remote_create_options VAR_6 = VAR_0;

 VAR_6.name = "test-new";
 VAR_6.repository = VAR_3;
 VAR_6.flags = VAR_1;

 FUNC_3(FUNC_4(&VAR_4, VAR_2, &VAR_6));
 FUNC_2(FUNC_7(VAR_4), "test-new");
 FUNC_2(FUNC_9(VAR_4), VAR_2);
 FUNC_1(FUNC_8(VAR_4), VAR_3);

 FUNC_3(FUNC_6(&VAR_5, VAR_4));
 FUNC_0(0, VAR_5.count);

 FUNC_10(&VAR_5);
 FUNC_5(VAR_4);
}

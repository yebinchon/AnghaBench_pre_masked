
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int download_tags; } ;
typedef TYPE_1__ git_remote ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,char*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**,int ,char*) ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{
 git_remote *VAR_4;

 FUNC_2(FUNC_3(&VAR_3, VAR_1, "./foo", &VAR_2));
 FUNC_0(!FUNC_6(VAR_3));
 FUNC_2(FUNC_5(&VAR_4, VAR_3, "origin"));

 FUNC_1(VAR_0, VAR_4->download_tags);

 FUNC_4(VAR_4);
}

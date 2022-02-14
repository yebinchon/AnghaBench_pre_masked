
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(void)
{
 git_strarray VAR_1;
 git_config *VAR_2;

 FUNC_1(FUNC_4(&VAR_1, VAR_0));
 FUNC_0(VAR_1.count == 5);
 FUNC_6(&VAR_1);

 FUNC_1(FUNC_5(&VAR_2, VAR_0));


 FUNC_1(FUNC_3(VAR_2, "remote.specless.url", "http://example.com"));


 FUNC_1(FUNC_3(VAR_2, "remote.no-remote-url.pushurl", "http://example.com"));

 FUNC_1(FUNC_4(&VAR_1, VAR_0));
 FUNC_0(VAR_1.count == 7);
 FUNC_6(&VAR_1);

 FUNC_2(VAR_2);
}

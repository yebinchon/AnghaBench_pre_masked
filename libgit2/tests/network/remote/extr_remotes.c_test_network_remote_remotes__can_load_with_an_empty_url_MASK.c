
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * pushurl; int * url; } ;
typedef TYPE_1__ git_remote ;
struct TYPE_7__ {scalar_t__ klass; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ,int *,int *,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__**,int ,char*) ;

void FUNC_7(void)
{
 git_remote *VAR_3 = ((void*)0);

 FUNC_2(FUNC_6(&VAR_3, VAR_2, "empty-remote-url"));

 FUNC_0(VAR_3->url == ((void*)0));
 FUNC_0(VAR_3->pushurl == ((void*)0));

 FUNC_1(FUNC_4(VAR_3, VAR_0, ((void*)0), ((void*)0), ((void*)0)));

 FUNC_0(FUNC_3() != ((void*)0));
 FUNC_0(FUNC_3()->klass == VAR_1);

 FUNC_5(VAR_3);
}

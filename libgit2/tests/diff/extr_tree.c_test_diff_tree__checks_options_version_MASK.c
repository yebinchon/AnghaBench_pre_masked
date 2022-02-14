
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int klass; } ;
typedef TYPE_1__ git_error ;
struct TYPE_6__ {int version; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int *,int *,TYPE_2__*) ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 () ;
 TYPE_2__ VAR_5 ;
 void* FUNC_7 (int ,char const*) ;

void FUNC_8(void)
{
 const char *VAR_6 = "8496071c1b46c85";
 const char *VAR_7 = "be3563ae3f79";
 const git_error *VAR_8;

 VAR_4 = FUNC_3("testrepo.git");

 FUNC_0((VAR_1 = FUNC_7(VAR_4, VAR_6)) != ((void*)0));
 FUNC_0((VAR_2 = FUNC_7(VAR_4, VAR_7)) != ((void*)0));

 VAR_5.version = 0;
 FUNC_2(FUNC_4(&VAR_3, VAR_4, VAR_1, VAR_2, &VAR_5));
 VAR_8 = FUNC_6();
 FUNC_1(VAR_0, VAR_8->klass);

 FUNC_5();
 VAR_5.version = 1024;
 FUNC_2(FUNC_4(&VAR_3, VAR_4, VAR_1, VAR_2, &VAR_5));
 VAR_8 = FUNC_6();
}

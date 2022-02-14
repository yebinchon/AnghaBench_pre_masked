
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
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int *,int ,int *,TYPE_2__*,int ,int ,int ,int ,int *) ;
 TYPE_1__* FUNC_3 () ;
 TYPE_2__ VAR_8 ;

void FUNC_4(void)
{
 const git_error *VAR_9;

 VAR_8.version = 1024;
 FUNC_1(FUNC_2(
  VAR_2, ((void*)0), VAR_1, ((void*)0), &VAR_8,
  VAR_4, VAR_3, VAR_5, VAR_6, &VAR_7));
 VAR_9 = FUNC_3();
 FUNC_0(VAR_0, VAR_9->klass);
}

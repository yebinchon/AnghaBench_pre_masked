
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tv_sec; } ;
struct utmpx {TYPE_1__ ut_tv; int ut_host; int ut_line; } ;
struct TYPE_6__ {int loginat; int host; int tty; int info; } ;
typedef TYPE_2__ WHERE ;
typedef int PERSON ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (int *) ;

void
FUNC_3(struct utmpx *VAR_1, PERSON *VAR_2)
{
 WHERE *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 VAR_3->info = VAR_0;
 FUNC_1(VAR_3->tty, VAR_1->ut_line);
 FUNC_1(VAR_3->host, VAR_1->ut_host);
 VAR_3->loginat = VAR_1->ut_tv.tv_sec;
 FUNC_0(VAR_3);
}

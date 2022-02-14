
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filed {int f_prevcount; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct filed*,int ,char*,int *,int *,int *,char*,int) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct filed *VAR_1, int VAR_2)
{
 char VAR_3[100];

 FUNC_0(VAR_1->f_prevcount > 0);
 FUNC_2(VAR_3, sizeof(VAR_3), "last message repeated %d times",
     VAR_1->f_prevcount);
 FUNC_1(VAR_1, VAR_0, "syslogd", ((void*)0), ((void*)0), ((void*)0), VAR_3,
     VAR_2);
}

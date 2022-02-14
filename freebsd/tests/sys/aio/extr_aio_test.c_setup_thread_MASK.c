
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigevent {int * sigev_notify_attributes; int sigev_notify_function; int sigev_notify; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct sigevent*
FUNC_2(void)
{
 static struct sigevent VAR_3;

 FUNC_0(0, FUNC_1(&VAR_1, 0, 0));
 VAR_3.sigev_notify = VAR_0;
 VAR_3.sigev_notify_function = VAR_2;
 VAR_3.sigev_notify_attributes = ((void*)0);
 return (&VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_sec; } ;
struct itimerval {TYPE_1__ it_value; } ;
typedef int itv ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct itimerval*,int) ;
 int FUNC_1 (int ,struct itimerval*,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(int VAR_3)
{
 struct itimerval VAR_4;
 FUNC_0(&VAR_4, sizeof(VAR_4));
 (void)VAR_3;
 VAR_4.it_value.tv_sec = VAR_3;

 FUNC_2(VAR_1, VAR_2);
 FUNC_1(VAR_0, &VAR_4, ((void*)0));
}

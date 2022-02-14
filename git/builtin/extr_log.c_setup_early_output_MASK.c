
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sigaction {int sa_flags; int sa_mask; int sa_handler; } ;
typedef int sa ;
struct TYPE_4__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {TYPE_1__ it_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (struct sigaction*,int ,int) ;
 int FUNC_1 (int ,TYPE_2__*,int *) ;
 int FUNC_2 (int ,struct sigaction*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct sigaction VAR_5;
 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.sa_handler = VAR_3;
 FUNC_3(&VAR_5.sa_mask);
 VAR_5.sa_flags = VAR_1;
 FUNC_2(VAR_2, &VAR_5, ((void*)0));
 VAR_4.it_value.tv_sec = 0;
 VAR_4.it_value.tv_usec = 100000;
 FUNC_1(VAR_0, &VAR_4, ((void*)0));
}

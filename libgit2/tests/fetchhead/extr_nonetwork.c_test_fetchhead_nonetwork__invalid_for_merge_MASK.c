
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int message; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,char*) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int *,char*,int ) ;
 int VAR_2 ;

void FUNC_9(void)
{
 FUNC_4(&VAR_0, "./test1");
 FUNC_2(FUNC_8(&VAR_1, "./test1", 0));

 FUNC_3("./test1/.git/FETCH_HEAD", "49322bb17d3acc9146f98c97d078513228bbf3c0\tinvalid-merge\t\n");
 FUNC_1(FUNC_7(VAR_1, VAR_2, ((void*)0)));

 FUNC_0(FUNC_5(FUNC_6()->message, "invalid for-merge") == 0);
}

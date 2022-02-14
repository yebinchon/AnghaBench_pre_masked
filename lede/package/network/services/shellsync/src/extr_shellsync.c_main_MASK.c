
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;

int FUNC_4(int VAR_3,char *VAR_4[])
{
    if(VAR_3!=3)
    {
        FUNC_0("Usage: shellsync <process num> <wait_timeout>\n");
    }
    else
    {
        int VAR_5;
        FUNC_2(VAR_4[1],"%d",&VAR_5);
        FUNC_2(VAR_4[2],"%d",&VAR_2);
        if(FUNC_3(VAR_5)<0)
        {
            FUNC_0("Processes sync failed.\n");
            FUNC_1(VAR_1);
            FUNC_1(VAR_0);
            return 1;
        }
        else
        {
            FUNC_0("Processes sync succeed.\n");
            return 0;
        }
    }
}

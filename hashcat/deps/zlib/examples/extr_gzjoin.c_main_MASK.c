
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int,unsigned long*,unsigned long*,int ) ;
 int FUNC_2 (unsigned long*,unsigned long*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(int VAR_2, char **VAR_3)
{
    unsigned long VAR_4, VAR_5;


    VAR_2--;
    VAR_3++;


    if (VAR_2 == 0) {
        FUNC_0("gzjoin usage: gzjoin f1.gz [f2.gz [f3.gz ...]] > fjoin.gz\n",
              VAR_0);
        return 0;
    }


    FUNC_2(&VAR_4, &VAR_5, VAR_1);
    while (VAR_2--)
        FUNC_1(*VAR_3++, VAR_2, &VAR_4, &VAR_5, VAR_1);


    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int) ;

int FUNC_6(int VAR_5, char **VAR_6)
{
    int VAR_7;


    FUNC_0(VAR_3);
    FUNC_0(VAR_4);


    if (VAR_5 == 1) {
        VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_0);
        if (VAR_7 != VAR_1)
            FUNC_5(VAR_7);
        return VAR_7;
    }


    else if (VAR_5 == 2 && FUNC_4(VAR_6[1], "-d") == 0) {
        VAR_7 = FUNC_3(VAR_3, VAR_4);
        if (VAR_7 != VAR_1)
            FUNC_5(VAR_7);
        return VAR_7;
    }


    else {
        FUNC_2("zpipe usage: zpipe [-d] < source > dest\n", VAR_2);
        return 1;
    }
}

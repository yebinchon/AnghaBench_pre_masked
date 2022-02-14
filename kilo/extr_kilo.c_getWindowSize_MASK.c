
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_col; int ws_row; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int*,int*) ;
 int FUNC_1 (int,int ,struct winsize*) ;
 int FUNC_2 (char*,int,char*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,int) ;

int FUNC_5(int VAR_1, int VAR_2, int *VAR_3, int *VAR_4) {
    struct winsize VAR_5;

    if (FUNC_1(1, VAR_0, &VAR_5) == -1 || VAR_5.ws_col == 0) {

        int VAR_6, VAR_7, VAR_8;


        VAR_8 = FUNC_0(VAR_1,VAR_2,&VAR_6,&VAR_7);
        if (VAR_8 == -1) goto failed;


        if (FUNC_4(VAR_2,"\x1b[999C\x1b[999B",12) != 12) goto failed;
        VAR_8 = FUNC_0(VAR_1,VAR_2,VAR_3,VAR_4);
        if (VAR_8 == -1) goto failed;


        char VAR_9[32];
        FUNC_2(VAR_9,32,"\x1b[%d;%dH",VAR_6,VAR_7);
        if (FUNC_4(VAR_2,VAR_9,FUNC_3(VAR_9)) == -1) {

        }
        return 0;
    } else {
        *VAR_4 = VAR_5.ws_col;
        *VAR_3 = VAR_5.ws_row;
        return 0;
    }

failed:
    return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int) ;

int FUNC_2(int VAR_9) {
    int VAR_10;
    char VAR_11, VAR_12[3];
    while ((VAR_10 = FUNC_1(VAR_9,&VAR_11,1)) == 0);
    if (VAR_10 == -1) FUNC_0(1);

    while(1) {
        switch(VAR_11) {
        case 128:

            if (FUNC_1(VAR_9,VAR_12,1) == 0) return 128;
            if (FUNC_1(VAR_9,VAR_12+1,1) == 0) return 128;


            if (VAR_12[0] == '[') {
                if (VAR_12[1] >= '0' && VAR_12[1] <= '9') {

                    if (FUNC_1(VAR_9,VAR_12+2,1) == 0) return 128;
                    if (VAR_12[2] == '~') {
                        switch(VAR_12[1]) {
                        case '3': return VAR_4;
                        case '5': return VAR_8;
                        case '6': return VAR_7;
                        }
                    }
                } else {
                    switch(VAR_12[1]) {
                    case 'A': return VAR_3;
                    case 'B': return VAR_0;
                    case 'C': return VAR_2;
                    case 'D': return VAR_1;
                    case 'H': return VAR_6;
                    case 'F': return VAR_5;
                    }
                }
            }


            else if (VAR_12[0] == 'O') {
                switch(VAR_12[1]) {
                case 'H': return VAR_6;
                case 'F': return VAR_5;
                }
            }
            break;
        default:
            return VAR_11;
        }
    }
}

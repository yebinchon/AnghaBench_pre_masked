
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int welcome ;
struct abuf {int len; int b; } ;
typedef int status ;
typedef int rstatus ;
struct TYPE_3__ {int rsize; char* render; unsigned char* hl; int size; scalar_t__* chars; } ;
typedef TYPE_1__ erow ;
typedef int buf ;
struct TYPE_4__ {int screenrows; int rowoff; int numrows; int screencols; int coloff; char* filename; int cy; char* statusmsg; int statusmsg_time; int cx; TYPE_1__* row; scalar_t__ dirty; } ;


 struct abuf VAR_0 ;
 TYPE_2__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct abuf*,char*,int) ;
 int FUNC_1 (struct abuf*) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;

void FUNC_7(void) {
    int VAR_7;
    erow *VAR_8;
    char VAR_9[32];
    struct abuf VAR_10 = VAR_0;

    FUNC_0(&VAR_10,"\x1b[?25l",6);
    FUNC_0(&VAR_10,"\x1b[H",3);
    for (VAR_7 = 0; VAR_7 < VAR_1.screenrows; VAR_7++) {
        int VAR_11 = VAR_1.rowoff+VAR_7;

        if (VAR_11 >= VAR_1.numrows) {
            if (VAR_1.numrows == 0 && VAR_7 == VAR_1.screenrows/3) {
                char VAR_12[80];
                int VAR_13 = FUNC_3(VAR_12,sizeof(VAR_12),
                    "Kilo editor -- verison %s\x1b[0K\r\n", VAR_4);
                int VAR_14 = (VAR_1.screencols-VAR_13)/2;
                if (VAR_14) {
                    FUNC_0(&VAR_10,"~",1);
                    VAR_14--;
                }
                while(VAR_14--) FUNC_0(&VAR_10," ",1);
                FUNC_0(&VAR_10,VAR_12,VAR_13);
            } else {
                FUNC_0(&VAR_10,"~\x1b[0K\r\n",7);
            }
            continue;
        }

        VAR_8 = &VAR_1.row[VAR_11];

        int VAR_15 = VAR_8->rsize - VAR_1.coloff;
        int VAR_16 = -1;
        if (VAR_15 > 0) {
            if (VAR_15 > VAR_1.screencols) VAR_15 = VAR_1.screencols;
            char *VAR_17 = VAR_8->render+VAR_1.coloff;
            unsigned char *VAR_18 = VAR_8->hl+VAR_1.coloff;
            int VAR_19;
            for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
                if (VAR_18[VAR_19] == VAR_2) {
                    char VAR_20;
                    FUNC_0(&VAR_10,"\x1b[7m",4);
                    if (VAR_17[VAR_19] <= 26)
                        VAR_20 = '@'+VAR_17[VAR_19];
                    else
                        VAR_20 = '?';
                    FUNC_0(&VAR_10,&VAR_20,1);
                    FUNC_0(&VAR_10,"\x1b[0m",4);
                } else if (VAR_18[VAR_19] == VAR_3) {
                    if (VAR_16 != -1) {
                        FUNC_0(&VAR_10,"\x1b[39m",5);
                        VAR_16 = -1;
                    }
                    FUNC_0(&VAR_10,VAR_17+VAR_19,1);
                } else {
                    int VAR_21 = FUNC_2(VAR_18[VAR_19]);
                    if (VAR_21 != VAR_16) {
                        char VAR_22[16];
                        int VAR_23 = FUNC_3(VAR_22,sizeof(VAR_22),"\x1b[%dm",VAR_21);
                        VAR_16 = VAR_21;
                        FUNC_0(&VAR_10,VAR_22,VAR_23);
                    }
                    FUNC_0(&VAR_10,VAR_17+VAR_19,1);
                }
            }
        }
        FUNC_0(&VAR_10,"\x1b[39m",5);
        FUNC_0(&VAR_10,"\x1b[0K",4);
        FUNC_0(&VAR_10,"\r\n",2);
    }


    FUNC_0(&VAR_10,"\x1b[0K",4);
    FUNC_0(&VAR_10,"\x1b[7m",4);
    char VAR_24[80], VAR_25[80];
    int VAR_26 = FUNC_3(VAR_24, sizeof(VAR_24), "%.20s - %d lines %s",
        VAR_1.filename, VAR_1.numrows, VAR_1.dirty ? "(modified)" : "");
    int VAR_27 = FUNC_3(VAR_25, sizeof(VAR_25),
        "%d/%d",VAR_1.rowoff+VAR_1.cy+1,VAR_1.numrows);
    if (VAR_26 > VAR_1.screencols) VAR_26 = VAR_1.screencols;
    FUNC_0(&VAR_10,VAR_24,VAR_26);
    while(VAR_26 < VAR_1.screencols) {
        if (VAR_1.screencols - VAR_26 == VAR_27) {
            FUNC_0(&VAR_10,VAR_25,VAR_27);
            break;
        } else {
            FUNC_0(&VAR_10," ",1);
            VAR_26++;
        }
    }
    FUNC_0(&VAR_10,"\x1b[0m\r\n",6);


    FUNC_0(&VAR_10,"\x1b[0K",4);
    int VAR_28 = FUNC_4(VAR_1.statusmsg);
    if (VAR_28 && FUNC_5(((void*)0))-VAR_1.statusmsg_time < 5)
        FUNC_0(&VAR_10,VAR_1.statusmsg,VAR_28 <= VAR_1.screencols ? VAR_28 : VAR_1.screencols);




    int VAR_29;
    int VAR_30 = 1;
    int VAR_31 = VAR_1.rowoff+VAR_1.cy;
    erow *VAR_32 = (VAR_31 >= VAR_1.numrows) ? ((void*)0) : &VAR_1.row[VAR_31];
    if (VAR_32) {
        for (VAR_29 = VAR_1.coloff; VAR_29 < (VAR_1.cx+VAR_1.coloff); VAR_29++) {
            if (VAR_29 < VAR_32->size && VAR_32->chars[VAR_29] == VAR_6) VAR_30 += 7-((VAR_30)%8);
            VAR_30++;
        }
    }
    FUNC_3(VAR_9,sizeof(VAR_9),"\x1b[%d;%dH",VAR_1.cy+1,VAR_30);
    FUNC_0(&VAR_10,VAR_9,FUNC_4(VAR_9));
    FUNC_0(&VAR_10,"\x1b[?25h",6);
    FUNC_6(VAR_5,VAR_10.b,VAR_10.len);
    FUNC_1(&VAR_10);
}

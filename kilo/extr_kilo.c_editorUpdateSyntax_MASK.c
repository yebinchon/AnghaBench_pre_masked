
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* hl; int rsize; char* render; int idx; int size; int hl_oc; } ;
typedef TYPE_2__ erow ;
struct TYPE_8__ {int numrows; TYPE_2__* row; TYPE_1__* syntax; } ;
struct TYPE_6__ {char** keywords; char* singleline_comment_start; char* multiline_comment_start; char* multiline_comment_end; } ;


 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (scalar_t__*,int ,int) ;
 scalar_t__* FUNC_7 (scalar_t__*,int) ;
 int FUNC_8 (char*) ;

void FUNC_9(erow *VAR_9) {
    VAR_9->hl = FUNC_7(VAR_9->hl,VAR_9->rsize);
    FUNC_6(VAR_9->hl,VAR_6,VAR_9->rsize);

    if (VAR_0.syntax == ((void*)0)) return;

    int VAR_10, VAR_11, VAR_12, VAR_13;
    char *VAR_14;
    char **VAR_15 = VAR_0.syntax->keywords;
    char *VAR_16 = VAR_0.syntax->singleline_comment_start;
    char *VAR_17 = VAR_0.syntax->multiline_comment_start;
    char *VAR_18 = VAR_0.syntax->multiline_comment_end;


    VAR_14 = VAR_9->render;
    VAR_10 = 0;
    while(*VAR_14 && FUNC_4(*VAR_14)) {
        VAR_14++;
        VAR_10++;
    }
    VAR_11 = 1;
    VAR_12 = 0;
    VAR_13 = 0;



    if (VAR_9->idx > 0 && FUNC_0(&VAR_0.row[VAR_9->idx-1]))
        VAR_13 = 1;

    while(*VAR_14) {

        if (VAR_11 && *VAR_14 == VAR_16[0] && *(VAR_14+1) == VAR_16[1]) {

            FUNC_6(VAR_9->hl+VAR_10,VAR_1,VAR_9->size-VAR_10);
            return;
        }


        if (VAR_13) {
            VAR_9->hl[VAR_10] = VAR_4;
            if (*VAR_14 == VAR_18[0] && *(VAR_14+1) == VAR_18[1]) {
                VAR_9->hl[VAR_10+1] = VAR_4;
                VAR_14 += 2; VAR_10 += 2;
                VAR_13 = 0;
                VAR_11 = 1;
                continue;
            } else {
                VAR_11 = 0;
                VAR_14++; VAR_10++;
                continue;
            }
        } else if (*VAR_14 == VAR_17[0] && *(VAR_14+1) == VAR_17[1]) {
            VAR_9->hl[VAR_10] = VAR_4;
            VAR_9->hl[VAR_10+1] = VAR_4;
            VAR_14 += 2; VAR_10 += 2;
            VAR_13 = 1;
            VAR_11 = 0;
            continue;
        }


        if (VAR_12) {
            VAR_9->hl[VAR_10] = VAR_8;
            if (*VAR_14 == '\\') {
                VAR_9->hl[VAR_10+1] = VAR_8;
                VAR_14 += 2; VAR_10 += 2;
                VAR_11 = 0;
                continue;
            }
            if (*VAR_14 == VAR_12) VAR_12 = 0;
            VAR_14++; VAR_10++;
            continue;
        } else {
            if (*VAR_14 == '"' || *VAR_14 == '\'') {
                VAR_12 = *VAR_14;
                VAR_9->hl[VAR_10] = VAR_8;
                VAR_14++; VAR_10++;
                VAR_11 = 0;
                continue;
            }
        }


        if (!FUNC_3(*VAR_14)) {
            VAR_9->hl[VAR_10] = VAR_5;
            VAR_14++; VAR_10++;
            VAR_11 = 0;
            continue;
        }


        if ((FUNC_2(*VAR_14) && (VAR_11 || VAR_9->hl[VAR_10-1] == VAR_7)) ||
            (*VAR_14 == '.' && VAR_10 >0 && VAR_9->hl[VAR_10-1] == VAR_7)) {
            VAR_9->hl[VAR_10] = VAR_7;
            VAR_14++; VAR_10++;
            VAR_11 = 0;
            continue;
        }


        if (VAR_11) {
            int VAR_19;
            for (VAR_19 = 0; VAR_15[VAR_19]; VAR_19++) {
                int VAR_20 = FUNC_8(VAR_15[VAR_19]);
                int VAR_21 = VAR_15[VAR_19][VAR_20-1] == '|';
                if (VAR_21) VAR_20--;

                if (!FUNC_5(VAR_14,VAR_15[VAR_19],VAR_20) &&
                    FUNC_1(*(VAR_14+VAR_20)))
                {

                    FUNC_6(VAR_9->hl+VAR_10,VAR_21 ? VAR_3 : VAR_2,VAR_20);
                    VAR_14 += VAR_20;
                    VAR_10 += VAR_20;
                    break;
                }
            }
            if (VAR_15[VAR_19] != ((void*)0)) {
                VAR_11 = 0;
                continue;
            }
        }


        VAR_11 = FUNC_1(*VAR_14);
        VAR_14++; VAR_10++;
    }




    int VAR_22 = FUNC_0(VAR_9);
    if (VAR_9->hl_oc != VAR_22 && VAR_9->idx+1 < VAR_0.numrows)
        FUNC_9(&VAR_0.row[VAR_9->idx+1]);
    VAR_9->hl_oc = VAR_22;
}

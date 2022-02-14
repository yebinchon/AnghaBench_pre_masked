
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct editorSyntax {char** filematch; } ;
struct TYPE_2__ {struct editorSyntax* syntax; } ;


 TYPE_1__ VAR_0 ;
 struct editorSyntax* VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*) ;

void FUNC_2(char *VAR_3) {
    for (unsigned int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        struct editorSyntax *VAR_5 = VAR_1+VAR_4;
        unsigned int VAR_6 = 0;
        while(VAR_5->filematch[VAR_6]) {
            char *VAR_7;
            int VAR_8 = FUNC_0(VAR_5->filematch[VAR_6]);
            if ((VAR_7 = FUNC_1(VAR_3,VAR_5->filematch[VAR_6])) != ((void*)0)) {
                if (VAR_5->filematch[VAR_6][0] != '.' || VAR_7[VAR_8] == '\0') {
                    VAR_0.syntax = VAR_5;
                    return;
                }
            }
            VAR_6++;
        }
    }
}

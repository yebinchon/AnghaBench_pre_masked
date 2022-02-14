
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {char* fname; int prga_len; int prga; int iv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,int ,int) ;

void FUNC_6(struct params *VAR_1)
{
        int VAR_2;
        int VAR_3;

        VAR_2 = FUNC_3(VAR_1->fname, VAR_0);
        if (VAR_2 == -1) {
                VAR_1->prga_len = 0;
                return;
        }

        VAR_3 = FUNC_5(VAR_2, VAR_1->iv, 3);
        if (VAR_3 == -1)
                FUNC_1(1, "read()");
        if (VAR_3 != 3) {
                FUNC_4("Short read\n");
                FUNC_2(1);
        }

        VAR_3 = FUNC_5(VAR_2, VAR_1->prga, sizeof(VAR_1->prga));
        if (VAR_3 == -1)
                FUNC_1(1, "read()");
        VAR_1->prga_len = VAR_3;

        FUNC_4("Loaded %d PRGA from %s\n", VAR_1->prga_len, VAR_1->fname);
        FUNC_0(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int seq; int tx; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,void*,int) ;
 int FUNC_3 (char*,int,int) ;

void FUNC_4(struct params *VAR_0, void *VAR_1, int VAR_2)
{
        int VAR_3;

        VAR_3 = FUNC_2(VAR_0->tx, VAR_1, VAR_2);
        if (VAR_3 == -1)
                FUNC_0(1, "inject()");
        if (VAR_3 != VAR_2) {
                FUNC_3("injected %d/%d\n", VAR_3, VAR_2);
                FUNC_1(1);
        }
        VAR_0->seq++;
}

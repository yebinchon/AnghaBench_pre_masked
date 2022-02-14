
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int packet_len; int last; int packet; int tx; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*,int,int) ;

void FUNC_5(struct params *VAR_0)
{
        int VAR_1;

        VAR_1 = FUNC_3(VAR_0->tx, VAR_0->packet, VAR_0->packet_len);
        if (VAR_1 == -1)
                FUNC_0(1, "inject()");
        if (VAR_1 != VAR_0->packet_len) {
                FUNC_4("Wrote %d/%d\n", VAR_1, VAR_0->packet_len);
                FUNC_1(1);
        }

        if (FUNC_2(&VAR_0->last, ((void*)0)) == -1)
                FUNC_0(1, "gettimeofday()");
}

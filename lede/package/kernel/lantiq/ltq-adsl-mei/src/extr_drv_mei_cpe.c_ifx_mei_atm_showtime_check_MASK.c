
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_cell_info {int port_num; int * tx_link_rate; } ;


 int * VAR_0 ;
 void* VAR_1 ;

int FUNC_0(int *VAR_2, struct port_cell_info *VAR_3, void **VAR_4)
{
    int VAR_5;

    if ( VAR_2 ) {
        *VAR_2 = VAR_0[0] == 0 && VAR_0[1] == 0 ? 0 : 1;
    }

    if ( VAR_3 ) {
        for ( VAR_5 = 0; VAR_5 < VAR_3->port_num && VAR_5 < 2; VAR_5++ )
            VAR_3->tx_link_rate[VAR_5] = VAR_0[VAR_5];
    }

    if ( VAR_4 ) {
        if ( VAR_0[0] == 0 && VAR_0[1] == 0 )
            *VAR_4 = ((void*)0);
        else
            *VAR_4 = VAR_1;
    }

    return 0;
}

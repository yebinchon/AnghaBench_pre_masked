
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_cell_info {int port_num; void** tx_link_rate; int member_0; } ;
typedef int DSL_uint32_t ;
typedef int DSL_DEV_MeiError_t ;
typedef int DSL_DEV_Device_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 void** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct port_cell_info*,int ) ;

DSL_DEV_MeiError_t
FUNC_2 (DSL_DEV_Device_t * VAR_3, DSL_uint32_t VAR_4, DSL_uint32_t VAR_5)
{
    struct port_cell_info VAR_6 = {0};

 FUNC_0 ("Datarate US intl = %d, fast = %d\n", (int)VAR_5,
       (int)VAR_4);

    if ( VAR_4 )
        VAR_1[0] = VAR_4 / (53 * 8);
    if ( VAR_5 )
        VAR_1[1] = VAR_5 / (53 * 8);

    if ( VAR_1[0] == 0 && VAR_1[1] == 0 ) {
        FUNC_0 ("Got rate fail.\n");
    }

 if ( &FUNC_1 )
 {
     VAR_6.port_num = 2;
     VAR_6.tx_link_rate[0] = VAR_1[0];
     VAR_6.tx_link_rate[1] = VAR_1[1];
        FUNC_1(&VAR_6, VAR_2);
 }
 else
 {
  FUNC_0("no hookup from ATM driver to set cell rate\n");
 }

 return VAR_0;
}

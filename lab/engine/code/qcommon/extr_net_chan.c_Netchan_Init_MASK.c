
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,char*,int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 char* FUNC_1 (char*,int) ;

void FUNC_2( int VAR_5 ) {
 VAR_5 &= 0xffff;
 VAR_4 = FUNC_0 ("showpackets", "0", VAR_1 );
 VAR_3 = FUNC_0 ("showdrop", "0", VAR_1 );
 VAR_2 = FUNC_0 ("net_qport", FUNC_1("%i", VAR_5), VAR_0 );
}

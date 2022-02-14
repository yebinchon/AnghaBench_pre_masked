
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _TCBVAR ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

void FUNC_3 (_TCBVAR *VAR_0, int VAR_1)
{



  FUNC_0("TLS:  offset: 0x%6.6x, len:0x%6.6x, flags: 0x%4.4x\n",
       FUNC_1("rx_tls_buf_offset"),FUNC_1("rx_tls_buf_len"),
       FUNC_1("rx_tls_flags"));
  FUNC_0("      seq: 0x%llx \n",FUNC_2("rx_tls_seq"));
  FUNC_0("      tag: 0x%8.8x, key:0x%8.8x\n",
       FUNC_1("rx_tls_buf_tag"),FUNC_1("rx_tls_key_tag"));




}

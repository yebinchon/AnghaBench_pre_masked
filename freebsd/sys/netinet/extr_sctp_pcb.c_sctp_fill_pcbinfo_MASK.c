
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_pcbinfo {void* free_chunks; void* stream_oque; void* readq_count; void* chk_count; void* raddr_count; void* laddr_count; void* asoc_count; void* ep_count; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_3(struct sctp_pcbinfo *VAR_8)
{




 FUNC_1();
 VAR_8->ep_count = FUNC_0(VAR_2);
 VAR_8->asoc_count = FUNC_0(VAR_0);
 VAR_8->laddr_count = FUNC_0(VAR_3);
 VAR_8->raddr_count = FUNC_0(VAR_4);
 VAR_8->chk_count = FUNC_0(VAR_1);
 VAR_8->readq_count = FUNC_0(VAR_5);
 VAR_8->stream_oque = FUNC_0(VAR_6);
 VAR_8->free_chunks = FUNC_0(VAR_7);
 FUNC_2();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsgl_walk {int nents; struct cpl_rx_phys_dsgl* dsgl; } ;
struct TYPE_2__ {int channel; scalar_t__ hash_val; int qid; int opcode; } ;
struct cpl_rx_phys_dsgl {TYPE_1__ rss_hdr_int; void* pcirlxorder_to_noofsgentr; void* op_to_tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (unsigned short) ;

__attribute__((used)) static inline void FUNC_10(struct dsgl_walk *VAR_2, unsigned short VAR_3,
     int VAR_4)
{
 struct cpl_rx_phys_dsgl *VAR_5;

 VAR_5 = VAR_2->dsgl;

 VAR_5->op_to_tid = FUNC_8(FUNC_3(VAR_1)
        | FUNC_1(0));
 VAR_5->pcirlxorder_to_noofsgentr =
  FUNC_8(FUNC_5(0) |
        FUNC_4(0) |
        FUNC_6(0) |
        FUNC_7(0) |
        FUNC_0(0) |
        FUNC_2(VAR_2->nents));
 VAR_5->rss_hdr_int.opcode = VAR_0;
 VAR_5->rss_hdr_int.qid = FUNC_9(VAR_3);
 VAR_5->rss_hdr_int.hash_val = 0;
 VAR_5->rss_hdr_int.channel = VAR_4;
}

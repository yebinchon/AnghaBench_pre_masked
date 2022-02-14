
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbdma_cmd {scalar_t__ xfer_status; int phy_addr; void* command; void* req_count; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static inline void FUNC_3(struct dbdma_cmd *VAR_0, int VAR_1,
       void *VAR_2, int VAR_3)
{
 VAR_0->req_count = FUNC_0(VAR_3);
 VAR_0->command = FUNC_0(VAR_1);
 VAR_0->phy_addr = FUNC_1(FUNC_2(VAR_2));
 VAR_0->xfer_status = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_blkif_ring {scalar_t__ st_ds_req; scalar_t__ st_oo_req; scalar_t__ st_wr_req; scalar_t__ st_rd_req; scalar_t__ st_print; int persistent_gnt_c; int st_f_req; } ;
struct TYPE_2__ {int comm; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct xen_blkif_ring *VAR_3)
{
 FUNC_1("(%s): oo %3llu  |  rd %4llu  |  wr %4llu  |  f %4llu"
   "  |  ds %4llu | pg: %4u/%4d\n",
   VAR_0->comm, VAR_3->st_oo_req,
   VAR_3->st_rd_req, VAR_3->st_wr_req,
   VAR_3->st_f_req, VAR_3->st_ds_req,
   VAR_3->persistent_gnt_c,
   VAR_2);
 VAR_3->st_print = VAR_1 + FUNC_0(10 * 1000);
 VAR_3->st_rd_req = 0;
 VAR_3->st_wr_req = 0;
 VAR_3->st_oo_req = 0;
 VAR_3->st_ds_req = 0;
}

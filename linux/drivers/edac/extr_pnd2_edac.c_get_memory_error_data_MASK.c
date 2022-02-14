
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mem_ctl_info {int dummy; } ;
struct dram_addr {int chan; int col; int row; int bank; int rank; int dimm; } ;
struct TYPE_2__ {int pmiaddr_shift; int pmiidx_shift; int (* pmi2mem ) (struct mem_ctl_info*,int,int,struct dram_addr*,char*) ;} ;


 int FUNC_0 (int ,char*,int,int,int,int ,int ,int ,int ,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct mem_ctl_info*,int,int,struct dram_addr*,char*) ;
 int FUNC_2 (int,int*,int*,char*) ;

__attribute__((used)) static int FUNC_3(struct mem_ctl_info *VAR_1, u64 VAR_2,
         struct dram_addr *VAR_3, char *VAR_4)
{
 u64 VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2, &VAR_6, &VAR_5, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_5 >>= VAR_0->pmiaddr_shift;

 VAR_6 >>= VAR_0->pmiidx_shift;
 VAR_3->chan = VAR_6;

 VAR_7 = VAR_0->pmi2mem(VAR_1, VAR_5, VAR_6, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_0(0, "SysAddr=%llx PmiAddr=%llx Channel=%d DIMM=%d Rank=%d Bank=%d Row=%d Column=%d\n",
    VAR_2, VAR_5, VAR_3->chan, VAR_3->dimm, VAR_3->rank, VAR_3->bank, VAR_3->row, VAR_3->col);

 return 0;
}

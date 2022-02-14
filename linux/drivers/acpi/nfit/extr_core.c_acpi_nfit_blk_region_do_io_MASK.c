
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nfit_blk_mmio {int size; } ;
struct nfit_blk {struct nd_region* nd_region; struct nfit_blk_mmio* mmio; } ;
struct nd_region {int dummy; } ;
struct nd_blk_region {int dummy; } ;
typedef scalar_t__ resource_size_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct nfit_blk*,scalar_t__,void*,scalar_t__,int,unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 struct nfit_blk* FUNC_2 (struct nd_blk_region*) ;
 unsigned int FUNC_3 (struct nd_region*) ;
 int FUNC_4 (struct nd_region*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct nd_blk_region *VAR_1,
  resource_size_t VAR_2, void *VAR_3, u64 VAR_4, int VAR_5)
{
 struct nfit_blk *VAR_6 = FUNC_2(VAR_1);
 struct nfit_blk_mmio *VAR_7 = &VAR_6->mmio[VAR_0];
 struct nd_region *VAR_8 = VAR_6->nd_region;
 unsigned int VAR_9, VAR_10 = 0;
 int VAR_11 = 0;

 VAR_9 = FUNC_3(VAR_8);
 while (VAR_4) {
  u64 VAR_12 = FUNC_1(VAR_4, VAR_7->size);

  VAR_11 = FUNC_0(VAR_6, VAR_2 + VAR_10,
    VAR_3 + VAR_10, VAR_12, VAR_5, VAR_9);
  if (VAR_11)
   break;

  VAR_10 += VAR_12;
  VAR_4 -= VAR_12;
 }
 FUNC_4(VAR_8, VAR_9);

 return VAR_11;
}

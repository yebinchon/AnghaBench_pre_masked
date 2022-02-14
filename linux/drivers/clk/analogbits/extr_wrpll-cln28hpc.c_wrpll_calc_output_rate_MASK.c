
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef unsigned long u64 ;
struct wrpll_cfg {int flags; int divf; unsigned long divq; scalar_t__ divr; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 unsigned long FUNC_1 (struct wrpll_cfg const*) ;
 unsigned long FUNC_2 (unsigned long,scalar_t__) ;

unsigned long FUNC_3(const struct wrpll_cfg *VAR_2,
         unsigned long VAR_3)
{
 u8 VAR_4;
 u64 VAR_5;

 if (VAR_2->flags & VAR_1) {
  FUNC_0(1, "external feedback mode not yet supported");
  return VAR_0;
 }

 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = VAR_3 * VAR_4 * (VAR_2->divf + 1);
 VAR_5 = FUNC_2(VAR_5, VAR_2->divr + 1);
 VAR_5 >>= VAR_2->divq;

 return VAR_5;
}

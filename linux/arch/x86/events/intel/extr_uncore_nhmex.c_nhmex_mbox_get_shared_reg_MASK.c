
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_uncore_extra_reg {int config; int lock; int ref; } ;
struct intel_uncore_box {struct intel_uncore_extra_reg* shared_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int,int) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_9(struct intel_uncore_box *VAR_4, int VAR_5, u64 VAR_6)
{
 struct intel_uncore_extra_reg *VAR_7;
 unsigned long VAR_8;
 bool VAR_9 = 0;
 u64 VAR_10;

 if (VAR_5 < VAR_0) {
  VAR_7 = &VAR_4->shared_regs[VAR_5];
  FUNC_7(&VAR_7->lock, VAR_8);
  if (!FUNC_6(&VAR_7->ref) || VAR_7->config == VAR_6) {
   FUNC_5(&VAR_7->ref);
   VAR_7->config = VAR_6;
   VAR_9 = 1;
  }
  FUNC_8(&VAR_7->lock, VAR_8);

  return VAR_9;
 }





 VAR_5 -= VAR_0;
 if (FUNC_1(VAR_5 >= 4))
  return 0;


 if (VAR_3)
  VAR_10 = VAR_1;
 else
  VAR_10 = VAR_2;
 VAR_7 = &VAR_4->shared_regs[VAR_0];

 FUNC_7(&VAR_7->lock, VAR_8);

 if (FUNC_3(FUNC_6(&VAR_7->ref), VAR_5, 8)) {
  if (VAR_3)
   VAR_10 |= FUNC_0(VAR_5);
  else
   VAR_10 |= FUNC_2(VAR_5);
 }

 if (!FUNC_6(&VAR_7->ref) || !((VAR_7->config ^ VAR_6) & VAR_10)) {
  FUNC_4(1 << (VAR_5 * 8), &VAR_7->ref);
  if (VAR_3)
   VAR_10 = VAR_1 |
    FUNC_0(VAR_5);
  else
   VAR_10 = VAR_2 |
    FUNC_2(VAR_5);
  VAR_7->config &= ~VAR_10;
  VAR_7->config |= (VAR_6 & VAR_10);
  VAR_9 = 1;
 }
 FUNC_8(&VAR_7->lock, VAR_8);

 return VAR_9;
}

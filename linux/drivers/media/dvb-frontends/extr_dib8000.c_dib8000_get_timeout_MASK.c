
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dib8000_state {int symbol_duration; } ;
typedef enum timeout_mode { ____Placeholder_timeout_mode } timeout_mode ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int) ;

__attribute__((used)) static unsigned long FUNC_1(struct dib8000_state *VAR_2, u32 VAR_3, enum timeout_mode VAR_4)
{
 if (VAR_4 == VAR_0)
  VAR_3 *= VAR_2->symbol_duration;

 return VAR_1 + FUNC_0(VAR_3 * 100);
}

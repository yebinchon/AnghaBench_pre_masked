
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct adf4371_state {int fract1; int fpfd; int mod2; unsigned int rf_div_sel; scalar_t__ fract2; scalar_t__ integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long long,int) ;

__attribute__((used)) static unsigned long long FUNC_1(struct adf4371_state *VAR_5,
             u32 VAR_6)
{
 unsigned long long VAR_7, VAR_8;
 unsigned int VAR_9;

 VAR_7 = (((u64)VAR_5->integer * VAR_4) + VAR_5->fract1) * VAR_5->fpfd;
 VAR_8 = (u64)VAR_5->fract2 * VAR_5->fpfd;
 FUNC_0(VAR_8, VAR_5->mod2);
 VAR_7 += VAR_8 + VAR_4 / 2;

 if (VAR_6 == VAR_2 || VAR_6 == VAR_3)
  VAR_9 = VAR_5->rf_div_sel;
 else
  VAR_9 = 0;

 FUNC_0(VAR_7, VAR_4 * (1 << VAR_9));

 if (VAR_6 == VAR_0)
  VAR_7 <<= 1;
 else if (VAR_6 == VAR_1)
  VAR_7 <<= 2;

 return VAR_7;
}

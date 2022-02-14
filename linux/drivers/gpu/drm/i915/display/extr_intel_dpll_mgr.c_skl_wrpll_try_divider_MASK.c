
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct skl_wrpll_context {scalar_t__ min_deviation; unsigned int p; scalar_t__ dco_freq; scalar_t__ central_freq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct skl_wrpll_context *VAR_2,
      u64 VAR_3,
      u64 VAR_4,
      unsigned int VAR_5)
{
 u64 VAR_6;

 VAR_6 = FUNC_1(10000 * FUNC_0(VAR_4, VAR_3),
         VAR_3);


 if (VAR_4 >= VAR_3) {
  if (VAR_6 < VAR_1 &&
      VAR_6 < VAR_2->min_deviation) {
   VAR_2->min_deviation = VAR_6;
   VAR_2->central_freq = VAR_3;
   VAR_2->dco_freq = VAR_4;
   VAR_2->p = VAR_5;
  }

 } else if (VAR_6 < VAR_0 &&
     VAR_6 < VAR_2->min_deviation) {
  VAR_2->min_deviation = VAR_6;
  VAR_2->central_freq = VAR_3;
  VAR_2->dco_freq = VAR_4;
  VAR_2->p = VAR_5;
 }
}

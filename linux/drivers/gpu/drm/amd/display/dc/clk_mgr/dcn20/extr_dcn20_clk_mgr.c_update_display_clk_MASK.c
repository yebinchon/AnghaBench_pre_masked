
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clk_mgr_internal {unsigned int dentist_vco_freq_khz; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct clk_mgr_internal *VAR_3, unsigned int VAR_4)
{
 int VAR_5 = VAR_2
   * VAR_3->dentist_vco_freq_khz / VAR_4;

 uint32_t VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_0,
   VAR_1, VAR_6);
}

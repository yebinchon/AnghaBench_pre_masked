
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clk_mgr_internal {unsigned int dentist_vco_freq_khz; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct clk_mgr_internal *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = VAR_1
   * VAR_4->dentist_vco_freq_khz / VAR_5;

 uint32_t VAR_7 = FUNC_2(VAR_6);

 FUNC_0(VAR_0,
   VAR_3, VAR_7);
 FUNC_1(VAR_0, VAR_2, 1, 5, 100);
}

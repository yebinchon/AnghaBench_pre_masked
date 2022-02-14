
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct repaper_epd {int factored_stage_time; } ;
typedef enum repaper_stage { ____Placeholder_repaper_stage } repaper_stage ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct repaper_epd*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct repaper_epd *VAR_0, u8 VAR_1,
           enum repaper_stage VAR_2)
{
 u64 VAR_3 = FUNC_0();
 u64 VAR_4 = VAR_3 + (VAR_0->factored_stage_time * 1000 * 1000);

 do {
  FUNC_1(VAR_0, VAR_1, VAR_2);
 } while (FUNC_0() < VAR_4);
}

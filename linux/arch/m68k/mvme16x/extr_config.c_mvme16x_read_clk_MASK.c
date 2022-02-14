
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct clocksource {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static u64 FUNC_4(struct clocksource *VAR_4)
{
 unsigned long VAR_5;
 u8 VAR_6, VAR_7;
 u32 VAR_8;

 FUNC_3(VAR_5);
 VAR_7 = FUNC_0(VAR_1) >> 4;
 VAR_8 = FUNC_1(VAR_0);
 VAR_6 = FUNC_0(VAR_1) >> 4;
 if (VAR_6 != VAR_7)
  VAR_8 = FUNC_1(VAR_0);
 VAR_8 += VAR_6 * VAR_2;
 VAR_8 += VAR_3;
 FUNC_2(VAR_5);

 return VAR_8;
}

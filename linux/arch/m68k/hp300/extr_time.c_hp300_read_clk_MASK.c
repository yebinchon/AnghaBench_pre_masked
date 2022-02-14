
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct clocksource {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static u64 FUNC_3(struct clocksource *VAR_8)
{
 unsigned long VAR_9;
 unsigned char VAR_10, VAR_11, VAR_12;
 u32 VAR_13;

 FUNC_2(VAR_9);

 VAR_11 = FUNC_0(VAR_4 + VAR_1);
again:
 if ((FUNC_0(VAR_4 + VAR_2) & VAR_3) && VAR_11 > 0)
  VAR_6 = VAR_5;
 VAR_10 = FUNC_0(VAR_4 + VAR_0);
 VAR_12 = FUNC_0(VAR_4 + VAR_1);
 if (VAR_12 != VAR_11) {
  VAR_11 = VAR_12;
  goto again;
 }

 VAR_13 = VAR_5 - ((VAR_11 << 8) | VAR_10);
 VAR_13 += VAR_6 + VAR_7;
 FUNC_1(VAR_9);

 return VAR_13;
}

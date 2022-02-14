
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct clocksource {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static u64 FUNC_5(struct clocksource *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10;
 u32 VAR_11;

 FUNC_4(VAR_10);
 FUNC_2 (0, VAR_3);
 FUNC_0 ();
 VAR_7 = FUNC_1(VAR_2) | (FUNC_1(VAR_1) << 8);
 FUNC_0 ();
 VAR_9 = FUNC_1(VAR_0);
 FUNC_0 ();
 FUNC_2 (0, VAR_3);
 FUNC_0 ();
 VAR_8 = FUNC_1(VAR_2) | (FUNC_1(VAR_1) << 8);
 VAR_11 = VAR_5 + VAR_4 - VAR_8;
 FUNC_3(VAR_10);

 if (VAR_8 < VAR_7) {




  if (VAR_9 & (1 << 5))
   VAR_11 += VAR_4;
 } else if (VAR_8 > VAR_7) {





  VAR_11 += VAR_4;
 }

 return VAR_11;
}

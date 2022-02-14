
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int x86_cache_bits; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_5(void)
{
 u8 VAR_15;

 VAR_13 = 0;
 VAR_4 = 0;
 VAR_5 = 0;
 VAR_10 = 0;
 VAR_14 = 0;
 VAR_6 = 0;
 VAR_12 = 0;
 VAR_3 = 0;

 VAR_11 = FUNC_3();
 VAR_8 = 0;
 VAR_15 = VAR_2.x86_cache_bits;
 if (VAR_2.x86_cache_bits <
     52 - VAR_9) {
  VAR_8 =
   FUNC_4(VAR_2.x86_cache_bits -
      VAR_9,
      VAR_2.x86_cache_bits - 1);
  VAR_15 -= VAR_9;
 } else
  FUNC_1(FUNC_2(VAR_1));

 VAR_7 =
  FUNC_0(VAR_15 - 1, VAR_0);
}

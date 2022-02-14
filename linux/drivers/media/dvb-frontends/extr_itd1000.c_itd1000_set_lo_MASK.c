
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct itd1000_state {int frequency; } ;
struct TYPE_3__ {int freq; int* values; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int,int) ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (struct itd1000_state*,scalar_t__) ;
 int FUNC_3 (struct itd1000_state*,int) ;
 int FUNC_4 (struct itd1000_state*,scalar_t__,int) ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static void FUNC_6(struct itd1000_state *VAR_9, u32 VAR_10)
{
 int VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 u64 VAR_15;

 VAR_13 = (VAR_10 * 1000) / 2 / VAR_0;


 VAR_15 = VAR_13 % 1000000;
 VAR_13 /= 1000000;

 VAR_15 *= 1048576;
 FUNC_1(VAR_15, 1000000);
 VAR_14 = (u32) VAR_15;

 VAR_9->frequency = ((VAR_13 * 1000) + (VAR_14 * 1000)/1048576) * 2*VAR_0;
 FUNC_5("frequency: %dkHz (wanted) %dkHz (set), PLLF = %d, PLLN = %d\n", VAR_10, VAR_9->frequency, VAR_14, VAR_13);

 FUNC_4(VAR_9, VAR_4, 0x80);
 FUNC_4(VAR_9, VAR_5, VAR_13 & 0xff);
 FUNC_4(VAR_9, VAR_1, (FUNC_2(VAR_9, VAR_1) & 0xf0) | ((VAR_14 >> 16) & 0x0f));
 FUNC_4(VAR_9, VAR_3, (VAR_14 >> 8) & 0xff);
 FUNC_4(VAR_9, VAR_2, (VAR_14 >> 0) & 0xff);

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8); VAR_11++) {
  if (VAR_10 <= VAR_8[VAR_11].freq) {
   FUNC_5("fre_values: %d\n", VAR_11);
   FUNC_4(VAR_9, VAR_7, VAR_8[VAR_11].values[0]);
   for (VAR_12 = 0; VAR_12 < 9; VAR_12++)
    FUNC_4(VAR_9, VAR_6+VAR_12, VAR_8[VAR_11].values[VAR_12+1]);
   break;
  }
 }

 FUNC_3(VAR_9, VAR_10);
}

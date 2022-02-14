
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv {unsigned long long last_berdenominator; int berscale; int last_bernumerator; scalar_t__ regoff; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct stv*,scalar_t__,int*,int) ;
 int FUNC_1 (struct stv*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct stv *VAR_3, u32 *VAR_4,
    u32 *VAR_5)
{
 u8 VAR_6[3];

 int VAR_7 = FUNC_0(VAR_3,
          VAR_1 + VAR_3->regoff,
          VAR_6, 3);

 if (VAR_7)
  return -VAR_0;

 if ((VAR_6[0] & 0x80) == 0) {
  VAR_3->last_berdenominator = 1ULL << ((VAR_3->berscale * 2) +
           10 + 3);
  VAR_3->last_bernumerator = ((u32)(VAR_6[0] & 0x7F) << 16) |
   ((u32)VAR_6[1] << 8) | VAR_6[2];
  if (VAR_3->last_bernumerator < 256 && VAR_3->berscale < 6) {
   VAR_3->berscale += 1;
   VAR_7 = FUNC_1(VAR_3, VAR_2 +
        VAR_3->regoff,
        0x20 | VAR_3->berscale);
  } else if (VAR_3->last_bernumerator > 1024 &&
      VAR_3->berscale > 2) {
   VAR_3->berscale -= 1;
   VAR_7 = FUNC_1(VAR_3, VAR_2 +
        VAR_3->regoff, 0x20 |
        VAR_3->berscale);
  }
 }
 *VAR_4 = VAR_3->last_bernumerator;
 *VAR_5 = VAR_3->last_berdenominator;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gameport*) ;
 int FUNC_1 (struct gameport*,int ) ;
 int FUNC_2 (struct gameport*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gameport *VAR_3, unsigned char VAR_4[2][VAR_0])
{
 unsigned char VAR_5, VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;
 int VAR_10[2], VAR_11[2], VAR_12[2], VAR_13, VAR_14;

 VAR_13 = FUNC_1(VAR_3, VAR_2);

 for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
  VAR_12[VAR_14] = FUNC_1(VAR_3, VAR_1);
  VAR_10[VAR_14] = VAR_11[VAR_14] = 0;
 }

 FUNC_4(VAR_9);
 FUNC_2(VAR_3);

 VAR_7 = FUNC_0(VAR_3) >> 4;

 do {
  VAR_8 = VAR_7;
  VAR_7 = FUNC_0(VAR_3) >> 4;

  for (VAR_14 = 0, VAR_6 = VAR_7, VAR_5 = VAR_8; VAR_14 < 2; VAR_14++, VAR_6 >>= 2, VAR_5 >>= 2) {
   if (~VAR_6 & VAR_5 & 2) {
    if (VAR_12[VAR_14] <= 0 || VAR_10[VAR_14] >= VAR_0) continue;
    VAR_12[VAR_14] = VAR_13;
    if (VAR_11[VAR_14] == 0) {
     if (~VAR_6 & 1) VAR_12[VAR_14] = 0;
     VAR_4[VAR_14][VAR_10[VAR_14]] = 0; VAR_11[VAR_14]++; continue;
    }
    if (VAR_11[VAR_14] == 9) {
     if (VAR_6 & 1) VAR_12[VAR_14] = 0;
     VAR_11[VAR_14] = 0; VAR_10[VAR_14]++; continue;
    }
    VAR_4[VAR_14][VAR_10[VAR_14]] |= (~VAR_6 & 1) << (VAR_11[VAR_14]++ - 1);
   }
   VAR_12[VAR_14]--;
  }
 } while (VAR_12[0] > 0 || VAR_12[1] > 0);

 FUNC_3(VAR_9);

 return (VAR_10[0] == VAR_0) | ((VAR_10[1] == VAR_0) << 1);
}

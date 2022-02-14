
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fingerprint {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct fingerprint*,struct fingerprint*) ;

__attribute__((used)) static int FUNC_2(struct fingerprint *VAR_1,
        struct fingerprint *VAR_2, int VAR_3,
        int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 int VAR_8 = 10;
 int VAR_9 = -1;

 for (VAR_7 = VAR_4; VAR_7 < VAR_4 + VAR_5; VAR_7++) {
  VAR_6 = FUNC_1(&VAR_2[VAR_3], &VAR_1[VAR_7]);
  if (VAR_6 < VAR_8)
   continue;

  if (VAR_6 == VAR_8 && VAR_9 != -1 &&
      FUNC_0(VAR_9 - VAR_3) < FUNC_0(VAR_7 - VAR_3))
   continue;
  VAR_8 = VAR_6;
  VAR_9 = VAR_7;
 }
 return VAR_9;
}

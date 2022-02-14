
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, bool VAR_1, int VAR_2,
  int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;







 if (VAR_1) {
  VAR_7 = VAR_2 + VAR_3 + FUNC_0(VAR_2, 2) + 1;
 } else {
  int VAR_8, VAR_9;
  VAR_8 = VAR_5 + VAR_2 + VAR_3 + FUNC_0(VAR_2, 2) + 1;
  VAR_9 = VAR_5 + VAR_2 + VAR_4 + VAR_6 + VAR_5 +
    VAR_2 + 1;
  VAR_7 = FUNC_0(VAR_8, VAR_9);
 }

 return VAR_0 > VAR_7 ? VAR_0 - VAR_7 : 0;
}

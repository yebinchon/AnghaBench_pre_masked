
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0 (int VAR_0, int VAR_1, int *VAR_2, int *VAR_3)
{
 unsigned int VAR_4, VAR_5;

 VAR_5 = (VAR_0 % VAR_1) << 8;
 VAR_4 = (VAR_5 / VAR_1);

 if (VAR_2)
  *VAR_2 = VAR_4;

 if (VAR_3) {
  VAR_5 = (VAR_5 % VAR_1) << 8;
  VAR_4 = (VAR_4 << 8) | (VAR_5 / VAR_1);
  VAR_5 = (VAR_5 % VAR_1) << 8;
  *VAR_3 = (VAR_4 << 8) | (VAR_5 / VAR_1);
 }
}

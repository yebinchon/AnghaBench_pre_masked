
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;



__attribute__((used)) static u64 FUNC_0(u64 *VAR_0, const u64 *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3)
{
 u64 VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  u64 VAR_6 = VAR_1[VAR_5];

  VAR_0[VAR_5] = (VAR_6 << VAR_2) | VAR_4;
  VAR_4 = VAR_6 >> (64 - VAR_2);
 }

 return VAR_4;
}

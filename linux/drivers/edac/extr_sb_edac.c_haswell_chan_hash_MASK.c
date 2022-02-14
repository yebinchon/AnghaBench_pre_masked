
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static int FUNC_0(int VAR_0, u64 VAR_1)
{
 int VAR_2;





 for (VAR_2 = 12; VAR_2 < 28; VAR_2 += 2)
  VAR_0 ^= (VAR_1 >> VAR_2) & 3;

 return VAR_0;
}

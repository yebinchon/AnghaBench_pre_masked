
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;



__attribute__((used)) static int FUNC_0(u64 VAR_0, int VAR_1, u8 *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_4 |= ((VAR_0 >> VAR_2[VAR_3]) & 1) << VAR_3;
 return VAR_4;
}

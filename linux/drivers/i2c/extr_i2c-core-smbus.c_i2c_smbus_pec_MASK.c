
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;

__attribute__((used)) static u8 FUNC_1(u8 VAR_0, u8 *VAR_1, size_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_0 = FUNC_0((VAR_0 ^ VAR_1[VAR_3]) << 8);
 return VAR_0;
}

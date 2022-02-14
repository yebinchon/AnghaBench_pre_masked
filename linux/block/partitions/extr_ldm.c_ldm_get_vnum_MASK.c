
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static u64 FUNC_2 (const u8 *VAR_0)
{
 u64 VAR_1 = 0;
 u8 VAR_2;

 FUNC_0 (!VAR_0);

 VAR_2 = *VAR_0++;

 if (VAR_2 && VAR_2 <= 8)
  while (VAR_2--)
   VAR_1 = (VAR_1 << 8) | *VAR_0++;
 else
  FUNC_1 ("Illegal length %d.", VAR_2);

 return VAR_1;
}

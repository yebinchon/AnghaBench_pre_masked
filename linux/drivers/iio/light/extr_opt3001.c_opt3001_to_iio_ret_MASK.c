
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct opt3001 {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct opt3001 *VAR_0, u8 VAR_1,
  u16 VAR_2, int *VAR_3, int *VAR_4)
{
 int VAR_5;

 VAR_5 = 10 * (VAR_2 << VAR_1);
 *VAR_3 = VAR_5 / 1000;
 *VAR_4 = (VAR_5 - (*VAR_3 * 1000)) * 1000;
}

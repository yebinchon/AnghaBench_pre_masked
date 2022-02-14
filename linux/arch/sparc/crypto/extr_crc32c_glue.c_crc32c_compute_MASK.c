
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int ,unsigned char const*,unsigned int) ;
 int FUNC_1 (int *,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_2(u32 *VAR_0, const u64 *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = VAR_2 & ~7U;
 if (VAR_3) {
  FUNC_1(VAR_0, VAR_1, VAR_3);
  VAR_1 += VAR_3 / 8;
  VAR_2 -= VAR_3;
 }
 if (VAR_2)
  *VAR_0 = FUNC_0(*VAR_0, (const unsigned char *) VAR_1, VAR_2);
}

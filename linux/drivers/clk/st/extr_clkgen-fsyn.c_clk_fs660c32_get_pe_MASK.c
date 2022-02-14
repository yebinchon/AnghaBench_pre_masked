
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct stm_fs {unsigned long mdiv; unsigned long pe; int sdiv; int nsdiv; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (long,struct stm_fs*,unsigned long*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2, unsigned long *VAR_3,
  signed long VAR_4, unsigned long VAR_5, uint64_t *VAR_6,
  struct stm_fs *VAR_7)
{
 unsigned long VAR_8, VAR_9;
 struct stm_fs VAR_10;
 uint64_t VAR_11;

 VAR_11 = (uint64_t)VAR_5 << VAR_2;

 *VAR_6 = (uint64_t)VAR_4 * VAR_0 - (32LL + (uint64_t)VAR_1) * VAR_11 * (VAR_0 / 32LL);

 *VAR_6 = FUNC_2(*VAR_6, VAR_11);

 if (*VAR_6 > 32767LL)
  return 1;

 VAR_10.mdiv = (unsigned long) VAR_1;
 VAR_10.pe = (unsigned long)*VAR_6;
 VAR_10.sdiv = VAR_2;
 VAR_10.nsdiv = 1;

 FUNC_1(VAR_4, &VAR_10, &VAR_8);

 VAR_9 = FUNC_0(VAR_5 - VAR_8);

 if (VAR_9 < *VAR_3) {
  VAR_7->mdiv = VAR_1;
  VAR_7->pe = (unsigned long)*VAR_6;
  VAR_7->sdiv = VAR_2;
  VAR_7->nsdiv = 1;
  *VAR_3 = VAR_9;
 }
 return 0;
}

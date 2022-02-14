
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (char*,int,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(uint32_t VAR_2, unsigned int VAR_3)
{
 uint64_t VAR_4 = (uint64_t)VAR_3 *VAR_2;
 unsigned long VAR_5;
 int VAR_6 = 0;

 VAR_5 = (unsigned long)(VAR_4 >> VAR_1);
 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_1(VAR_5) + 1;
 VAR_6 -= !(VAR_4 - (1ULL << (VAR_6 + VAR_1 - 1)));

 if (VAR_6 < 0)
  VAR_6 = 0;

out:
 FUNC_0("W = %d, L = %d, I = %d\n", VAR_0/VAR_2, VAR_3, VAR_6);
 return VAR_6;
}

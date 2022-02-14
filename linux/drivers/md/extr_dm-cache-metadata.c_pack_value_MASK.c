
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int dm_oblock_t ;
typedef int __le64 ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static __le64 FUNC_2(dm_oblock_t VAR_1, unsigned VAR_2)
{
 uint64_t VAR_3 = FUNC_1(VAR_1);
 VAR_3 <<= 16;
 VAR_3 = VAR_3 | (VAR_2 & VAR_0);
 return FUNC_0(VAR_3);
}

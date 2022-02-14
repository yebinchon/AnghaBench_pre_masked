
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int __le64 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned FUNC_1(void *VAR_2, unsigned VAR_3)
{
 __le64 *VAR_4 = VAR_2;
 __le64 *VAR_5 = VAR_4 + (VAR_3 >> VAR_0);

 uint64_t VAR_6 = FUNC_0(*VAR_5);
 uint64_t VAR_7 = (VAR_6 + VAR_1 + 1) & VAR_1;

 return !(~VAR_6 & VAR_7);
}

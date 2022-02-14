
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __le64 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,void*) ;

__attribute__((used)) static unsigned FUNC_1(void *VAR_2, unsigned VAR_3)
{
 __le64 *VAR_4 = VAR_2;
 __le64 *VAR_5 = VAR_4 + (VAR_3 >> VAR_1);
 unsigned VAR_6, VAR_7;

 VAR_3 = (VAR_3 & (VAR_0 - 1)) << 1;
 VAR_6 = !!FUNC_0(VAR_3, (void *) VAR_5);
 VAR_7 = !!FUNC_0(VAR_3 + 1, (void *) VAR_5);
 return (VAR_6 << 1) | VAR_7;
}

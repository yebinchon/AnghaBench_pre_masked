
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __le64 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,void*) ;
 int FUNC_1 (unsigned int,void*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 __le64 *VAR_5 = VAR_2;
 __le64 *VAR_6 = VAR_5 + (VAR_3 >> VAR_1);

 VAR_3 = (VAR_3 & (VAR_0 - 1)) << 1;

 if (VAR_4 & 2)
  FUNC_1(VAR_3, (void *) VAR_6);
 else
  FUNC_0(VAR_3, (void *) VAR_6);

 if (VAR_4 & 1)
  FUNC_1(VAR_3 + 1, (void *) VAR_6);
 else
  FUNC_0(VAR_3 + 1, (void *) VAR_6);
}

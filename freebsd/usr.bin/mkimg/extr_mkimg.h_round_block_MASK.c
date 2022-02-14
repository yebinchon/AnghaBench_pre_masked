
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lba_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline lba_t
FUNC_0(lba_t VAR_2)
{
 lba_t VAR_3 = VAR_0 / VAR_1;
 return ((VAR_2 + VAR_3 - 1) & ~(VAR_3 - 1));
}

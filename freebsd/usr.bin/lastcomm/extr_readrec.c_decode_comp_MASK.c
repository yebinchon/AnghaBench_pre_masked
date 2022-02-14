
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int comp_t ;


 double VAR_0 ;

__attribute__((used)) static float
FUNC_0(comp_t VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = VAR_1 & 017777;
 for (VAR_3 = VAR_1 >> 13; VAR_3; VAR_3--)
  VAR_2 <<= 3;
 return ((double)VAR_2 / VAR_0);
}

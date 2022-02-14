
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct convtbl {int dummy; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct convtbl* VAR_4 ;

__attribute__((used)) static
struct convtbl *
FUNC_0(const uintmax_t VAR_5, const int VAR_6)
{
 uintmax_t VAR_7;
 int VAR_8;


 VAR_8 = VAR_6 < VAR_1 ? VAR_6 : VAR_1;

 if (VAR_8 == VAR_1)






  for (VAR_7 = VAR_5, VAR_8 = VAR_3;
       VAR_7 >= VAR_0 && VAR_8 < VAR_2 - 1;
       VAR_7 >>= 10, VAR_8++);

 return (&VAR_4[VAR_8]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
struct convtbl {double mul; double scale; } ;


 struct convtbl* FUNC_0 (scalar_t__ const,int const) ;

double
FUNC_1(const uintmax_t VAR_0, const int VAR_1)
{
 struct convtbl *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 return ((double)VAR_0 * VAR_2->mul / VAR_2->scale);

}

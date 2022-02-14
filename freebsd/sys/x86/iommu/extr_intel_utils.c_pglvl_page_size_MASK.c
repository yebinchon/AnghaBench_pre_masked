
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dmar_gaddr_t ;




 int FUNC_0 (int,char*) ;
 int FUNC_1 (int const*) ;

dmar_gaddr_t
FUNC_2(int VAR_0, int VAR_1)
{
 int VAR_2;
 static const dmar_gaddr_t VAR_3[] = {
  (dmar_gaddr_t)128,
  (dmar_gaddr_t)128 << 129,
  (dmar_gaddr_t)128 << (2 * 129),
  (dmar_gaddr_t)128 << (3 * 129),
  (dmar_gaddr_t)128 << (4 * 129),
  (dmar_gaddr_t)128 << (5 * 129)
 };

 FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0,
     ("total %d lvl %d", VAR_0, VAR_1));
 VAR_2 = VAR_0 - VAR_1 - 1;
 FUNC_0(VAR_2 < FUNC_1(VAR_3), ("sizeof pg_sz lvl %d", VAR_1));
 return (VAR_3[VAR_2]);
}

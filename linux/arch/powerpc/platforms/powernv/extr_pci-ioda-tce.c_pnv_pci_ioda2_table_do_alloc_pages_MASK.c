
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int,unsigned int) ;

__attribute__((used)) static __be64 *FUNC_3(int VAR_2, unsigned int VAR_3,
  unsigned int VAR_4, unsigned long VAR_5,
  unsigned long *VAR_6, unsigned long *VAR_7)
{
 __be64 *VAR_8, *VAR_9;
 unsigned long VAR_10 = 1UL << VAR_3;
 unsigned int VAR_11 = 1UL << (VAR_3 - 3);
 long VAR_12;

 VAR_8 = FUNC_2(VAR_2, VAR_3);
 *VAR_7 += VAR_10;

 --VAR_4;
 if (!VAR_4) {
  *VAR_6 += VAR_10;
  return VAR_8;
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12) {
  VAR_9 = FUNC_3(VAR_2, VAR_3,
    VAR_4, VAR_5, VAR_6, VAR_7);
  if (!VAR_9)
   break;

  VAR_8[VAR_12] = FUNC_1(FUNC_0(VAR_9) |
    VAR_0 | VAR_1);

  if (*VAR_6 >= VAR_5)
   break;
 }

 return VAR_8;
}

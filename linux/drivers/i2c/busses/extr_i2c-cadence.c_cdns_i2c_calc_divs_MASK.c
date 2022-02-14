
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int FUNC_0 (unsigned long,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(unsigned long *VAR_3, unsigned long VAR_4,
  unsigned int *VAR_5, unsigned int *VAR_6)
{
 unsigned long VAR_7 = *VAR_3, VAR_8 = *VAR_3, VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13 = 0, VAR_14 = 0;
 unsigned int VAR_15, VAR_16;


 VAR_10 = VAR_4 / (22 * VAR_7);





 if (!VAR_10 || (VAR_10 > (VAR_0 * VAR_1)))
  return -VAR_2;

 VAR_15 = -1;
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_12 = FUNC_0(VAR_4, 22 * VAR_7 * (VAR_11 + 1));

  if ((VAR_12 < 1) || (VAR_12 > VAR_1))
   continue;
  VAR_12--;

  VAR_9 = VAR_4 / (22 * (VAR_11 + 1) * (VAR_12 + 1));

  if (VAR_9 > VAR_7)
   continue;

  VAR_16 = ((VAR_9 > VAR_7) ? (VAR_9 - VAR_7) :
       (VAR_7 - VAR_9));

  if (VAR_15 > VAR_16) {
   VAR_13 = VAR_11;
   VAR_14 = VAR_12;
   VAR_8 = VAR_9;
   VAR_15 = VAR_16;
  }
 }

 *VAR_5 = VAR_13;
 *VAR_6 = VAR_14;
 *VAR_3 = VAR_8;

 return 0;
}

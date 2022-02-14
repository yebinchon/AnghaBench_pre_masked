
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static inline int FUNC_0(u64 VAR_3[], int VAR_4,
    unsigned long VAR_5, unsigned long VAR_6)
{
 int VAR_7 = VAR_4;
 unsigned long VAR_8 = VAR_5, VAR_9;

 do {
  VAR_9 = VAR_6 > VAR_8 ? VAR_6 - VAR_8 : 0;

  VAR_3[VAR_7] = VAR_8 & VAR_1;




  if (VAR_9 >= VAR_0) {
   VAR_3[VAR_7] |= ~VAR_1;
   VAR_8 += VAR_0;
  } else if (VAR_9) {
   VAR_3[VAR_7] |= (VAR_9 - 1) >> VAR_2;
   VAR_8 = VAR_6;
  }

  VAR_7++;

 } while (VAR_8 < VAR_6);

 return VAR_7 - VAR_4;
}

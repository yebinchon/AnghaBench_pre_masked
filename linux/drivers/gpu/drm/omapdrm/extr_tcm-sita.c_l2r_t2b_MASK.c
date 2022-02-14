
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u16 ;
typedef unsigned long s16 ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (unsigned long*,int ,size_t) ;
 unsigned long FUNC_2 (unsigned long*,size_t,unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long*,unsigned long*,unsigned long) ;
 int FUNC_4 (unsigned long*,unsigned long,unsigned long) ;
 unsigned long* VAR_3 ;

__attribute__((used)) static int FUNC_5(u16 VAR_4, u16 VAR_5, u16 VAR_6, s16 VAR_7,
  unsigned long *VAR_8, unsigned long VAR_9,
  unsigned long *VAR_10, size_t VAR_11, size_t VAR_12)
{
 int VAR_13;
 unsigned long VAR_14;
 bool VAR_15 = 0;
 unsigned long VAR_16 = VAR_2 / VAR_9;
 unsigned long VAR_17 = (VAR_7 > 0) ? VAR_7 / VAR_9 : 0;
 unsigned long VAR_18 = VAR_17;



 VAR_6 = (VAR_7 > 0) ? 0 : VAR_6 - 1;



 while (VAR_18 < VAR_11) {
  *VAR_8 = FUNC_2(VAR_10, VAR_11, VAR_18, VAR_4,
    VAR_6);


  if (VAR_17 > 0 && (*VAR_8 % VAR_16 != VAR_17)) {
   VAR_18 = FUNC_0(*VAR_8, VAR_16) + VAR_17;
   continue;
  }


  if ((*VAR_8 % VAR_12) + VAR_4 > VAR_12) {
   VAR_18 = FUNC_0(*VAR_8, VAR_12) + VAR_17;
   continue;
  }




  if ((*VAR_8 + VAR_12 * VAR_5) > VAR_11)
   break;


  FUNC_1(VAR_3, 0, VAR_12);
  FUNC_4(VAR_3, (*VAR_8 % VAR_0), VAR_4);


  VAR_15 = 1;


  for (VAR_13 = 1; VAR_13 < VAR_5; VAR_13++) {
   VAR_14 = *VAR_8 / VAR_0 + VAR_13 * 8;
   if (FUNC_3(&VAR_10[VAR_14], VAR_3,
    (*VAR_8 % VAR_0) + VAR_4)) {
    VAR_15 = 0;
    break;
   }
  }

  if (VAR_15)
   break;


  if (VAR_17 > 0)
   VAR_18 = FUNC_0(*VAR_8, VAR_16) + VAR_17;
  else
   VAR_18 = *VAR_8 + VAR_6 + 1;
 }

 if (VAR_15) {

  for (VAR_13 = 0, VAR_14 = *VAR_8; VAR_13 < VAR_5; VAR_13++, VAR_14 += VAR_12)
   FUNC_4(VAR_10, VAR_14, VAR_4);
 }

 return (VAR_15) ? 0 : -VAR_1;
}

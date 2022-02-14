
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint64_t ;
typedef long off_t ;
typedef long lba_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (long,char*,size_t,long,int) ;
 int FUNC_4 (long) ;
 int FUNC_5 (long,int,long*) ;
 void* FUNC_6 (int,long,size_t,long*) ;
 int FUNC_7 (void*,size_t) ;
 long VAR_4 ;
 long FUNC_8 (int,long,int ) ;
 long VAR_5 ;

__attribute__((used)) static int
FUNC_9(lba_t VAR_6, int VAR_7, uint64_t *VAR_8)
{
 off_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 void *VAR_15;
 char *VAR_16;
 uint64_t VAR_17;
 size_t VAR_18, VAR_19;
 int VAR_20;






 VAR_11 = FUNC_8(VAR_7, 0L, VAR_1);
 if (VAR_11 == -1L)
  return (FUNC_5(VAR_6, VAR_7, VAR_8));






 VAR_7 = FUNC_2(VAR_7);
 if (VAR_7 == -1)
  return (VAR_3);

 VAR_18 = VAR_5 * VAR_4;

 VAR_17 = 0;
 VAR_9 = VAR_13 = 0;
 VAR_20 = 0;
 while (!VAR_20 && VAR_9 < VAR_11) {
  VAR_12 = FUNC_8(VAR_7, VAR_9, VAR_2);
  if (VAR_12 == -1)
   VAR_12 = VAR_11;
  VAR_10 = FUNC_8(VAR_7, VAR_9, VAR_0);
  if (VAR_10 == -1)
   VAR_10 = VAR_11;





  if (VAR_12 == VAR_11 && VAR_10 == VAR_11)
   VAR_10 = VAR_9;

  if (VAR_9 == VAR_12 && VAR_10 > VAR_12) {
   VAR_12 = VAR_13;
   VAR_13 = VAR_10 & ~((uint64_t)VAR_5 - 1);

   VAR_6 += (VAR_13 - VAR_12) / VAR_5;
   VAR_20 = FUNC_4(VAR_6);

   VAR_17 += VAR_13 - VAR_12;
   VAR_9 = VAR_10;
  } else if (VAR_9 == VAR_10 && VAR_12 > VAR_10) {
   VAR_10 = VAR_13;
   VAR_13 = (VAR_12 + VAR_5 - 1) & ~((uint64_t)VAR_5 - 1);

   while (VAR_10 < VAR_13) {
    VAR_19 = (VAR_13 - VAR_10 > (off_t)VAR_18)
        ? VAR_18 : (size_t)(VAR_13 - VAR_10);

    VAR_16 = VAR_15 = FUNC_6(VAR_7, VAR_10, VAR_19, &VAR_14);
    if (VAR_15 != ((void*)0)) {
     VAR_16 += VAR_14;
     VAR_20 = FUNC_3(VAR_6, VAR_16,
         VAR_19, VAR_10, VAR_7);
     FUNC_7(VAR_15, VAR_19);
    } else
     VAR_20 = VAR_3;

    VAR_6 += VAR_19 / VAR_5;
    VAR_17 += VAR_19;
    VAR_10 += VAR_19;
   }
   VAR_9 = VAR_12;
  } else {




   FUNC_0(0);
  }
 }
 if (VAR_20)
  FUNC_1(VAR_7);
 if (!VAR_20 && VAR_8 != ((void*)0))
  *VAR_8 = VAR_17;
 return (VAR_20);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t off_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 size_t VAR_7 ;
 void* FUNC_1 (int *,size_t,int,int,int,size_t) ;
 size_t VAR_8 ;

__attribute__((used)) static void *
FUNC_2(int VAR_9, off_t VAR_10, size_t VAR_11, off_t *VAR_12)
{
 void *VAR_13;
 size_t VAR_14;
 int VAR_15, VAR_16;
 off_t VAR_17;


 if ((VAR_17 = (VAR_10 % VAR_7)) != 0) {
     VAR_10 -= VAR_17;
     VAR_11 += VAR_17;
     *VAR_12 = VAR_17;
 } else
     *VAR_12 = 0;
 VAR_14 = (VAR_8 > VAR_7) ? VAR_8 : VAR_7;
 FUNC_0((VAR_14 & (VAR_14 - 1)) == 0);

 VAR_15 = VAR_1 | VAR_2 | VAR_3;

 VAR_16 = VAR_4 | ((VAR_9 == VAR_6) ? VAR_5 : 0);
 VAR_11 = (VAR_11 + VAR_14 - 1) & ~(VAR_14 - 1);
 VAR_13 = FUNC_1(((void*)0), VAR_11, VAR_16, VAR_15, VAR_9, VAR_10);
 return ((VAR_13 == VAR_0) ? ((void*)0) : VAR_13);
}

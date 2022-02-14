
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*,char*,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 char* VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static long FUNC_2(void *VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6 = VAR_0 + VAR_5;
 unsigned long VAR_7 = VAR_5;
 unsigned long VAR_8 = 0;
 char *VAR_9 = VAR_4;
 char *VAR_10;





 if (VAR_0 >= VAR_1)
  return -1;


 if (VAR_6 <= VAR_3) {
  VAR_0 += VAR_5;
  return VAR_5;
 }


 if (VAR_0 < VAR_3 && VAR_6 > VAR_3) {
  VAR_8 = VAR_3 - VAR_0;

  VAR_9 += VAR_8;
  VAR_7 -= VAR_8;
  VAR_0 += VAR_8;
 }

 VAR_10 = &VAR_2[VAR_0 - VAR_3];
 VAR_7 = FUNC_1(VAR_0 + VAR_7, VAR_1) - VAR_0;

 FUNC_0(VAR_10, VAR_9, VAR_7);
 VAR_0 += VAR_7;

 return VAR_5;
}

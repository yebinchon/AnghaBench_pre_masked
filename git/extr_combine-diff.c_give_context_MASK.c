
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sline {unsigned long flag; } ;


 unsigned long FUNC_0 (struct sline*,unsigned long,unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 (struct sline*,unsigned long,unsigned long,unsigned long,int) ;

__attribute__((used)) static int FUNC_2(struct sline *VAR_1, unsigned long VAR_2, int VAR_3)
{
 unsigned long VAR_4 = (1UL<<VAR_3) - 1;
 unsigned long VAR_5 = (1UL<<VAR_3);
 unsigned long VAR_6 = (2UL<<VAR_3);
 unsigned long VAR_7;
 VAR_7 = FUNC_1(VAR_1, VAR_5, 0, VAR_2, 0);
 if (VAR_2 < VAR_7)
  return 0;

 while (VAR_7 <= VAR_2) {
  unsigned long VAR_8 = (VAR_0 < VAR_7) ? (VAR_7 - VAR_0) : 0;
  unsigned long VAR_9;


  while (VAR_8 < VAR_7) {
   if (!(VAR_1[VAR_8].flag & VAR_5))
    VAR_1[VAR_8].flag |= VAR_6;
   VAR_1[VAR_8++].flag |= VAR_5;
  }

 again:



  VAR_8 = FUNC_1(VAR_1, VAR_5, VAR_7, VAR_2, 1);
  if (VAR_2 < VAR_8)
   break;


  VAR_9 = FUNC_1(VAR_1, VAR_5, VAR_8, VAR_2, 0);
  VAR_8 = FUNC_0(VAR_1, VAR_4, VAR_7, VAR_8);

  if (VAR_9 < VAR_8 + VAR_0) {



   while (VAR_8 < VAR_9)
    VAR_1[VAR_8++].flag |= VAR_5;
   VAR_7 = VAR_9;
   goto again;
  }





  VAR_7 = VAR_9;
  VAR_9 = (VAR_8 + VAR_0 < VAR_2+1) ? VAR_8 + VAR_0 : VAR_2+1;
  while (VAR_8 < VAR_9)
   VAR_1[VAR_8++].flag |= VAR_5;
 }
 return 1;
}

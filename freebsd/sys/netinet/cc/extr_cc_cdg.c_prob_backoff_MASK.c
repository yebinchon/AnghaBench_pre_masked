
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 () ;

__attribute__((used)) static inline int
FUNC_1(long VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = (VAR_6 > ((VAR_3 * VAR_4) << VAR_0));

 if (!VAR_7) {
  if (VAR_4 > 1)
   VAR_8 = (VAR_6 + VAR_4 / 2) /
       VAR_4;
  else
   VAR_8 = VAR_6;


  VAR_9 = (VAR_2 / (1 << VAR_1)) * VAR_5[VAR_8];
  VAR_7 = (FUNC_0() < VAR_9);
 }

 return (VAR_7);
}

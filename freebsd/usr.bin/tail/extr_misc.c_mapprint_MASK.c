
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapinfo {scalar_t__ mapoff; scalar_t__ maplen; scalar_t__ start; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct mapinfo*,scalar_t__) ;

int
FUNC_2(struct mapinfo *VAR_0, off_t VAR_1, off_t VAR_2)
{
 int VAR_3;

 while (VAR_2 > 0) {
  if (VAR_1 < VAR_0->mapoff || VAR_1 >= VAR_0->mapoff +
      (off_t)VAR_0->maplen) {
   if (FUNC_1(VAR_0, VAR_1) != 0)
    return (1);
  }
  VAR_3 = (VAR_0->mapoff + VAR_0->maplen) - VAR_1;
  if (VAR_3 > VAR_2)
   VAR_3 = VAR_2;
  FUNC_0(VAR_0->start + (VAR_1 - VAR_0->mapoff), VAR_3);
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;
 }
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chunk {scalar_t__ ch_type; scalar_t__ ch_block; int ch_size; } ;
typedef scalar_t__ lba_t ;


 scalar_t__ VAR_0 ;
 struct chunk* FUNC_0 (scalar_t__) ;
 int VAR_1 ;

int
FUNC_1(lba_t VAR_2, lba_t VAR_3)
{
 struct chunk *VAR_4;
 lba_t VAR_5;

 while (1) {
  VAR_4 = FUNC_0(VAR_2);
  if (VAR_4 == ((void*)0))
   return (0);
  if (VAR_4->ch_type != VAR_0)
   return (1);
  VAR_5 = VAR_4->ch_block + (VAR_4->ch_size / VAR_1);
  if (VAR_5 >= VAR_2 + VAR_3)
   return (0);
  VAR_3 -= VAR_5 - VAR_2;
  VAR_2 = VAR_5;
 }

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chunk {size_t ch_size; } ;


 void* VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static size_t
FUNC_1(struct chunk *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4;

 VAR_4 = VAR_1->ch_size + VAR_2;
 if (VAR_4 > VAR_1->ch_size) {
  VAR_1->ch_size = VAR_4;
  return (0);
 }

 VAR_3 = VAR_0 - VAR_1->ch_size;
 FUNC_0(VAR_3 < VAR_2);
 VAR_1->ch_size = VAR_0;
 return (VAR_2 - VAR_3);
}

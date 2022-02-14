
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; unsigned int* ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(
 git_buf *VAR_2,
 const char *VAR_3,
 size_t VAR_4,
 size_t VAR_5)
{
 size_t VAR_6 = VAR_2->size, VAR_7;

 if (VAR_4 % 5 ||
  VAR_5 > VAR_4 * 4 / 5) {
  FUNC_2(VAR_0, "invalid base85 input");
  return -1;
 }

 FUNC_1(&VAR_7, VAR_5, VAR_2->size);
 FUNC_1(&VAR_7, VAR_7, 1);
 FUNC_0(VAR_2, VAR_7);

 while (VAR_5) {
  unsigned VAR_8 = 0;
  int VAR_9, VAR_10 = 4;
  unsigned char VAR_11;
  do {
   VAR_11 = *VAR_3++;
   VAR_9 = VAR_1[VAR_11];
   if (--VAR_9 < 0)
    goto on_error;

   VAR_8 = VAR_8 * 85 + VAR_9;
  } while (--VAR_10);
  VAR_11 = *VAR_3++;
  VAR_9 = VAR_1[VAR_11];
  if (--VAR_9 < 0)
   goto on_error;


  if (0xffffffff / 85 < VAR_8 ||
   0xffffffff - VAR_9 < (VAR_8 *= 85))
   goto on_error;

  VAR_8 += VAR_9;

  VAR_10 = (VAR_5 < 4) ? (int)VAR_5 : 4;
  VAR_5 -= VAR_10;
  do {
   VAR_8 = (VAR_8 << 8) | (VAR_8 >> 24);
   VAR_2->ptr[VAR_2->size++] = VAR_8;
  } while (--VAR_10);
 }

 VAR_2->ptr[VAR_2->size] = 0;

 return 0;

on_error:
 VAR_2->size = VAR_6;
 VAR_2->ptr[VAR_2->size] = '\0';

 FUNC_2(VAR_0, "invalid base85 input");
 return -1;
}

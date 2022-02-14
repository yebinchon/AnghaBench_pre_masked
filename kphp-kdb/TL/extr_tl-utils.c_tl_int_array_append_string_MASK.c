
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_int_array {int pos; int size; int* buff; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

int FUNC_3 (struct tl_int_array *VAR_0, char *VAR_1) {
  int VAR_2 = FUNC_2 (VAR_1);
  if (VAR_2 >= 0x1000000) {
    return -1;
  }
  int VAR_3 = VAR_2 + ((VAR_2 < 0xfe) ? 1 : 4);
  VAR_3 = (VAR_3 + 3) >> 2;
  if (VAR_0->pos + VAR_3 > VAR_0->size) {
    return -1;
  }
  char *VAR_4 = (char *) &VAR_0->buff[VAR_0->pos];
  if (VAR_2 < 0xfe) {
    *VAR_4++ = VAR_2;
  } else {
    VAR_0->buff[VAR_0->pos] = (VAR_2 << 8) + 0xfe;
    VAR_4 += 4;
  }
  FUNC_1 (VAR_4, VAR_1, VAR_2);
  VAR_4 += VAR_2;
  while ((long) VAR_4 & 3) {
    *VAR_4++ = 0;
  }
  VAR_0->pos += VAR_3;
  FUNC_0 ((void *) VAR_4 == (void *) &VAR_0->buff[VAR_0->pos]);
  return 0;
}

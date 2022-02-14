
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int FUNC_2 (size_t*,size_t,int) ;
 char* VAR_0 ;

int FUNC_3(git_buf *VAR_1, const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = (VAR_3 / 4) + !!(VAR_3 % 4), VAR_5;

 FUNC_2(&VAR_5, VAR_4, 5);
 FUNC_1(&VAR_5, VAR_5, VAR_1->size);
 FUNC_1(&VAR_5, VAR_5, 1);

 FUNC_0(VAR_1, VAR_5);

 while (VAR_3) {
  uint32_t VAR_6 = 0;
  char VAR_7[5];
  int VAR_8;

  for (VAR_8 = 24; VAR_8 >= 0; VAR_8 -= 8) {
   uint8_t VAR_9 = *VAR_2++;
   VAR_6 |= VAR_9 << VAR_8;

   if (--VAR_3 == 0)
    break;
  }

  for (VAR_8 = 4; VAR_8 >= 0; VAR_8--) {
   int VAR_10 = VAR_6 % 85;
   VAR_6 /= 85;

   VAR_7[VAR_8] = VAR_0[VAR_10];
  }

  for (VAR_8 = 0; VAR_8 < 5; VAR_8++)
   VAR_1->ptr[VAR_1->size++] = VAR_7[VAR_8];
 }

 VAR_1->ptr[VAR_1->size] = '\0';

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_4__ {size_t size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int* VAR_1 ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(git_buf *VAR_2, const char *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 int8_t VAR_6, VAR_7, VAR_8, VAR_9;
 size_t VAR_10 = VAR_2->size, VAR_11;

 if (VAR_4 % 4) {
  FUNC_3(VAR_0, "invalid base64 input");
  return -1;
 }

 FUNC_2(VAR_4 % 4 == 0);
 FUNC_1(&VAR_11, (VAR_4 / 4 * 3), VAR_2->size);
 FUNC_1(&VAR_11, VAR_11, 1);
 FUNC_0(VAR_2, VAR_11);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += 4) {
  if ((VAR_6 = VAR_1[(unsigned char)VAR_3[VAR_5]]) < 0 ||
   (VAR_7 = VAR_1[(unsigned char)VAR_3[VAR_5+1]]) < 0 ||
   (VAR_8 = VAR_1[(unsigned char)VAR_3[VAR_5+2]]) < 0 ||
   (VAR_9 = VAR_1[(unsigned char)VAR_3[VAR_5+3]]) < 0) {
   VAR_2->size = VAR_10;
   VAR_2->ptr[VAR_2->size] = '\0';

   FUNC_3(VAR_0, "invalid base64 input");
   return -1;
  }

  VAR_2->ptr[VAR_2->size++] = ((VAR_6 << 2) | (VAR_7 & 0x30) >> 4);
  VAR_2->ptr[VAR_2->size++] = ((VAR_7 & 0x0f) << 4) | ((VAR_8 & 0x3c) >> 2);
  VAR_2->ptr[VAR_2->size++] = (VAR_8 & 0x03) << 6 | (VAR_9 & 0x3f);
 }

 VAR_2->ptr[VAR_2->size] = '\0';
 return 0;
}

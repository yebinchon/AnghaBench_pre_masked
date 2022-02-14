
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int FUNC_2 (size_t*,size_t,int) ;
 char* VAR_0 ;

int FUNC_3(git_buf *VAR_1, const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = VAR_3 % 3;
 uint8_t *VAR_5, VAR_6, VAR_7, VAR_8;
 const uint8_t *VAR_9 = (const uint8_t *)VAR_2;
 size_t VAR_10 = (VAR_3 / 3) + !!VAR_4, VAR_11;

 FUNC_1(&VAR_10, VAR_10, 1);
 FUNC_2(&VAR_11, VAR_10, 4);
 FUNC_1(&VAR_11, VAR_11, VAR_1->size);

 FUNC_0(VAR_1, VAR_11);
 VAR_5 = (uint8_t *)&VAR_1->ptr[VAR_1->size];


 for (VAR_3 -= VAR_4; VAR_3 > 0; VAR_3 -= 3) {
  VAR_6 = *VAR_9++;
  VAR_7 = *VAR_9++;
  VAR_8 = *VAR_9++;

  *VAR_5++ = VAR_0[VAR_6 >> 2];
  *VAR_5++ = VAR_0[(VAR_6 & 0x03) << 4 | VAR_7 >> 4];
  *VAR_5++ = VAR_0[(VAR_7 & 0x0f) << 2 | VAR_8 >> 6];
  *VAR_5++ = VAR_0[VAR_8 & 0x3f];
 }

 if (VAR_4 > 0) {
  VAR_6 = *VAR_9++;
  VAR_7 = (VAR_4 > 1) ? *VAR_9++ : 0;

  *VAR_5++ = VAR_0[VAR_6 >> 2];
  *VAR_5++ = VAR_0[(VAR_6 & 0x03) << 4 | VAR_7 >> 4];
  *VAR_5++ = (VAR_4 > 1) ? VAR_0[(VAR_7 & 0x0f) << 2] : '=';
  *VAR_5++ = '=';
 }

 VAR_1->size = ((char *)VAR_5) - VAR_1->ptr;
 VAR_1->ptr[VAR_1->size] = '\0';

 return 0;
}

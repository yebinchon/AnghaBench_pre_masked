
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; int size; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (size_t*,size_t,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*,char const*) ;
 size_t FUNC_4 (char const*) ;
 size_t FUNC_5 (char const*,char const*) ;

int FUNC_6(
 git_buf *VAR_0,
 const char *VAR_1,
 const char *VAR_2,
 const char *VAR_3)
{
 const char *VAR_4;
 size_t VAR_5 = 0, VAR_6 = FUNC_4(VAR_3), VAR_7, VAR_8;

 if (!VAR_1)
  return 0;

 for (VAR_4 = VAR_1; *VAR_4; ) {

  VAR_7 = FUNC_3(VAR_4, VAR_2);
  VAR_5 += VAR_7;
  VAR_4 += VAR_7;

  VAR_7 = FUNC_5(VAR_4, VAR_2);
  VAR_5 += VAR_7 * (VAR_6 + 1);
  VAR_4 += VAR_7;
 }

 FUNC_0(&VAR_8, VAR_5, 1);
 if (FUNC_1(VAR_0, VAR_8) < 0)
  return -1;

 for (VAR_4 = VAR_1; *VAR_4; ) {
  VAR_7 = FUNC_3(VAR_4, VAR_2);

  FUNC_2(VAR_0->ptr + VAR_0->size, VAR_4, VAR_7);
  VAR_4 += VAR_7;
  VAR_0->size += VAR_7;

  for (VAR_7 = FUNC_5(VAR_4, VAR_2); VAR_7 > 0; --VAR_7) {

   FUNC_2(VAR_0->ptr + VAR_0->size, VAR_3, VAR_6);
   VAR_0->size += VAR_6;

   VAR_0->ptr[VAR_0->size] = *VAR_4;
   VAR_0->size++;
   VAR_4++;
  }
 }

 VAR_0->ptr[VAR_0->size] = '\0';

 return 0;
}

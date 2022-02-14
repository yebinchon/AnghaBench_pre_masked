
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; int size; } ;
typedef TYPE_1__ mmfile_t ;


 int FUNC_0 (char*,char*,int const) ;

__attribute__((used)) static void FUNC_1(mmfile_t *VAR_0, mmfile_t *VAR_1, long VAR_2)
{
 const int VAR_3 = 1024;
 long VAR_4 = 0, VAR_5 = 0;
 char *VAR_6 = VAR_0->ptr + VAR_0->size;
 char *VAR_7 = VAR_1->ptr + VAR_1->size;
 long VAR_8 = (long)((VAR_0->size < VAR_1->size) ? VAR_0->size : VAR_1->size);

 if (VAR_2)
  return;

 while (VAR_3 + VAR_4 <= VAR_8 && !FUNC_0(VAR_6 - VAR_3, VAR_7 - VAR_3, VAR_3)) {
  VAR_4 += VAR_3;
  VAR_6 -= VAR_3;
  VAR_7 -= VAR_3;
 }

 while (VAR_5 < VAR_4)
  if (VAR_6[VAR_5++] == '\n')
   break;
 VAR_0->size -= VAR_4 - VAR_5;
 VAR_1->size -= VAR_4 - VAR_5;
}

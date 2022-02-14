
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; long size; } ;
typedef TYPE_1__ mmfile_t ;


 int FUNC_0 (char*,char*,int const) ;

__attribute__((used)) static void FUNC_1(mmfile_t *VAR_0, mmfile_t *VAR_1)
{
 const int VAR_2 = 1024;
 long VAR_3 = 0, VAR_4 = 0;
 char *VAR_5 = VAR_0->ptr + VAR_0->size;
 char *VAR_6 = VAR_1->ptr + VAR_1->size;
 long VAR_7 = (VAR_0->size < VAR_1->size) ? VAR_0->size : VAR_1->size;

 while (VAR_2 + VAR_3 <= VAR_7 && !FUNC_0(VAR_5 - VAR_2, VAR_6 - VAR_2, VAR_2)) {
  VAR_3 += VAR_2;
  VAR_5 -= VAR_2;
  VAR_6 -= VAR_2;
 }

 while (VAR_4 < VAR_3)
  if (VAR_5[VAR_4++] == '\n')
   break;
 VAR_0->size -= VAR_3 - VAR_4;
 VAR_1->size -= VAR_3 - VAR_4;
}

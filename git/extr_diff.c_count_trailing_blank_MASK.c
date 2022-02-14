
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; long size; } ;
typedef TYPE_1__ mmfile_t ;


 int FUNC_0 (char*,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(mmfile_t *VAR_0, unsigned VAR_1)
{
 char *VAR_2 = VAR_0->ptr;
 long VAR_3 = VAR_0->size;
 int VAR_4 = 0;

 if (!VAR_3)
  return VAR_4;
 VAR_2 += VAR_3 - 1;
 if (*VAR_2 != '\n')
  ;
 else
  VAR_2--;
 while (VAR_0->ptr < VAR_2) {
  char *VAR_5;
  for (VAR_5 = VAR_2; VAR_0->ptr <= VAR_5; VAR_5--)
   if (*VAR_5 == '\n')
    break;
  if (!FUNC_0(VAR_5 + 1, VAR_2 - VAR_5, VAR_1))
   break;
  VAR_4++;
  VAR_2 = VAR_5 - 1;
 }
 return VAR_4;
}

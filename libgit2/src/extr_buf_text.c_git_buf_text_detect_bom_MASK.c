
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; char* ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int git_bom_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0(git_bom_t *VAR_6, const git_buf *VAR_7)
{
 const char *VAR_8;
 size_t VAR_9;

 *VAR_6 = VAR_0;

 if (VAR_7->size < 2)
  return 0;

 VAR_8 = VAR_7->ptr;
 VAR_9 = VAR_7->size;

 switch (*VAR_8++) {
 case 0:
  if (VAR_9 >= 4 && VAR_8[0] == 0 && VAR_8[1] == '\xFE' && VAR_8[2] == '\xFF') {
   *VAR_6 = VAR_3;
   return 4;
  }
  break;
 case '\xEF':
  if (VAR_9 >= 3 && VAR_8[0] == '\xBB' && VAR_8[1] == '\xBF') {
   *VAR_6 = VAR_5;
   return 3;
  }
  break;
 case '\xFE':
  if (*VAR_8 == '\xFF') {
   *VAR_6 = VAR_1;
   return 2;
  }
  break;
 case '\xFF':
  if (*VAR_8 != '\xFE')
   break;
  if (VAR_9 >= 4 && VAR_8[1] == 0 && VAR_8[2] == 0) {
   *VAR_6 = VAR_4;
   return 4;
  } else {
   *VAR_6 = VAR_2;
   return 2;
  }
  break;
 default:
  break;
 }

 return 0;
}

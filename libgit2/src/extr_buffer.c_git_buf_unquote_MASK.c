
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,...) ;

int FUNC_2(git_buf *VAR_1)
{
 size_t VAR_2, VAR_3;
 char VAR_4;

 FUNC_0(VAR_1);

 if (VAR_1->size < 2 || VAR_1->ptr[0] != '"' || VAR_1->ptr[VAR_1->size-1] != '"')
  goto invalid;

 for (VAR_2 = 0, VAR_3 = 1; VAR_3 < VAR_1->size-1; VAR_2++, VAR_3++) {
  VAR_4 = VAR_1->ptr[VAR_3];

  if (VAR_4 == '\\') {
   if (VAR_3 == VAR_1->size-2)
    goto invalid;

   VAR_4 = VAR_1->ptr[++VAR_3];

   switch (VAR_4) {

   case '"': case '\\':
    break;


   case 'a': VAR_4 = '\a'; break;
   case 'b': VAR_4 = '\b'; break;
   case 'f': VAR_4 = '\f'; break;
   case 'n': VAR_4 = '\n'; break;
   case 'r': VAR_4 = '\r'; break;
   case 't': VAR_4 = '\t'; break;
   case 'v': VAR_4 = '\v'; break;


   case '0': case '1': case '2': case '3':
    if (VAR_3 == VAR_1->size-3) {
     FUNC_1(VAR_0,
      "truncated quoted character \\%c", VAR_4);
     return -1;
    }

    if (VAR_1->ptr[VAR_3+1] < '0' || VAR_1->ptr[VAR_3+1] > '7' ||
     VAR_1->ptr[VAR_3+2] < '0' || VAR_1->ptr[VAR_3+2] > '7') {
     FUNC_1(VAR_0,
      "truncated quoted character \\%c%c%c",
      VAR_1->ptr[VAR_3], VAR_1->ptr[VAR_3+1], VAR_1->ptr[VAR_3+2]);
     return -1;
    }

    VAR_4 = ((VAR_1->ptr[VAR_3] - '0') << 6) |
     ((VAR_1->ptr[VAR_3+1] - '0') << 3) |
     (VAR_1->ptr[VAR_3+2] - '0');
    VAR_3 += 2;
    break;

   default:
    FUNC_1(VAR_0, "invalid quoted character \\%c", VAR_4);
    return -1;
   }
  }

  VAR_1->ptr[VAR_2] = VAR_4;
 }

 VAR_1->ptr[VAR_2] = '\0';
 VAR_1->size = VAR_2;

 return 0;

invalid:
 FUNC_1(VAR_0, "invalid quoted line");
 return -1;
}

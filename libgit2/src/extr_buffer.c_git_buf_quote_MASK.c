
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {size_t size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,unsigned char) ;
 int FUNC_3 (TYPE_1__*,char*,size_t) ;
 int FUNC_4 (TYPE_1__*,char const) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;

int FUNC_6(git_buf *VAR_1)
{
 const char VAR_2[] = { 'a', 'b', 't', 'n', 'v', 'f', 'r' };
 git_buf VAR_3 = VAR_0;
 size_t VAR_4 = 0;
 bool VAR_5 = 0;
 int VAR_6 = 0;


 if (VAR_1->size && VAR_1->ptr[0] == '!')
  VAR_5 = 1;

 for (VAR_4 = 0; !VAR_5 && VAR_4 < VAR_1->size; VAR_4++) {
  if (VAR_1->ptr[VAR_4] == '"' || VAR_1->ptr[VAR_4] == '\\' ||
   VAR_1->ptr[VAR_4] < ' ' || VAR_1->ptr[VAR_4] > '~') {
   VAR_5 = 1;
   break;
  }
 }

 if (!VAR_5)
  goto done;

 FUNC_4(&VAR_3, '"');
 FUNC_3(&VAR_3, VAR_1->ptr, VAR_4);

 for (; VAR_4 < VAR_1->size; VAR_4++) {

  if (VAR_1->ptr[VAR_4] >= '\a' && VAR_1->ptr[VAR_4] <= '\r') {
   FUNC_4(&VAR_3, '\\');
   FUNC_4(&VAR_3, VAR_2[VAR_1->ptr[VAR_4] - '\a']);
  }


  else if (VAR_1->ptr[VAR_4] == '"' || VAR_1->ptr[VAR_4] == '\\') {
   FUNC_4(&VAR_3, '\\');
   FUNC_4(&VAR_3, VAR_1->ptr[VAR_4]);
  }


  else if (VAR_1->ptr[VAR_4] != ' ' &&
    (VAR_1->ptr[VAR_4] < '!' || VAR_1->ptr[VAR_4] > '~')) {
   FUNC_2(&VAR_3, "\\%03o", (unsigned char)VAR_1->ptr[VAR_4]);
  }


  else {
   FUNC_4(&VAR_3, VAR_1->ptr[VAR_4]);
  }
 }

 FUNC_4(&VAR_3, '"');

 if (FUNC_1(&VAR_3)) {
  VAR_6 = -1;
  goto done;
 }

 FUNC_5(&VAR_3, VAR_1);

done:
 FUNC_0(&VAR_3);
 return VAR_6;
}

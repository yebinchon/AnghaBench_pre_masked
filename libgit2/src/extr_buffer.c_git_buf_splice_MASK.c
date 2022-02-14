
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*,char*,size_t) ;

int FUNC_5(
 git_buf *VAR_0,
 size_t VAR_1,
 size_t VAR_2,
 const char *VAR_3,
 size_t VAR_4)
{
 char *VAR_5;
 size_t VAR_6, VAR_7;

 FUNC_2(VAR_0 && VAR_1 <= VAR_0->size && VAR_2 <= VAR_0->size - VAR_1);

 VAR_5 = VAR_0->ptr + VAR_1;




 FUNC_1(&VAR_6, (VAR_0->size - VAR_2), VAR_4);
 FUNC_1(&VAR_7, VAR_6, 1);
 FUNC_0(VAR_0, VAR_7);

 FUNC_4(VAR_5 + VAR_4,
  VAR_5 + VAR_2,
  VAR_0->size - VAR_1 - VAR_2);

 FUNC_3(VAR_5, VAR_3, VAR_4);

 VAR_0->size = VAR_6;
 VAR_0->ptr[VAR_0->size] = '\0';
 return 0;
}

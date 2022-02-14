
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int FUNC_2 (char*,char,size_t) ;

int FUNC_3(git_buf *VAR_0, char VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 FUNC_1(&VAR_3, VAR_0->size, VAR_2);
 FUNC_1(&VAR_3, VAR_3, 1);
 FUNC_0(VAR_0, VAR_3);
 FUNC_2(VAR_0->ptr + VAR_0->size, VAR_1, VAR_2);
 VAR_0->size += VAR_2;
 VAR_0->ptr[VAR_0->size] = '\0';
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t asize; scalar_t__ ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;

void FUNC_6(void)
{
 git_buf VAR_1 = VAR_0;
 size_t VAR_2 = 0;

 VAR_2 = VAR_1.asize;
 FUNC_2(FUNC_5(&VAR_1, "/foo"));
 FUNC_1(VAR_1.ptr, "/foo");
 FUNC_0(VAR_2 < VAR_1.asize);

 VAR_2 = VAR_1.asize;
 FUNC_2(FUNC_4(&VAR_1, VAR_1.ptr, "this is a new string"));
 FUNC_1(VAR_1.ptr, "/foo/this is a new string");
 FUNC_0(VAR_2 < VAR_1.asize);

 VAR_2 = VAR_1.asize;
 FUNC_2(FUNC_4(&VAR_1, VAR_1.ptr, "/grow the buffer, grow the buffer, grow the buffer"));
 FUNC_1(VAR_1.ptr, "/foo/this is a new string/grow the buffer, grow the buffer, grow the buffer");
 FUNC_0(VAR_2 < VAR_1.asize);

 FUNC_3(&VAR_1);
 FUNC_2(FUNC_5(&VAR_1, "/foo/bar"));

 FUNC_2(FUNC_4(&VAR_1, VAR_1.ptr + 4, "baz"));
 FUNC_1(VAR_1.ptr, "/bar/baz");

 VAR_2 = VAR_1.asize;
 FUNC_2(FUNC_4(&VAR_1, VAR_1.ptr + 4, "somethinglongenoughtorealloc"));
 FUNC_1(VAR_1.ptr, "/baz/somethinglongenoughtorealloc");
 FUNC_0(VAR_2 < VAR_1.asize);

 FUNC_3(&VAR_1);
}

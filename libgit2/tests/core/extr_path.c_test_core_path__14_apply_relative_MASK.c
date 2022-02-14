
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;

void FUNC_6(void)
{
 git_buf VAR_1 = VAR_0;

 FUNC_2(FUNC_4(&VAR_1, "/this/is/a/base"));

 FUNC_2(FUNC_5(&VAR_1, "../test"));
 FUNC_0("/this/is/a/test", VAR_1.ptr);

 FUNC_2(FUNC_5(&VAR_1, "../../the/./end"));
 FUNC_0("/this/is/the/end", VAR_1.ptr);

 FUNC_2(FUNC_5(&VAR_1, "./of/this/../the/string"));
 FUNC_0("/this/is/the/end/of/the/string", VAR_1.ptr);

 FUNC_2(FUNC_5(&VAR_1, "../../../../../.."));
 FUNC_0("/this/", VAR_1.ptr);

 FUNC_2(FUNC_5(&VAR_1, "../"));
 FUNC_0("/", VAR_1.ptr);

 FUNC_1(FUNC_5(&VAR_1, "../../.."));


 FUNC_2(FUNC_4(&VAR_1, "d:/another/test"));

 FUNC_2(FUNC_5(&VAR_1, "../.."));
 FUNC_0("d:/", VAR_1.ptr);

 FUNC_2(FUNC_5(&VAR_1, "from/here/to/../and/./back/."));
 FUNC_0("d:/from/here/and/back/", VAR_1.ptr);


 FUNC_2(FUNC_4(&VAR_1, "https://my.url.com/test.git"));

 FUNC_2(FUNC_5(&VAR_1, "../another.git"));
 FUNC_0("https://my.url.com/another.git", VAR_1.ptr);

 FUNC_2(FUNC_5(&VAR_1, "../full/path/url.patch"));
 FUNC_0("https://my.url.com/full/path/url.patch", VAR_1.ptr);

 FUNC_2(FUNC_5(&VAR_1, ".."));
 FUNC_0("https://my.url.com/full/path/", VAR_1.ptr);

 FUNC_2(FUNC_5(&VAR_1, "../../../"));
 FUNC_0("https://", VAR_1.ptr);


 FUNC_2(FUNC_4(&VAR_1, "../../this/is/relative"));

 FUNC_2(FUNC_5(&VAR_1, "../../preserves/the/prefix"));
 FUNC_0("../../this/preserves/the/prefix", VAR_1.ptr);

 FUNC_2(FUNC_5(&VAR_1, "../../../../that"));
 FUNC_0("../../that", VAR_1.ptr);

 FUNC_2(FUNC_5(&VAR_1, "../there"));
 FUNC_0("../../there", VAR_1.ptr);
 FUNC_3(&VAR_1);
}

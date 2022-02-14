
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* ptr; scalar_t__ size; scalar_t__ asize; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*,char*,scalar_t__) ;
 char* FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_10 (char const*) ;

void FUNC_11(void)
{
 const char *VAR_1 = "This is fun";
 git_buf VAR_2 = VAR_0;
 char *VAR_3 = ((void*)0);

 FUNC_9(&VAR_2, "foo");
 FUNC_0(FUNC_8(&VAR_2) == 0);
 FUNC_1("foo", FUNC_5(&VAR_2));

 VAR_3 = FUNC_6(&VAR_2);

 FUNC_1("foo", VAR_3);
 FUNC_1("", VAR_2.ptr);
 FUNC_2(VAR_3);

 VAR_3 = FUNC_6(&VAR_2);

 FUNC_1(((void*)0), VAR_3);
 FUNC_1("", VAR_2.ptr);

 FUNC_7(&VAR_2);

 VAR_3 = FUNC_3(VAR_1);
 FUNC_4(&VAR_2, VAR_3, 0);

 FUNC_1(VAR_1, VAR_2.ptr);
 FUNC_0(VAR_2.size == FUNC_10(VAR_1));
 FUNC_0(VAR_2.asize == FUNC_10(VAR_1) + 1);

 FUNC_7(&VAR_2);

 VAR_3 = FUNC_3(VAR_1);
 FUNC_4(&VAR_2, VAR_3, FUNC_10(VAR_1) + 1);

 FUNC_1(VAR_1, VAR_2.ptr);
 FUNC_0(VAR_2.size == FUNC_10(VAR_1));
 FUNC_0(VAR_2.asize == FUNC_10(VAR_1) + 1);

 FUNC_7(&VAR_2);
}

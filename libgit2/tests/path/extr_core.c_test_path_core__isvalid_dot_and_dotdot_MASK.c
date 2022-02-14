
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;

void FUNC_2(void)
{
 FUNC_0(1, FUNC_1(((void*)0), ".", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), "./foo", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), "foo/.", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), "./foo", 0, 0));

 FUNC_0(1, FUNC_1(((void*)0), "..", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), "../foo", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), "foo/..", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), "../foo", 0, 0));

 FUNC_0(0, FUNC_1(((void*)0), ".", 0, VAR_0));
 FUNC_0(0, FUNC_1(((void*)0), "./foo", 0, VAR_0));
 FUNC_0(0, FUNC_1(((void*)0), "foo/.", 0, VAR_0));
 FUNC_0(0, FUNC_1(((void*)0), "./foo", 0, VAR_0));

 FUNC_0(0, FUNC_1(((void*)0), "..", 0, VAR_0));
 FUNC_0(0, FUNC_1(((void*)0), "../foo", 0, VAR_0));
 FUNC_0(0, FUNC_1(((void*)0), "foo/..", 0, VAR_0));
 FUNC_0(0, FUNC_1(((void*)0), "../foo", 0, VAR_0));
}

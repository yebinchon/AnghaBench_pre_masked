
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(void)
{
 FUNC_0("~");
 FUNC_1("foo~bar", ((void*)0));

 FUNC_0("master~bar");
 FUNC_0("master~-1");
 FUNC_0("master~0bar");
 FUNC_0("this doesn't make sense~2");
 FUNC_0("be3563a^{tree}~");
 FUNC_0("point_to_blob^{blob}~");

 FUNC_1("master~0", "a65fedf39aefe402d3bb6e24df4d4f5fe4547750");
 FUNC_1("master~1", "be3563ae3f795b2b4353bcce3a527ad0a4f7f644");
 FUNC_1("master~2", "9fd738e8f7967c078dceed8190330fc8648ee56a");
 FUNC_1("master~1~1", "9fd738e8f7967c078dceed8190330fc8648ee56a");
 FUNC_1("master~~", "9fd738e8f7967c078dceed8190330fc8648ee56a");
}

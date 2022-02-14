
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,struct nl_msg*,size_t,int) ;
 int FUNC_1 (void*,void*,size_t) ;
 void* FUNC_2 (struct nl_msg*,size_t,int) ;

int FUNC_3(struct nl_msg *VAR_1, void *VAR_2, size_t VAR_3, int VAR_4)
{
 void *VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_4);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_5, VAR_2, VAR_3);
 FUNC_0(2, "msg %p: Appended %zu bytes with padding %d\n", VAR_1, VAR_3, VAR_4);

 return 0;
}

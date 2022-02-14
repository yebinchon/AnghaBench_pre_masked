
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nl_msg {int nm_nlh; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,struct nl_msg*,int,void*,int) ;
 int FUNC_1 (int ,void const*,int) ;
 int FUNC_2 (struct nlattr*) ;
 struct nlattr* FUNC_3 (struct nl_msg*,int,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct nl_msg *VAR_1, int VAR_2, int VAR_3, const void *VAR_4)
{
 struct nlattr *VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(FUNC_2(VAR_5), VAR_4, VAR_3);
 FUNC_0(2, "msg %p: Wrote %d bytes at offset +%td for attr %d\n",
        VAR_1, VAR_3, (void *) VAR_5 - FUNC_4(VAR_1->nm_nlh), VAR_2);

 return 0;
}

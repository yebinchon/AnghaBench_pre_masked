
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int nla_type; int nla_len; } ;
struct nl_msg {int nm_size; TYPE_1__* nm_nlh; } ;
struct TYPE_3__ {int nlmsg_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,struct nl_msg*,int,void*,int,int) ;
 int FUNC_2 (unsigned char*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

struct nlattr *FUNC_8(struct nl_msg *VAR_0, int VAR_1, int VAR_2)
{
 struct nlattr *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->nm_nlh->nlmsg_len) + FUNC_5(VAR_2);

 if ((VAR_4 + VAR_0->nm_nlh->nlmsg_len) > VAR_0->nm_size)
  return ((void*)0);

 VAR_3 = (struct nlattr *) FUNC_7(VAR_0->nm_nlh);
 VAR_3->nla_type = VAR_1;
 VAR_3->nla_len = FUNC_3(VAR_2);

 FUNC_2((unsigned char *) VAR_3 + VAR_3->nla_len, 0, FUNC_4(VAR_2));
 VAR_0->nm_nlh->nlmsg_len = VAR_4;

 FUNC_1(2, "msg %p: Reserved %d bytes at offset +%td for attr %d "
    "nlmsg_len=%d\n", VAR_0, VAR_2,
    (void *) VAR_3 - FUNC_6(VAR_0->nm_nlh),
    VAR_1, VAR_0->nm_nlh->nlmsg_len);

 return VAR_3;
}

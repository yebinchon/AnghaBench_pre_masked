
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nlmsghdr {int dummy; } ;
struct nl_msg {int nm_refcnt; int nm_protocol; size_t nm_size; TYPE_1__* nm_nlh; } ;
struct TYPE_3__ {int nlmsg_len; } ;


 int FUNC_0 (int,char*,struct nl_msg*,size_t) ;
 struct nl_msg* FUNC_1 (int,int) ;
 int FUNC_2 (struct nl_msg*) ;
 TYPE_1__* FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static struct nl_msg *FUNC_6(size_t VAR_0)
{
 struct nl_msg *VAR_1;

 VAR_1 = FUNC_1(1, sizeof(*VAR_1));
 if (!VAR_1)
  goto errout;

 VAR_1->nm_refcnt = 1;

 VAR_1->nm_nlh = FUNC_3(VAR_0);
 if (!VAR_1->nm_nlh)
  goto errout;

 FUNC_4(VAR_1->nm_nlh, 0, sizeof(struct nlmsghdr));

 VAR_1->nm_protocol = -1;
 VAR_1->nm_size = VAR_0;
 VAR_1->nm_nlh->nlmsg_len = FUNC_5(0);

 FUNC_0(2, "msg %p: Allocated new message, maxlen=%zu\n", VAR_1, VAR_0);

 return VAR_1;
errout:
 FUNC_2(VAR_1);
 return ((void*)0);
}

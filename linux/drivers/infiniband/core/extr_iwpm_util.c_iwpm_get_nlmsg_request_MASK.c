
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwpm_nlmsg_request {int sem; scalar_t__ err_code; scalar_t__ request_done; int nl_client; int nlmsg_seq; int kref; int inprocess_list; } ;
typedef int gfp_t ;
typedef int __u32 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct iwpm_nlmsg_request* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

struct iwpm_nlmsg_request *FUNC_8(__u32 VAR_2,
     u8 VAR_3, gfp_t VAR_4)
{
 struct iwpm_nlmsg_request *VAR_5 = ((void*)0);
 unsigned long VAR_6;

 VAR_5 = FUNC_3(sizeof(struct iwpm_nlmsg_request), VAR_4);
 if (!VAR_5)
  return ((void*)0);

 FUNC_6(&VAR_1, VAR_6);
 FUNC_4(&VAR_5->inprocess_list, &VAR_0);
 FUNC_7(&VAR_1, VAR_6);

 FUNC_2(&VAR_5->kref);
 FUNC_1(&VAR_5->kref);
 VAR_5->nlmsg_seq = VAR_2;
 VAR_5->nl_client = VAR_3;
 VAR_5->request_done = 0;
 VAR_5->err_code = 0;
 FUNC_5(&VAR_5->sem, 1);
 FUNC_0(&VAR_5->sem);
 return VAR_5;
}

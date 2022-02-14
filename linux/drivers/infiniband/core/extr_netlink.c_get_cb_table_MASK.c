
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct rdma_nl_cbs {int doit; int dump; } ;
struct TYPE_2__ {int cb_table; int sem; } ;


 unsigned int VAR_0 ;
 struct rdma_nl_cbs* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*,unsigned int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static const struct rdma_nl_cbs *
FUNC_5(const struct sk_buff *VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 const struct rdma_nl_cbs *VAR_6;





 if (FUNC_3(VAR_3->sk) != &VAR_1 && VAR_4 != VAR_0)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_2[VAR_4].cb_table);
 if (!VAR_6) {




  FUNC_4(&VAR_2[VAR_4].sem);

  FUNC_2("rdma-netlink-subsys-%d", VAR_4);

  FUNC_1(&VAR_2[VAR_4].sem);
  VAR_6 = FUNC_0(VAR_2[VAR_4].cb_table);
 }
 if (!VAR_6 || (!VAR_6[VAR_5].dump && !VAR_6[VAR_5].doit))
  return ((void*)0);
 return VAR_6;
}

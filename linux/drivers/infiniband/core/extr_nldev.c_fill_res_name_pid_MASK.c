
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rdma_restrack_entry {int task; int kern_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct rdma_restrack_entry*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3,
        struct rdma_restrack_entry *VAR_4)
{




 if (FUNC_2(VAR_4)) {
  if (FUNC_0(VAR_3, VAR_1,
      VAR_4->kern_name))
   return -VAR_0;
 } else {
  if (FUNC_1(VAR_3, VAR_2,
      FUNC_3(VAR_4->task)))
   return -VAR_0;
 }
 return 0;
}

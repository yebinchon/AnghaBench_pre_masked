
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efa_ibv_create_cq_resp {scalar_t__ q_mmap_key; int q_mmap_size; } ;
struct efa_dev {int dummy; } ;
struct efa_cq {int size; int cpu_addr; int ucontext; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct efa_dev*,int ,struct efa_cq*,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct efa_dev *VAR_3, struct efa_cq *VAR_4,
     struct efa_ibv_create_cq_resp *VAR_5)
{
 VAR_5->q_mmap_size = VAR_4->size;
 VAR_5->q_mmap_key = FUNC_0(VAR_3, VAR_4->ucontext, VAR_4,
          FUNC_1(VAR_4->cpu_addr),
          VAR_4->size, VAR_0);
 if (VAR_5->q_mmap_key == VAR_1)
  return -VAR_2;

 return 0;
}

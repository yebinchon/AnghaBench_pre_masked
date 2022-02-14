
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_uobject {int usecnt; } ;
typedef enum rdma_lookup_mode { ____Placeholder_rdma_lookup_mode } rdma_lookup_mode ;


 int VAR_0 ;



 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static int FUNC_2(struct ib_uobject *VAR_1,
      enum rdma_lookup_mode VAR_2)
{
 switch (VAR_2) {
 case 129:
  return FUNC_1(&VAR_1->usecnt, 1, -1) == -1 ?
   -VAR_0 : 0;
 case 128:

  return FUNC_0(&VAR_1->usecnt, 0, -1) == 0 ? 0 : -VAR_0;
 case 130:
  return 0;
 }
 return 0;
}

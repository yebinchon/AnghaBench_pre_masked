
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {int device; } ;
struct ib_mr {int lkey; int rkey; } ;
struct hns_roce_mr {struct ib_mr ibmr; int * umem; int key; int type; } ;
struct TYPE_2__ {int pdn; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,unsigned long long,int,int ,struct hns_roce_mr*) ;
 int FUNC_2 (int ,struct hns_roce_mr*) ;
 int FUNC_3 (int ,struct hns_roce_mr*) ;
 int FUNC_4 (struct hns_roce_mr*) ;
 struct hns_roce_mr* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (struct ib_pd*) ;

struct ib_mr *FUNC_8(struct ib_pd *VAR_3, int VAR_4)
{
 struct hns_roce_mr *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_5->type = VAR_2;


 VAR_6 = FUNC_1(FUNC_6(VAR_3->device), FUNC_7(VAR_3)->pdn, 0,
    ~0ULL, VAR_4, 0, VAR_5);
 if (VAR_6)
  goto err_free;

 VAR_6 = FUNC_2(FUNC_6(VAR_3->device), VAR_5);
 if (VAR_6)
  goto err_mr;

 VAR_5->ibmr.rkey = VAR_5->ibmr.lkey = VAR_5->key;
 VAR_5->umem = ((void*)0);

 return &VAR_5->ibmr;

err_mr:
 FUNC_3(FUNC_6(VAR_3->device), VAR_5);

err_free:
 FUNC_4(VAR_5);
 return FUNC_0(VAR_6);
}

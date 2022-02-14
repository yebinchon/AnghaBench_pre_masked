
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ib_mr {scalar_t__ rkey; scalar_t__ lkey; } ;
struct usnic_ib_mr {struct ib_mr ibmr; scalar_t__ umem; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;
struct TYPE_2__ {int umem_pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct usnic_ib_mr*) ;
 struct usnic_ib_mr* FUNC_4 (int,int ) ;
 TYPE_1__* FUNC_5 (struct ib_pd*) ;
 int FUNC_6 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int,int ) ;

struct ib_mr *FUNC_8(struct ib_pd *VAR_3, u64 VAR_4, u64 VAR_5,
     u64 VAR_6, int VAR_7,
     struct ib_udata *VAR_8)
{
 struct usnic_ib_mr *VAR_9;
 int VAR_10;

 FUNC_6("start 0x%llx va 0x%llx length 0x%llx\n", VAR_4,
   VAR_6, VAR_5);

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_9->umem = FUNC_7(FUNC_5(VAR_3)->umem_pd, VAR_4, VAR_5,
     VAR_7, 0);
 if (FUNC_1(VAR_9->umem)) {
  VAR_10 = VAR_9->umem ? FUNC_2(VAR_9->umem) : -VAR_0;
  goto err_free;
 }

 VAR_9->ibmr.lkey = VAR_9->ibmr.rkey = 0;
 return &VAR_9->ibmr;

err_free:
 FUNC_3(VAR_9);
 return FUNC_0(VAR_10);
}

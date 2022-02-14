
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct qedr_userq {size_t buf_len; int * umem; int * pbl_tbl; int pbl_info; int buf_addr; } ;
struct qedr_dev {int dummy; } ;
struct ib_udata {int dummy; } ;


 int FUNC_0 (struct qedr_dev*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct ib_udata*,int ,size_t,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int ) ;
 int * FUNC_7 (struct qedr_dev*,int *,int ) ;
 int FUNC_8 (struct qedr_dev*,int *,int *,int *,int) ;
 int FUNC_9 (struct qedr_dev*,int *,int,int ) ;

__attribute__((used)) static inline int FUNC_10(struct ib_udata *VAR_4,
           struct qedr_dev *VAR_5,
           struct qedr_userq *VAR_6, u64 VAR_7,
           size_t VAR_8, int VAR_9, int VAR_10,
           int VAR_11)
{
 u32 VAR_12;
 int VAR_13;

 VAR_6->buf_addr = VAR_7;
 VAR_6->buf_len = VAR_8;
 VAR_6->umem = FUNC_3(VAR_4, VAR_6->buf_addr, VAR_6->buf_len, VAR_9, VAR_10);
 if (FUNC_1(VAR_6->umem)) {
  FUNC_0(VAR_5, "create user queue: failed ib_umem_get, got %ld\n",
         FUNC_2(VAR_6->umem));
  return FUNC_2(VAR_6->umem);
 }

 VAR_12 = FUNC_4(VAR_6->umem) <<
     (VAR_3 - VAR_1);

 VAR_13 = FUNC_9(VAR_5, &VAR_6->pbl_info, VAR_12, 0);
 if (VAR_13)
  goto err0;

 if (VAR_11) {
  VAR_6->pbl_tbl = FUNC_7(VAR_5, &VAR_6->pbl_info, VAR_2);
  if (FUNC_1(VAR_6->pbl_tbl)) {
   VAR_13 = FUNC_2(VAR_6->pbl_tbl);
   goto err0;
  }
  FUNC_8(VAR_5, VAR_6->umem, VAR_6->pbl_tbl, &VAR_6->pbl_info,
       VAR_1);
 } else {
  VAR_6->pbl_tbl = FUNC_6(sizeof(*VAR_6->pbl_tbl), VAR_2);
  if (!VAR_6->pbl_tbl) {
   VAR_13 = -VAR_0;
   goto err0;
  }
 }

 return 0;

err0:
 FUNC_5(VAR_6->umem);
 VAR_6->umem = ((void*)0);

 return VAR_13;
}

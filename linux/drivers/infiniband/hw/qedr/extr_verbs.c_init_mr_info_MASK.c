
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_pbl {int pa; int list_entry; } ;
struct qedr_dev {int dummy; } ;
struct mr_info {int free_pbl_list; int pbl_info; struct qedr_pbl* pbl_table; int inuse_pbl_list; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct qedr_pbl*) ;
 int FUNC_3 (struct qedr_pbl*) ;
 int VAR_1 ;
 int FUNC_4 (struct qedr_dev*,struct mr_info*) ;
 int FUNC_5 (int *,int *) ;
 void* FUNC_6 (struct qedr_dev*,int *,int ) ;
 int FUNC_7 (struct qedr_dev*,int *,size_t,int) ;

__attribute__((used)) static int FUNC_8(struct qedr_dev *VAR_2, struct mr_info *VAR_3,
   size_t VAR_4, bool VAR_5)
{
 struct qedr_pbl *VAR_6;
 int VAR_7;

 FUNC_1(&VAR_3->free_pbl_list);
 FUNC_1(&VAR_3->inuse_pbl_list);

 VAR_7 = FUNC_7(VAR_2, &VAR_3->pbl_info,
      VAR_4, VAR_5);
 if (VAR_7)
  goto done;

 VAR_3->pbl_table = FUNC_6(VAR_2, &VAR_3->pbl_info, VAR_0);
 if (FUNC_2(VAR_3->pbl_table)) {
  VAR_7 = FUNC_3(VAR_3->pbl_table);
  goto done;
 }

 FUNC_0(VAR_2, VAR_1, "pbl_table_pa = %pa\n",
   &VAR_3->pbl_table->pa);




 VAR_6 = FUNC_6(VAR_2, &VAR_3->pbl_info, VAR_0);
 if (FUNC_2(VAR_6)) {
  FUNC_0(VAR_2, VAR_1, "Extra PBL is not allocated\n");
  goto done;
 }

 FUNC_5(&VAR_6->list_entry, &VAR_3->free_pbl_list);

 FUNC_0(VAR_2, VAR_1, "extra pbl_table_pa = %pa\n", &VAR_6->pa);

done:
 if (VAR_7)
  FUNC_4(VAR_2, VAR_3);

 return VAR_7;
}

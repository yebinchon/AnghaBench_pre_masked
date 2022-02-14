
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hisi_zip_ctx {TYPE_1__* qp_ctx; } ;
struct hisi_qm {int dummy; } ;
struct hisi_zip {struct hisi_qm qm; } ;
struct TYPE_3__ {struct hisi_zip* zip_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct hisi_zip* FUNC_1 (int ) ;
 int FUNC_2 (struct hisi_qm*,TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct hisi_zip_ctx *VAR_2, u8 VAR_3)
{
 struct hisi_zip *VAR_4;
 struct hisi_qm *VAR_5;
 int VAR_6, VAR_7, VAR_8;


 VAR_4 = FUNC_1(FUNC_0(FUNC_5()));
 if (!VAR_4) {
  FUNC_4("Failed to find a proper ZIP device!\n");
  return -VAR_0;
 }
 VAR_5 = &VAR_4->qm;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {

  VAR_6 = FUNC_2(VAR_5, &VAR_2->qp_ctx[VAR_7], VAR_7,
      VAR_3);
  if (VAR_6)
   goto err;

  VAR_2->qp_ctx[VAR_7].zip_dev = VAR_4;
 }

 return 0;
err:
 for (VAR_8 = VAR_7 - 1; VAR_8 >= 0; VAR_8--)
  FUNC_3(&VAR_2->qp_ctx[VAR_8]);

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_re_dev {int num_msix; int msix_entries; struct bnxt_en_dev* en_dev; } ;
struct bnxt_en_dev {TYPE_1__* en_ops; } ;
struct TYPE_2__ {int (* bnxt_request_msix ) (struct bnxt_en_dev*,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct bnxt_re_dev*) ;
 int FUNC_4 (struct bnxt_en_dev*,int ,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct bnxt_re_dev *VAR_5)
{
 int VAR_6 = 0, VAR_7 = VAR_0, VAR_8;
 struct bnxt_en_dev *VAR_9;

 if (!VAR_5)
  return -VAR_3;

 VAR_9 = VAR_5->en_dev;

 VAR_7 = FUNC_1(VAR_4, VAR_0, FUNC_2());

 VAR_8 = VAR_9->en_ops->bnxt_request_msix(VAR_9, VAR_2,
        VAR_5->msix_entries,
        VAR_7);
 if (VAR_8 < VAR_1) {
  VAR_6 = -VAR_3;
  goto done;
 }
 if (VAR_8 != VAR_7) {
  FUNC_0(FUNC_3(VAR_5),
    "Requested %d MSI-X vectors, got %d\n",
    VAR_7, VAR_8);
 }
 VAR_5->num_msix = VAR_8;
done:
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct device {int dummy; } ;
struct brcm_message {int error; } ;
struct TYPE_4__ {int * mbox; int mb_send_fail; int mb_no_spc; TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int) ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,struct brcm_message*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct brcm_message *VAR_6, u32 VAR_7,
    u8 VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;
 struct device *VAR_11 = &(VAR_5.pdev->dev);

 VAR_9 = FUNC_3(VAR_5.mbox[VAR_8], VAR_6);
 if (VAR_7 & VAR_0) {
  while ((VAR_9 == -VAR_1) && (VAR_10 < VAR_4)) {




   VAR_10++;
   FUNC_5(VAR_3, VAR_2);
   VAR_9 = FUNC_3(VAR_5.mbox[VAR_8],
      VAR_6);
   FUNC_0(&VAR_5.mb_no_spc);
  }
 }
 if (VAR_9 < 0) {
  FUNC_0(&VAR_5.mb_send_fail);
  return VAR_9;
 }


 VAR_9 = VAR_6->error;
 if (FUNC_4(VAR_9 < 0)) {
  FUNC_1(VAR_11, "message error %d", VAR_9);

 }


 FUNC_2(VAR_5.mbox[VAR_8], VAR_9);
 return VAR_9;
}

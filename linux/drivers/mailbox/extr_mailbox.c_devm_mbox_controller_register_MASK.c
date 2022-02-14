
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_controller {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct mbox_controller**) ;
 struct mbox_controller** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct mbox_controller**) ;
 int FUNC_3 (struct mbox_controller*) ;

int FUNC_4(struct device *VAR_3,
      struct mbox_controller *VAR_4)
{
 struct mbox_controller **VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2, sizeof(*VAR_5),
      VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 < 0) {
  FUNC_2(VAR_5);
  return VAR_6;
 }

 FUNC_0(VAR_3, VAR_5);
 *VAR_5 = VAR_4;

 return 0;
}

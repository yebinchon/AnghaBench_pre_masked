
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_dev {int pos; int cmd; int tsn; int hsn; } ;
typedef int cont_fn ;


 int FUNC_0 (struct opal_dev*,int ,int ) ;
 int FUNC_1 (struct opal_dev*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct opal_dev *VAR_0, cont_fn VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_0->hsn, VAR_0->tsn);
 if (VAR_2) {
  FUNC_2("Error finalizing command buffer: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_3(VAR_0->cmd, VAR_0->pos);

 return FUNC_1(VAR_0, VAR_1);
}

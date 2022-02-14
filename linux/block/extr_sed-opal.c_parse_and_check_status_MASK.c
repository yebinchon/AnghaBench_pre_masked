
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_dev {int parsed; int resp; int pos; int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct opal_dev *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1->cmd, VAR_1->pos);

 VAR_2 = FUNC_2(VAR_1->resp, VAR_0, &VAR_1->parsed);
 if (VAR_2) {
  FUNC_0("Couldn't parse response.\n");
  return VAR_2;
 }

 return FUNC_3(&VAR_1->parsed);
}

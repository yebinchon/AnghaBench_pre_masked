
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kxtj9_data {int ctrl_reg1; int client; int data_ctrl; } ;
struct TYPE_3__ {unsigned int cutoff; int mask; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct kxtj9_data *VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  VAR_3->data_ctrl = VAR_2[VAR_6].mask;
  if (VAR_4 < VAR_2[VAR_6].cutoff)
   break;
 }

 VAR_5 = FUNC_1(VAR_3->client, VAR_0, 0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3->client, VAR_1, VAR_3->data_ctrl);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3->client, VAR_0, VAR_3->ctrl_reg1);
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}

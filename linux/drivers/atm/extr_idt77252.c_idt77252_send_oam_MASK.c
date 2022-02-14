
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int truesize; } ;
struct idt77252_dev {int name; } ;
struct atm_vcc {TYPE_1__* stats; struct atm_dev* dev; } ;
struct atm_dev {struct idt77252_dev* dev_data; } ;
struct TYPE_4__ {int sk_wmem_alloc; } ;
struct TYPE_3__ {int tx_err; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (struct atm_vcc*,struct sk_buff*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int *) ;
 TYPE_2__* FUNC_5 (struct atm_vcc*) ;
 int FUNC_6 (struct sk_buff*,void*,int) ;

__attribute__((used)) static int
FUNC_7(struct atm_vcc *VAR_1, void *VAR_2, int VAR_3)
{
 struct atm_dev *VAR_4 = VAR_1->dev;
 struct idt77252_dev *VAR_5 = VAR_4->dev_data;
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_1(64);
 if (!VAR_6) {
  FUNC_3("%s: Out of memory in send_oam().\n", VAR_5->name);
  FUNC_0(&VAR_1->stats->tx_err);
  return -VAR_0;
 }
 FUNC_4(VAR_6->truesize, &FUNC_5(VAR_1)->sk_wmem_alloc);

 FUNC_6(VAR_6, VAR_2, 52);

 return FUNC_2(VAR_1, VAR_6, 1);
}

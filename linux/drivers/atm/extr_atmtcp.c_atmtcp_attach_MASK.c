
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct atm_vcc {int * stats; struct atm_dev* dev_data; int flags; TYPE_2__* dev; } ;
struct atm_dev {int number; int * ops; } ;
struct TYPE_6__ {struct atm_vcc* vcc; } ;
struct TYPE_4__ {int aal5; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (struct atm_dev*) ;
 struct atm_dev* FUNC_1 (int) ;
 int FUNC_2 (struct atm_dev*) ;
 int FUNC_3 (struct atm_vcc*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_4 (int,int ,struct atm_dev**) ;
 int VAR_5 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct atm_vcc*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct atm_vcc *VAR_6,int VAR_7)
{
 struct atm_dev *VAR_8;

 VAR_8 = ((void*)0);
 if (VAR_7 != -1) VAR_8 = FUNC_1(VAR_7);
 if (VAR_8) {
  if (VAR_8->ops != &VAR_5) {
   FUNC_2(VAR_8);
   return -VAR_3;
  }
  if (FUNC_0(VAR_8)->vcc) {
   FUNC_2(VAR_8);
   return -VAR_2;
  }
 }
 else {
  int VAR_9;

  VAR_9 = FUNC_4(VAR_7,0,&VAR_8);
  if (VAR_9) return VAR_9;
 }
 FUNC_0(VAR_8)->vcc = VAR_6;
 VAR_6->dev = &VAR_4;
 FUNC_7(FUNC_6(VAR_6));
 FUNC_5(VAR_0,&VAR_6->flags);
 FUNC_5(VAR_1,&VAR_6->flags);
 VAR_6->dev_data = VAR_8;
 (void) FUNC_3(VAR_6);
 VAR_6->stats = &VAR_4.stats.aal5;
 return VAR_8->number;
}

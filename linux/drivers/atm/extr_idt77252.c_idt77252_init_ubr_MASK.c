
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_map {int init_er; int lacr; int max_er; int class; struct rate_estimator* estimator; int lock; } ;
struct rate_estimator {int timer; } ;
struct idt77252_dev {int link_pcr; } ;
struct atm_vcc {int dummy; } ;
struct atm_qos {int txtp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct rate_estimator* FUNC_2 (struct vc_map*,int) ;
 int FUNC_3 (struct idt77252_dev*,int) ;
 int FUNC_4 (struct rate_estimator*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct idt77252_dev *VAR_1, struct vc_map *VAR_2,
    struct atm_vcc *VAR_3, struct atm_qos *VAR_4)
{
 struct rate_estimator *VAR_5 = ((void*)0);
 unsigned long VAR_6;
 int VAR_7;

 FUNC_5(&VAR_2->lock, VAR_6);
 if (VAR_2->estimator) {
  VAR_5 = VAR_2->estimator;
  VAR_2->estimator = ((void*)0);
 }
 FUNC_6(&VAR_2->lock, VAR_6);
 if (VAR_5) {
  FUNC_1(&VAR_5->timer);
  FUNC_4(VAR_5);
 }

 VAR_7 = FUNC_0(&VAR_4->txtp);
 if (VAR_7 == 0)
  VAR_7 = VAR_1->link_pcr;

 VAR_2->estimator = FUNC_2(VAR_2, VAR_7);

 VAR_2->class = VAR_0;
 VAR_2->init_er = FUNC_3(VAR_1, VAR_7);
 VAR_2->lacr = VAR_2->init_er;
 if (VAR_7 < 0)
  VAR_2->max_er = VAR_2->init_er;
 else
  VAR_2->max_er = 0xff;

 return 0;
}

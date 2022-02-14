
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kcs_bmc {int lock; int running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kcs_bmc*) ;
 int FUNC_1 (struct kcs_bmc*) ;
 int FUNC_2 (struct kcs_bmc*) ;
 int FUNC_3 (struct kcs_bmc*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct kcs_bmc *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = -VAR_0;
 u8 VAR_6;

 FUNC_4(&VAR_3->lock, VAR_4);

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6 & VAR_2) {
  if (!VAR_3->running)
   FUNC_2(VAR_3);
  else if (VAR_6 & VAR_1)
   FUNC_0(VAR_3);
  else
   FUNC_1(VAR_3);

  VAR_5 = 0;
 }

 FUNC_5(&VAR_3->lock, VAR_4);

 return VAR_5;
}

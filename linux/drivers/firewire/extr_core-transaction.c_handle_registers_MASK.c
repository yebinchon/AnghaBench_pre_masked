
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_request {int dummy; } ;
struct fw_card {int split_timeout_hi; int split_timeout_lo; int broadcast_channel; int maint_utility_register; int lock; TYPE_1__* driver; int priority_budget_implemented; } ;
typedef int __be32 ;
struct TYPE_2__ {int (* read_csr ) (struct fw_card*,int) ;int (* write_csr ) (struct fw_card*,int const,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned long long VAR_2 ;



 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct fw_card*,struct fw_request*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct fw_card*,int) ;
 int FUNC_7 (struct fw_card*,int,int) ;
 int FUNC_8 (struct fw_card*,int const,int) ;
 int FUNC_9 (struct fw_card*) ;

__attribute__((used)) static void FUNC_10(struct fw_card *VAR_9, struct fw_request *VAR_10,
  int VAR_11, int VAR_12, int VAR_13, int VAR_14,
  unsigned long long VAR_15, void *VAR_16, size_t VAR_17,
  void *VAR_18)
{
 int VAR_19 = VAR_15 & ~VAR_2;
 __be32 *VAR_20 = VAR_16;
 int VAR_21 = VAR_5;
 unsigned long VAR_22;

 switch (VAR_19) {
 case 133:
  if (!VAR_9->priority_budget_implemented) {
   VAR_21 = VAR_4;
   break;
  }


 case 134:






 case 129:
 case 128:
 case 136:
 case 139:
 case 141:
  if (VAR_11 == VAR_7)
   *VAR_20 = FUNC_2(VAR_9->driver->read_csr(VAR_9, VAR_19));
  else if (VAR_11 == VAR_8)
   VAR_9->driver->write_csr(VAR_9, VAR_19, FUNC_1(*VAR_20));
  else
   VAR_21 = VAR_6;
  break;

 case 132:
  if (VAR_11 == VAR_8)
   VAR_9->driver->write_csr(VAR_9, 129,
      VAR_3);
  else
   VAR_21 = VAR_6;
  break;

 case 131:
  if (VAR_11 == VAR_7) {
   *VAR_20 = FUNC_2(VAR_9->split_timeout_hi);
  } else if (VAR_11 == VAR_8) {
   FUNC_4(&VAR_9->lock, VAR_22);
   VAR_9->split_timeout_hi = FUNC_1(*VAR_20) & 7;
   FUNC_9(VAR_9);
   FUNC_5(&VAR_9->lock, VAR_22);
  } else {
   VAR_21 = VAR_6;
  }
  break;

 case 130:
  if (VAR_11 == VAR_7) {
   *VAR_20 = FUNC_2(VAR_9->split_timeout_lo);
  } else if (VAR_11 == VAR_8) {
   FUNC_4(&VAR_9->lock, VAR_22);
   VAR_9->split_timeout_lo =
     FUNC_1(*VAR_20) & 0xfff80000;
   FUNC_9(VAR_9);
   FUNC_5(&VAR_9->lock, VAR_22);
  } else {
   VAR_21 = VAR_6;
  }
  break;

 case 135:
  if (VAR_11 == VAR_7)
   *VAR_20 = VAR_9->maint_utility_register;
  else if (VAR_11 == VAR_8)
   VAR_9->maint_utility_register = *VAR_20;
  else
   VAR_21 = VAR_6;
  break;

 case 142:
  if (VAR_11 == VAR_7)
   *VAR_20 = FUNC_2(VAR_9->broadcast_channel);
  else if (VAR_11 == VAR_8)
   VAR_9->broadcast_channel =
       (FUNC_1(*VAR_20) & VAR_1) |
       VAR_0;
  else
   VAR_21 = VAR_6;
  break;

 case 140:
 case 143:
 case 138:
 case 137:







  FUNC_0();
  break;

 default:
  VAR_21 = VAR_4;
  break;
 }

 FUNC_3(VAR_9, VAR_10, VAR_21);
}

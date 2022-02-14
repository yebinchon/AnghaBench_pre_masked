
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kcs_bmc {int data_in_avail; int error; int data_in_idx; int phase; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct kcs_bmc*) ;
 int FUNC_1 (struct kcs_bmc*) ;
 int FUNC_2 (struct kcs_bmc*,int ) ;
 int FUNC_3 (struct kcs_bmc*,int ) ;

__attribute__((used)) static void FUNC_4(struct kcs_bmc *VAR_9)
{
 u8 VAR_10;

 FUNC_2(VAR_9, VAR_8);
 FUNC_3(VAR_9, VAR_7);

 VAR_10 = FUNC_1(VAR_9);
 switch (VAR_10) {
 case 128:
  VAR_9->phase = VAR_6;
  VAR_9->error = VAR_2;
  VAR_9->data_in_avail = 0;
  VAR_9->data_in_idx = 0;
  break;

 case 129:
  if (VAR_9->phase != VAR_4) {
   FUNC_0(VAR_9);
   break;
  }

  VAR_9->phase = VAR_5;
  break;

 case 130:
  if (VAR_9->error == VAR_2)
   VAR_9->error = VAR_0;

  VAR_9->phase = VAR_3;
  VAR_9->data_in_avail = 0;
  VAR_9->data_in_idx = 0;
  break;

 default:
  FUNC_0(VAR_9);
  VAR_9->error = VAR_1;
  break;
 }
}

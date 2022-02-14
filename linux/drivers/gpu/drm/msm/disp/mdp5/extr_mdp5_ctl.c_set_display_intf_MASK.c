
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdp5_kms {int resource_lock; } ;
struct mdp5_interface {int num; int type; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct mdp5_kms*,int ) ;
 int FUNC_6 (struct mdp5_kms*,int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct mdp5_kms *VAR_5,
  struct mdp5_interface *VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8;

 FUNC_7(&VAR_5->resource_lock, VAR_7);
 VAR_8 = FUNC_5(VAR_5, VAR_4);

 switch (VAR_6->num) {
 case 0:
  VAR_8 &= ~VAR_0;
  VAR_8 |= FUNC_1(VAR_6->type);
  break;
 case 1:
  VAR_8 &= ~VAR_1;
  VAR_8 |= FUNC_2(VAR_6->type);
  break;
 case 2:
  VAR_8 &= ~VAR_2;
  VAR_8 |= FUNC_3(VAR_6->type);
  break;
 case 3:
  VAR_8 &= ~VAR_3;
  VAR_8 |= FUNC_4(VAR_6->type);
  break;
 default:
  FUNC_0();
  break;
 }

 FUNC_6(VAR_5, VAR_4, VAR_8);
 FUNC_8(&VAR_5->resource_lock, VAR_7);
}

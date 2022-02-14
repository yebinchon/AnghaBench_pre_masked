
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int lock; scalar_t__ cmd_err; } ;
struct wiimote_data {TYPE_1__ state; } ;
typedef int format ;
typedef int data_sens2 ;
typedef int data_sens1 ;
typedef int data_fin ;
typedef int data_enable ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct wiimote_data*) ;
 int FUNC_3 (struct wiimote_data*) ;
 int FUNC_4 (struct wiimote_data*,int ,int ) ;
 int FUNC_5 (struct wiimote_data*) ;
 int FUNC_6 (struct wiimote_data*,int,int const*,int) ;
 int FUNC_7 (struct wiimote_data*,int ) ;
 int FUNC_8 (struct wiimote_data*,int) ;
 int FUNC_9 (struct wiimote_data*,int) ;

__attribute__((used)) static int FUNC_10(struct wiimote_data *VAR_5, __u16 VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 __u8 VAR_9 = 0;
 static const __u8 VAR_10[] = { 0x01 };
 static const __u8 VAR_11[] = { 0x02, 0x00, 0x00, 0x71, 0x01,
      0x00, 0xaa, 0x00, 0x64 };
 static const __u8 VAR_12[] = { 0x63, 0x03 };
 static const __u8 VAR_13[] = { 0x08 };

 FUNC_0(&VAR_5->state.lock, VAR_8);

 if (VAR_6 == (VAR_5->state.flags & VAR_1)) {
  FUNC_1(&VAR_5->state.lock, VAR_8);
  return 0;
 }

 if (VAR_6 == 0) {
  VAR_5->state.flags &= ~VAR_1;
  FUNC_8(VAR_5, 0);
  FUNC_9(VAR_5, 0);
  FUNC_7(VAR_5, VAR_4);
  FUNC_1(&VAR_5->state.lock, VAR_8);
  return 0;
 }

 FUNC_1(&VAR_5->state.lock, VAR_8);

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7)
  return VAR_7;


 FUNC_0(&VAR_5->state.lock, VAR_8);
 FUNC_4(VAR_5, VAR_2, 0);
 FUNC_8(VAR_5, 0x06);
 FUNC_1(&VAR_5->state.lock, VAR_8);

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  goto unlock;
 if (VAR_5->state.cmd_err) {
  VAR_7 = -VAR_0;
  goto unlock;
 }


 FUNC_0(&VAR_5->state.lock, VAR_8);
 FUNC_4(VAR_5, VAR_3, 0);
 FUNC_9(VAR_5, 0x06);
 FUNC_1(&VAR_5->state.lock, VAR_8);

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  goto unlock;
 if (VAR_5->state.cmd_err) {
  VAR_7 = -VAR_0;
  goto unlock;
 }


 VAR_7 = FUNC_6(VAR_5, 0xb00030, VAR_10,
       sizeof(VAR_10));
 if (VAR_7)
  goto unlock;


 VAR_7 = FUNC_6(VAR_5, 0xb00000, VAR_11,
       sizeof(VAR_11));
 if (VAR_7)
  goto unlock;


 VAR_7 = FUNC_6(VAR_5, 0xb0001a, VAR_12,
       sizeof(VAR_12));
 if (VAR_7)
  goto unlock;


 switch (VAR_6) {
  case 128:
   VAR_9 = 5;
   break;
  case 129:
   VAR_9 = 3;
   break;
  case 130:
   VAR_9 = 1;
   break;
 }
 VAR_7 = FUNC_6(VAR_5, 0xb00033, &VAR_9, sizeof(VAR_9));
 if (VAR_7)
  goto unlock;


 VAR_7 = FUNC_6(VAR_5, 0xb00030, VAR_13, sizeof(VAR_13));
 if (VAR_7)
  goto unlock;


 FUNC_0(&VAR_5->state.lock, VAR_8);
 VAR_5->state.flags &= ~VAR_1;
 VAR_5->state.flags |= VAR_6 & VAR_1;
 FUNC_7(VAR_5, VAR_4);
 FUNC_1(&VAR_5->state.lock, VAR_8);

unlock:
 FUNC_3(VAR_5);
 return VAR_7;
}

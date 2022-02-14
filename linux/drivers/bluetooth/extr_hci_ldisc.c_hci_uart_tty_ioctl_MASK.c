
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct hci_uart* disc_data; } ;
struct hci_uart {int hdev_flags; int flags; TYPE_2__* hdev; TYPE_1__* proto; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_uart*,unsigned long) ;
 int FUNC_3 (struct hci_uart*,unsigned long) ;
 int FUNC_4 (struct tty_struct*,struct file*,unsigned int,unsigned long) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_5, struct file *VAR_6,
         unsigned int VAR_7, unsigned long VAR_8)
{
 struct hci_uart *VAR_9 = VAR_5->disc_data;
 int VAR_10 = 0;

 FUNC_0("");


 if (!VAR_9)
  return -VAR_0;

 switch (VAR_7) {
 case 128:
  if (!FUNC_5(VAR_3, &VAR_9->flags)) {
   VAR_10 = FUNC_3(VAR_9, VAR_8);
   if (VAR_10)
    FUNC_1(VAR_3, &VAR_9->flags);
  } else
   VAR_10 = -VAR_1;
  break;

 case 130:
  if (FUNC_6(VAR_3, &VAR_9->flags))
   VAR_10 = VAR_9->proto->id;
  else
   VAR_10 = -VAR_2;
  break;

 case 132:
  if (FUNC_6(VAR_4, &VAR_9->flags))
   VAR_10 = VAR_9->hdev->id;
  else
   VAR_10 = -VAR_2;
  break;

 case 129:
  if (FUNC_6(VAR_3, &VAR_9->flags))
   VAR_10 = -VAR_1;
  else
   VAR_10 = FUNC_2(VAR_9, VAR_8);
  break;

 case 131:
  VAR_10 = VAR_9->hdev_flags;
  break;

 default:
  VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8);
  break;
 }

 return VAR_10;
}

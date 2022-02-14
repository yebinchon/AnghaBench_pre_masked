
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca_data {int flags; int drop_ev_comp; } ;
struct hci_uart {int hdev; struct qca_data* priv; } ;
typedef enum qca_speed_type { ____Placeholder_qca_speed_type } qca_speed_type ;
typedef enum qca_btsoc_type { ____Placeholder_qca_btsoc_type } qca_btsoc_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct hci_uart*,int) ;
 int FUNC_4 (struct hci_uart*,unsigned int) ;
 int FUNC_5 (int) ;
 unsigned int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 (struct hci_uart*,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,unsigned int) ;
 int FUNC_10 (struct hci_uart*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static int FUNC_14(struct hci_uart *VAR_5, enum qca_speed_type VAR_6)
{
 unsigned int VAR_7, VAR_8;
 struct qca_data *VAR_9 = VAR_5->priv;
 int VAR_10 = 0;

 if (VAR_6 == VAR_2) {
  VAR_7 = FUNC_7(VAR_5, VAR_2);
  if (VAR_7)
   FUNC_4(VAR_5, VAR_7);
 } else {
  enum qca_btsoc_type VAR_11 = FUNC_10(VAR_5);

  VAR_7 = FUNC_7(VAR_5, VAR_3);
  if (!VAR_7)
   return 0;




  if (FUNC_8(VAR_11))
   FUNC_3(VAR_5, 1);

  if (VAR_11 == VAR_4) {
   FUNC_11(&VAR_9->drop_ev_comp);
   FUNC_12(VAR_1, &VAR_9->flags);
  }

  VAR_8 = FUNC_6(VAR_7);
  FUNC_0(VAR_5->hdev, "Set UART speed to %d", VAR_7);
  VAR_10 = FUNC_9(VAR_5->hdev, VAR_8);
  if (VAR_10)
   goto error;

  FUNC_4(VAR_5, VAR_7);

error:
  if (FUNC_8(VAR_11))
   FUNC_3(VAR_5, 0);

  if (VAR_11 == VAR_4) {



   if (!FUNC_13(&VAR_9->drop_ev_comp,
       FUNC_5(100))) {
    FUNC_1(VAR_5->hdev,
        "Failed to change controller baudrate\n");
    VAR_10 = -VAR_0;
   }

   FUNC_2(VAR_1, &VAR_9->flags);
  }
 }

 return VAR_10;
}

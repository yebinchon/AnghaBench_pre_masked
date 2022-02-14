
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bt3c_info {int lock; int tx_state; int hdev; TYPE_2__* p_dev; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__** resource; } ;
struct TYPE_3__ {unsigned int start; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,int,int) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (struct bt3c_info*) ;
 int FUNC_4 (struct bt3c_info*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_4, void *VAR_5)
{
 struct bt3c_info *VAR_6 = VAR_5;
 unsigned int VAR_7;
 int VAR_8;
 irqreturn_t VAR_9 = VAR_2;

 if (!VAR_6 || !VAR_6->hdev)

  return VAR_2;

 VAR_7 = VAR_6->p_dev->resource[0]->start;

 FUNC_9(&(VAR_6->lock));

 VAR_8 = FUNC_7(VAR_7 + VAR_0);
 if (VAR_8 & 0x80) {
  int VAR_10 = FUNC_2(VAR_7, 0x7001);

  if ((VAR_10 & 0xff) == 0x7f) {
   FUNC_0("Very strange (stat=0x%04x)", VAR_10);
  } else if ((VAR_10 & 0xff) != 0xff) {
   if (VAR_10 & 0x0020) {
    int VAR_11 = FUNC_2(VAR_7, 0x7002) & 0x10;
    FUNC_5(VAR_6->hdev, "Antenna %s",
       VAR_11 ? "out" : "in");
   }
   if (VAR_10 & 0x0001)
    FUNC_3(VAR_6);
   if (VAR_10 & 0x0002) {
    FUNC_6(VAR_3, &(VAR_6->tx_state));
    FUNC_4(VAR_6);
   }

   FUNC_1(VAR_7, 0x7001, 0x0000);

   FUNC_8(VAR_8, VAR_7 + VAR_0);
  }
  VAR_9 = VAR_1;
 }

 FUNC_10(&(VAR_6->lock));

 return VAR_9;
}

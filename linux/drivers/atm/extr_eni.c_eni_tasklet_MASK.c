
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct eni_dev {int tx_wait; int lock; int events; } ;
struct atm_dev {int dummy; } ;


 int FUNC_0 (char*,struct atm_dev*) ;
 struct eni_dev* FUNC_1 (struct atm_dev*) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct atm_dev*,int) ;
 int FUNC_4 (struct atm_dev*) ;
 int FUNC_5 (struct atm_dev*) ;
 int FUNC_6 (struct atm_dev*) ;
 int FUNC_7 (struct atm_dev*) ;
 int FUNC_8 (struct atm_dev*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int VAR_7 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void FUNC_13(unsigned long VAR_8)
{
 struct atm_dev *VAR_9 = (struct atm_dev *) VAR_8;
 struct eni_dev *VAR_10 = FUNC_1(VAR_9);
 unsigned long VAR_11;
 u32 VAR_12;

 FUNC_0("eni_tasklet (dev %p)\n",VAR_9);
 FUNC_9(&VAR_10->lock,VAR_11);
 VAR_12 = FUNC_12(&VAR_10->events,0);
 FUNC_10(&VAR_10->lock,VAR_11);
 if (VAR_12 & VAR_1) {
  FUNC_2("INT: RX DMA complete, starting dequeue_rx\n",0,0);
  FUNC_4(VAR_9);
  FUNC_2("dequeue_rx done, starting poll_rx\n",0,0);
  FUNC_7(VAR_9);
  FUNC_2("poll_rx done\n",0,0);

 }
 if (VAR_12 & VAR_2) {
  FUNC_2("INT: service, starting get_service\n",0,0);
  FUNC_6(VAR_9);
  FUNC_2("get_service done, starting poll_rx\n",0,0);
  FUNC_7(VAR_9);
  FUNC_2("poll_rx done\n",0,0);
 }
  if (VAR_12 & VAR_4) {
  FUNC_2("INT: TX DMA COMPLETE\n",0,0);
  FUNC_5(VAR_9);
 }
 if (VAR_12 & VAR_3) {
  FUNC_2("INT: TX COMPLETE\n",0,0);
  VAR_7++;
  FUNC_11(&VAR_10->tx_wait);

 }
 if (VAR_12 & (VAR_0 | VAR_6 | VAR_5)) {
  FUNC_2("bug interrupt\n",0,0);
  FUNC_3(VAR_9,VAR_12);
 }
 FUNC_8(VAR_9);
}

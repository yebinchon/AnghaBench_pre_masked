
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ch_qset_params {int qnum; int* txq_size; int rspq_size; int* fl_size; int cong_thres; int intr_lat; int vector; scalar_t__ qset_idx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ,struct ch_qset_params*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3)
{
 struct ch_qset_params VAR_4;

 VAR_4.qset_idx = 0;

 while (FUNC_0(VAR_3, VAR_0, &VAR_4) == 0) {
  if (!VAR_4.qset_idx)
   FUNC_2("Qset   TxQ0   TxQ1   TxQ2   RspQ   RxQ0   RxQ1"
          "  Cong  Lat   IRQ\n");
  FUNC_2("%4u %6u %6u %6u %6u %6u %6u %5u %4u %5d\n",
         VAR_4.qnum,
         VAR_4.txq_size[0], VAR_4.txq_size[1], VAR_4.txq_size[2],
         VAR_4.rspq_size, VAR_4.fl_size[0], VAR_4.fl_size[1],
         VAR_4.cong_thres, VAR_4.intr_lat, VAR_4.vector);
  VAR_4.qset_idx++;
 }
 if (!VAR_4.qset_idx || (VAR_2 && VAR_2 != VAR_1))
  FUNC_1(1, "get qset parameters");
 return 0;
}

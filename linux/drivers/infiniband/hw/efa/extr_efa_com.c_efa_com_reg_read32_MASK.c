
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct efa_com_mmio_read {int seq_num; int lock; int mmio_read_timeout; struct efa_admin_mmio_req_read_less_resp* read_resp; } ;
struct efa_com_dev {int efa_dev; scalar_t__ reg_bar; struct efa_com_mmio_read mmio_read; } ;
struct efa_admin_mmio_req_read_less_resp {int req_id; int reg_off; int reg_val; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 unsigned long VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (int) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static u32 FUNC_8(struct efa_com_dev *VAR_6, u16 VAR_7)
{
 struct efa_com_mmio_read *VAR_8 = &VAR_6->mmio_read;
 struct efa_admin_mmio_req_read_less_resp *VAR_9;
 unsigned long VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 VAR_9 = VAR_8->read_resp;

 FUNC_2(&VAR_8->lock);
 VAR_8->seq_num++;


 VAR_9->req_id = VAR_8->seq_num + 0x9aL;
 VAR_11 = (VAR_7 << VAR_3) &
   VAR_2;
 VAR_11 |= VAR_8->seq_num &
    VAR_4;

 FUNC_7(VAR_11, VAR_6->reg_bar + VAR_1);

 VAR_10 = VAR_5 + FUNC_6(VAR_8->mmio_read_timeout);
 do {
  if (FUNC_0(VAR_9->req_id) == VAR_8->seq_num)
   break;
  FUNC_5(1);
 } while (FUNC_4(VAR_10));

 if (VAR_9->req_id != VAR_8->seq_num) {
  FUNC_1(
   VAR_6->efa_dev,
   "Reading register timed out. expected: req id[%u] offset[%#x] actual: req id[%u] offset[%#x]\n",
   VAR_8->seq_num, VAR_7, VAR_9->req_id,
   VAR_9->reg_off);
  VAR_12 = VAR_0;
  goto out;
 }

 if (VAR_9->reg_off != VAR_7) {
  FUNC_1(
   VAR_6->efa_dev,
   "Reading register failed: wrong offset provided\n");
  VAR_12 = VAR_0;
  goto out;
 }

 VAR_12 = VAR_9->reg_val;
out:
 FUNC_3(&VAR_8->lock);
 return VAR_12;
}

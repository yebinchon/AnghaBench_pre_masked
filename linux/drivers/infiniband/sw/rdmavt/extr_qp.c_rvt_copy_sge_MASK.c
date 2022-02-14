
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rvt_wss {int dummy; } ;
struct rvt_sge {scalar_t__ vaddr; } ;
struct rvt_sge_state {struct rvt_sge sge; } ;
struct TYPE_3__ {int device; } ;
struct rvt_qp {TYPE_1__ ibqp; } ;
struct TYPE_4__ {unsigned int sge_copy_mode; } ;
struct rvt_dev_info {TYPE_2__ dparms; struct rvt_wss* wss; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,void*,int) ;
 struct rvt_dev_info* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,void*,int) ;
 int FUNC_4 (struct rvt_sge*,int) ;
 int FUNC_5 (struct rvt_sge_state*,int,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct rvt_wss*) ;
 int FUNC_8 (struct rvt_wss*) ;
 int FUNC_9 (struct rvt_wss*,scalar_t__) ;

void FUNC_10(struct rvt_qp *VAR_3, struct rvt_sge_state *VAR_4,
    void *VAR_5, u32 VAR_6,
    bool VAR_7, bool VAR_8)
{
 struct rvt_sge *VAR_9 = &VAR_4->sge;
 int VAR_10;
 bool VAR_11 = 0;
 bool VAR_12 = 0;
 struct rvt_dev_info *VAR_13 = FUNC_2(VAR_3->ibqp.device);
 struct rvt_wss *VAR_14 = VAR_13->wss;
 unsigned int VAR_15 = VAR_13->dparms.sge_copy_mode;

 if (VAR_15 == VAR_2) {
  VAR_12 = VAR_6 >= VAR_0;
 } else if (VAR_15 == VAR_1) {
  if (VAR_6 >= VAR_0) {





   FUNC_9(VAR_14, VAR_9->vaddr);
   if (VAR_6 >= (2 * VAR_0))
    FUNC_9(VAR_14, (VAR_9->vaddr + VAR_0));

   VAR_12 = FUNC_8(VAR_14);
  } else {
   FUNC_7(VAR_14);
  }
 }

 if (VAR_8) {
  if (VAR_6 > 8) {
   VAR_6 -= 8;
  } else {
   VAR_8 = 0;
   VAR_11 = 1;
  }
 }

again:
 while (VAR_6) {
  u32 VAR_16 = FUNC_4(VAR_9, VAR_6);

  FUNC_0(VAR_16 == 0);
  if (FUNC_6(VAR_11)) {

   for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++)
    ((u8 *)VAR_9->vaddr)[VAR_10] = ((u8 *)VAR_5)[VAR_10];
  } else if (VAR_12) {
   FUNC_1(VAR_9->vaddr, VAR_5, VAR_16);
  } else {
   FUNC_3(VAR_9->vaddr, VAR_5, VAR_16);
  }
  FUNC_5(VAR_4, VAR_16, VAR_7);
  VAR_5 += VAR_16;
  VAR_6 -= VAR_16;
 }

 if (VAR_8) {
  VAR_8 = 0;
  VAR_11 = 1;
  VAR_6 = 8;
  goto again;
 }
}

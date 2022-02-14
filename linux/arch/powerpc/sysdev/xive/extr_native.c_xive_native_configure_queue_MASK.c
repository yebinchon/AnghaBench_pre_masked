
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct xive_q {unsigned int msk; int * qpage; int esc_irq; int eoi_phys; scalar_t__ toggle; scalar_t__ idx; } ;
typedef int s64 ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_6 (int ,int ,int,int ,int) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 () ;

int FUNC_9(u32 VAR_7, struct xive_q *VAR_8, u8 VAR_9,
    __be32 *VAR_10, u32 VAR_11, bool VAR_12)
{
 s64 VAR_13 = 0;
 __be64 VAR_14;
 __be32 VAR_15;
 u64 VAR_16, VAR_17;


 if (VAR_11) {
  if (FUNC_0(!VAR_10))
   return -VAR_0;
  VAR_17 = FUNC_1(VAR_10);
 } else
  VAR_17 = 0;


 VAR_8->msk = VAR_11 ? ((1u << (VAR_11 - 2)) - 1) : 0;
 VAR_8->idx = 0;
 VAR_8->toggle = 0;

 VAR_13 = FUNC_5(VAR_7, VAR_9, ((void*)0), ((void*)0),
          &VAR_14,
          &VAR_15,
          ((void*)0));
 if (VAR_13) {
  FUNC_7("Error %lld getting queue info prio %d\n", VAR_13, VAR_9);
  VAR_13 = -VAR_1;
  goto fail;
 }
 VAR_8->eoi_phys = FUNC_3(VAR_14);


 VAR_16 = VAR_4 | VAR_5;


 if (VAR_12) {
  VAR_8->esc_irq = FUNC_2(VAR_15);
  VAR_16 |= VAR_6;
 }


 for (;;) {
  VAR_13 = FUNC_6(VAR_7, VAR_9, VAR_17, VAR_11, VAR_16);
  if (VAR_13 != VAR_2)
   break;
  FUNC_4(VAR_3);
 }
 if (VAR_13) {
  FUNC_7("Error %lld setting queue for prio %d\n", VAR_13, VAR_9);
  VAR_13 = -VAR_1;
 } else {




  FUNC_8();
  VAR_8->qpage = VAR_10;
 }
fail:
 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct xive_q {unsigned int msk; unsigned long eoi_phys; int * qpage; scalar_t__ toggle; scalar_t__ idx; } ;
typedef int s64 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,unsigned long*,unsigned long*) ;
 int FUNC_3 (scalar_t__,int ,int ,scalar_t__,int ) ;
 int FUNC_4 (char*,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(u32 VAR_3, struct xive_q *VAR_4, u8 VAR_5,
       __be32 *VAR_6, u32 VAR_7)
{
 s64 VAR_8 = 0;
 unsigned long VAR_9;
 unsigned long VAR_10;
 u64 VAR_11, VAR_12;


 if (VAR_7) {
  if (FUNC_0(!VAR_6))
   return -VAR_0;
  VAR_12 = FUNC_1(VAR_6);
 } else {
  VAR_12 = 0;
 }


 VAR_4->msk = VAR_7 ? ((1u << (VAR_7 - 2)) - 1) : 0;
 VAR_4->idx = 0;
 VAR_4->toggle = 0;

 VAR_8 = FUNC_2(0, VAR_3, VAR_5, &VAR_9, &VAR_10);
 if (VAR_8) {
  FUNC_4("Error %lld getting queue info CPU %d prio %d\n", VAR_8,
         VAR_3, VAR_5);
  VAR_8 = -VAR_1;
  goto fail;
 }


 VAR_4->eoi_phys = VAR_9;


 VAR_11 = VAR_2;


 VAR_8 = FUNC_3(VAR_11, VAR_3, VAR_5, VAR_12, VAR_7);
 if (VAR_8) {
  FUNC_4("Error %lld setting queue for CPU %d prio %d\n", VAR_8,
         VAR_3, VAR_5);
  VAR_8 = -VAR_1;
 } else {
  VAR_4->qpage = VAR_6;
 }
fail:
 return VAR_8;
}

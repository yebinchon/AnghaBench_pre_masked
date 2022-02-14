
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ipu_soc {int lock; } ;
struct TYPE_4__ {int mask; int reg; } ;
struct TYPE_3__ {int mask; int reg; } ;
struct fsu_link_info {TYPE_2__ sink; TYPE_1__ src; } ;


 int VAR_0 ;
 struct fsu_link_info* FUNC_0 (int,int) ;
 int FUNC_1 (struct ipu_soc*,int ) ;
 int FUNC_2 (struct ipu_soc*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct ipu_soc *VAR_1, int VAR_2, int VAR_3)
{
 const struct fsu_link_info *VAR_4;
 u32 VAR_5, VAR_6;
 unsigned long VAR_7;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(&VAR_1->lock, VAR_7);

 if (VAR_4->src.mask) {
  VAR_5 = FUNC_1(VAR_1, VAR_4->src.reg);
  VAR_5 &= ~VAR_4->src.mask;
  FUNC_2(VAR_1, VAR_5, VAR_4->src.reg);
 }

 if (VAR_4->sink.mask) {
  VAR_6 = FUNC_1(VAR_1, VAR_4->sink.reg);
  VAR_6 &= ~VAR_4->sink.mask;
  FUNC_2(VAR_1, VAR_6, VAR_4->sink.reg);
 }

 FUNC_4(&VAR_1->lock, VAR_7);
 return 0;
}

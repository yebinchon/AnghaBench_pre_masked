
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun6i_pchan {scalar_t__ base; int idx; } ;
struct TYPE_2__ {int dev; } ;
struct sun6i_dma_dev {TYPE_1__ slave; } ;
typedef int phys_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,int ,int *,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct sun6i_dma_dev *VAR_8,
         struct sun6i_pchan *VAR_9)
{
 phys_addr_t VAR_10 = FUNC_2(VAR_9->base);

 FUNC_0(VAR_8->slave.dev, "Chan %d reg: %pa\n"
  "\t___en(%04x): \t0x%08x\n"
  "\tpause(%04x): \t0x%08x\n"
  "\tstart(%04x): \t0x%08x\n"
  "\t__cfg(%04x): \t0x%08x\n"
  "\t__src(%04x): \t0x%08x\n"
  "\t__dst(%04x): \t0x%08x\n"
  "\tcount(%04x): \t0x%08x\n"
  "\t_para(%04x): \t0x%08x\n\n",
  VAR_9->idx, &VAR_10,
  VAR_5,
  FUNC_1(VAR_9->base + VAR_5),
  VAR_7,
  FUNC_1(VAR_9->base + VAR_7),
  VAR_6,
  FUNC_1(VAR_9->base + VAR_6),
  VAR_0,
  FUNC_1(VAR_9->base + VAR_0),
  VAR_4,
  FUNC_1(VAR_9->base + VAR_4),
  VAR_2,
  FUNC_1(VAR_9->base + VAR_2),
  VAR_1,
  FUNC_1(VAR_9->base + VAR_1),
  VAR_3,
  FUNC_1(VAR_9->base + VAR_3));
}

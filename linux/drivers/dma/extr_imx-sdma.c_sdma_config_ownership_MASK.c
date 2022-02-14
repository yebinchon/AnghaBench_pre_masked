
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {scalar_t__ regs; } ;
struct sdma_channel {int channel; struct sdma_engine* sdma; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (int,unsigned long*) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct sdma_channel *VAR_4,
  bool VAR_5, bool VAR_6, bool VAR_7)
{
 struct sdma_engine *VAR_8 = VAR_4->sdma;
 int VAR_9 = VAR_4->channel;
 unsigned long VAR_10, VAR_11, VAR_12;

 if (VAR_5 && VAR_6 && VAR_7)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_8->regs + VAR_2);
 VAR_11 = FUNC_2(VAR_8->regs + VAR_3);
 VAR_12 = FUNC_2(VAR_8->regs + VAR_1);

 if (VAR_7)
  FUNC_0(VAR_9, &VAR_12);
 else
  FUNC_1(VAR_9, &VAR_12);

 if (VAR_5)
  FUNC_0(VAR_9, &VAR_10);
 else
  FUNC_1(VAR_9, &VAR_10);

 if (VAR_6)
  FUNC_0(VAR_9, &VAR_11);
 else
  FUNC_1(VAR_9, &VAR_11);

 FUNC_3(VAR_10, VAR_8->regs + VAR_2);
 FUNC_3(VAR_11, VAR_8->regs + VAR_3);
 FUNC_3(VAR_12, VAR_8->regs + VAR_1);

 return 0;
}

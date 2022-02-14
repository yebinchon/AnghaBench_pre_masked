
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_channel {int flags; int chan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct dma_channel *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 VAR_6 = FUNC_0(FUNC_2(VAR_4->chan) + VAR_0);
 VAR_6 |= VAR_1;

 if (VAR_4->flags & VAR_3)
  VAR_6 |= VAR_2;

 FUNC_1(VAR_6, (FUNC_2(VAR_4->chan) + VAR_0));

 if (VAR_4->flags & VAR_3) {
  VAR_5 = FUNC_4(VAR_4->chan);
  FUNC_3(VAR_5);
 }
}

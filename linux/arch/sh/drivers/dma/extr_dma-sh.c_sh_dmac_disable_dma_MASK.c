
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
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct dma_channel *VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 if (VAR_5->flags & VAR_4) {
  VAR_6 = FUNC_4(VAR_5->chan);
  FUNC_2(VAR_6);
 }

 VAR_7 = FUNC_0(FUNC_3(VAR_5->chan) + VAR_0);
 VAR_7 &= ~(VAR_1 | VAR_3 | VAR_2);
 FUNC_1(VAR_7, (FUNC_3(VAR_5->chan) + VAR_0));
}

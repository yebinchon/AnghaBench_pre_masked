
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_channel {int flags; int sar; scalar_t__ chan; int dar; int count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct dma_channel*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct dma_channel*,int ) ;
 int FUNC_5 (struct dma_channel*) ;
 int FUNC_6 (struct dma_channel*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct dma_channel *VAR_5)
{




 if (FUNC_7(!(VAR_5->flags & VAR_1)))
  FUNC_4(VAR_5, 0);

 FUNC_5(VAR_5);
 if (VAR_5->sar || (FUNC_3() &&
     VAR_5->chan == VAR_2))
  FUNC_0(VAR_5->sar, (FUNC_2(VAR_5->chan) + VAR_3));
 if (VAR_5->dar || (FUNC_3() &&
     VAR_5->chan == VAR_2))
  FUNC_0(VAR_5->dar, (FUNC_2(VAR_5->chan) + VAR_0));

 FUNC_0(VAR_5->count >> FUNC_1(VAR_5),
  (FUNC_2(VAR_5->chan) + VAR_4));

 FUNC_6(VAR_5);

 return 0;
}

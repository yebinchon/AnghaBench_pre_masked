
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_channel {int flags; int chan; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct dma_channel *VAR_5, unsigned long VAR_6)
{
 if (!VAR_6)
  VAR_6 = VAR_4 | VAR_1;

 if (VAR_6 & VAR_1) {
  VAR_6 &= ~VAR_1;
  VAR_5->flags |= VAR_3;
 } else {
  VAR_5->flags &= ~VAR_3;
 }

 FUNC_0(VAR_6, (FUNC_1(VAR_5->chan) + VAR_0));

 VAR_5->flags |= VAR_2;
 return 0;
}

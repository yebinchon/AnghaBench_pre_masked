
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct armada_crtc {int irq_ena; int crtc; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct armada_crtc*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct armada_crtc *VAR_8 = VAR_7;
 u32 VAR_9, VAR_10 = FUNC_1(VAR_8->base + VAR_4);






 FUNC_3(0, VAR_8->base + VAR_4);

 FUNC_2(&VAR_8->crtc, VAR_10);


 VAR_9 = VAR_10 & VAR_8->irq_ena;

 if (VAR_9 & (VAR_5|VAR_1|VAR_0)) {
  FUNC_0(VAR_8, VAR_10);
  return VAR_2;
 }
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mixer_context {int reg_slock; TYPE_1__* crtc; int flags; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mixer_context*) ;
 int FUNC_2 (struct mixer_context*,int ) ;
 int FUNC_3 (struct mixer_context*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct mixer_context *VAR_7 = VAR_6;
 u32 VAR_8;

 FUNC_4(&VAR_7->reg_slock);


 VAR_8 = FUNC_2(VAR_7, VAR_3);


 if (VAR_8 & VAR_4) {

  VAR_8 |= VAR_2;
  VAR_8 &= ~VAR_4;


  if (FUNC_6(VAR_1, &VAR_7->flags)
      && !FUNC_1(VAR_7))
   goto out;

  FUNC_0(&VAR_7->crtc->base);
 }

out:

 FUNC_3(VAR_7, VAR_3, VAR_8);

 FUNC_5(&VAR_7->reg_slock);

 return VAR_0;
}

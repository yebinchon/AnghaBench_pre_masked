
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned short cwd; unsigned short swd; unsigned short mxcsr; } ;
struct TYPE_4__ {scalar_t__ swd; scalar_t__ cwd; } ;
struct TYPE_6__ {TYPE_2__ fxsave; TYPE_1__ fsave; } ;
struct fpu {TYPE_3__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct fpu *VAR_9, int VAR_10)
{
 int VAR_11;

 if (VAR_10 == VAR_8) {
  unsigned short VAR_12, VAR_13;
  if (FUNC_0(VAR_6)) {
   VAR_12 = VAR_9->state.fxsave.cwd;
   VAR_13 = VAR_9->state.fxsave.swd;
  } else {
   VAR_12 = (unsigned short)VAR_9->state.fsave.cwd;
   VAR_13 = (unsigned short)VAR_9->state.fsave.swd;
  }

  VAR_11 = VAR_13 & ~VAR_12;
 } else {






  unsigned short VAR_14 = VAR_5;

  if (FUNC_0(VAR_7))
   VAR_14 = VAR_9->state.fxsave.mxcsr;

  VAR_11 = ~(VAR_14 >> 7) & VAR_14;
 }

 if (VAR_11 & 0x001) {





  return VAR_1;
 } else if (VAR_11 & 0x004) {
  return VAR_0;
 } else if (VAR_11 & 0x008) {
  return VAR_2;
 } else if (VAR_11 & 0x012) {
  return VAR_4;
 } else if (VAR_11 & 0x020) {
  return VAR_3;
 }






 return 0;
}

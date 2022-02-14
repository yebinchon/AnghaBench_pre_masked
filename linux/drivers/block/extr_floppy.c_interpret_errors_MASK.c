
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int reporting; } ;
struct TYPE_10__ {int flags; TYPE_1__ max_errors; } ;
struct TYPE_9__ {int track; int flags; } ;
struct TYPE_8__ {int reset; } ;
struct TYPE_7__ {int (* error ) () ;int (* done ) (int ) ;} ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,int *) ;
 TYPE_2__* VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void)
{
 char VAR_20;

 if (VAR_19 != 7) {
  FUNC_0("-- FDC reply error\n");
  VAR_2->reset = 1;
  return 1;
 }


 switch (VAR_7 & VAR_8) {
 case 0x40:
  if (VAR_9 & VAR_10)
   return 0;
  VAR_20 = 1;
  if (VAR_9 & VAR_13) {
   FUNC_0("Drive is write protected\n");
   FUNC_1(VAR_3, &VAR_1->flags);
   VAR_17->done(0);
   VAR_20 = 2;
  } else if (VAR_9 & VAR_11) {
   FUNC_3(VAR_4, &VAR_1->flags);
  } else if (VAR_9 & VAR_12) {
   if (VAR_0->flags & VAR_5)
    FUNC_0("Over/Underrun - retrying\n");
   VAR_20 = 0;
  } else if (*VAR_18 >= VAR_0->max_errors.reporting) {
   FUNC_2();
  }
  if (VAR_14 & VAR_16 || VAR_14 & VAR_15)

   VAR_1->track = VAR_6;
  return VAR_20;
 case 0x80:
  FUNC_0("Invalid FDC command given!\n");
  VAR_17->done(0);
  return 2;
 case 0xc0:
  FUNC_0("Abnormal termination caused by polling\n");
  VAR_17->error();
  return 2;
 default:
  return 0;
 }
}

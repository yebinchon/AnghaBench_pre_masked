
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct clocksource {int dummy; } ;
struct TYPE_4__ {int pcdr; } ;
struct TYPE_3__ {int msr; int t1cr_omr; unsigned char t1msb; unsigned char t1lsb; } ;
typedef TYPE_1__* RtcPtr_t ;
typedef TYPE_2__* PitRegsPtr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static u64 FUNC_3(struct clocksource *VAR_6)
{
    unsigned long VAR_7;
    volatile RtcPtr_t VAR_8 = (RtcPtr_t)VAR_1;
    volatile PitRegsPtr VAR_9 = (PitRegsPtr)VAR_0;
    unsigned char VAR_10, VAR_11;
    unsigned char VAR_12, VAR_13;
    u32 VAR_14 = 800000, VAR_15;

    FUNC_2(VAR_7);

    VAR_10 = VAR_8->msr & 0xc0;
    VAR_8->msr = 0;

    do {
 VAR_15 = VAR_14;
 VAR_12 = VAR_8->msr & 0x20;
 VAR_13 = VAR_9->pcdr & 0x04;
 VAR_8->t1cr_omr |= 0x40;
 VAR_11 = VAR_8->t1msb;
 VAR_14 = (VAR_11 << 8) | VAR_8->t1lsb;
    } while (VAR_12 != (VAR_8->msr & 0x20) ||
  VAR_13 != (VAR_9->pcdr & 0x04) ||
   FUNC_0(VAR_15-VAR_14) > 80 ||
    VAR_14 > VAR_2 - (VAR_2 / 100));

    VAR_14 = VAR_2 - VAR_14;
    if (!VAR_13)
 VAR_14 += VAR_3 / 2;
    if (VAR_11 > 0 && VAR_12)
 VAR_4 = VAR_3;
    VAR_8->msr = VAR_10;

    VAR_14 += VAR_4 + VAR_5;

    FUNC_1(VAR_7);

    return VAR_14;
}

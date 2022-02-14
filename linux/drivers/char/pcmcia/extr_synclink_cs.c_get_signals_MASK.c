
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int serial_signals; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(MGSLPC_INFO *VAR_15)
{
 unsigned char VAR_16 = 0;


 VAR_15->serial_signals &= VAR_13 | VAR_11;

 if (FUNC_0(VAR_15, VAR_3 + VAR_14) & VAR_1)
  VAR_15->serial_signals |= VAR_9;
 if (FUNC_0(VAR_15, VAR_3 + VAR_7) & VAR_0)
  VAR_15->serial_signals |= VAR_8;

 VAR_16 = FUNC_0(VAR_15, VAR_2 + VAR_4);
 if (!(VAR_16 & VAR_6))
  VAR_15->serial_signals |= VAR_12;
 if (!(VAR_16 & VAR_5))
  VAR_15->serial_signals |= VAR_10;
}

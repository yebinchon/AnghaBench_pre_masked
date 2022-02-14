
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * buffer; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

void FUNC_4(void)
{
 if (VAR_6 != 0)
 {
  FUNC_0("Closing SDL audio playback device...\n");
  FUNC_1(VAR_6);
  FUNC_0("SDL audio playback device closed.\n");
  VAR_6 = 0;
 }
 FUNC_2(VAR_0);
 FUNC_3(VAR_1.buffer);
 VAR_1.buffer = ((void*)0);
 VAR_2 = VAR_3 = 0;
 VAR_7 = VAR_4;
 FUNC_0("SDL audio shut down.\n");
}

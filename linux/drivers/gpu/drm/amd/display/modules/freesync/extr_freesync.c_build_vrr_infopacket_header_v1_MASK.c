
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_info_packet {int hb0; int hb1; int hb2; int hb3; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(enum signal_type VAR_1,
  struct dc_info_packet *VAR_2,
  unsigned int *VAR_3)
{
 if (FUNC_1(VAR_1)) {






  VAR_2->hb0 = VAR_0;


  VAR_2->hb1 = 0x01;


  VAR_2->hb2 = 0x08;

  *VAR_3 = 0x08;

 } else if (FUNC_0(VAR_1)) {






  VAR_2->hb0 = 0x00;




  VAR_2->hb1 = VAR_0;




  VAR_2->hb2 = 0x1B;




  VAR_2->hb3 = 0x04;

  *VAR_3 = 0x1B;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;



 int FUNC_3 (char*) ;

__attribute__((used)) static bool FUNC_4(u16 VAR_0, u8 VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_0);
 bool VAR_3 = 1;

 if (!FUNC_1(VAR_0))
  return 0;

 if (VAR_2 == 0x2)
  FUNC_3("during a linefill from L2.\n");
 else if (VAR_2 == 0x1) {
  switch (FUNC_2(VAR_0)) {
  case 129:
   FUNC_3("Parity error during data load.\n");
   break;

  case 130:
   FUNC_3("Copyback Parity/Victim error.\n");
   break;

  case 128:
   FUNC_3("Tag Snoop error.\n");
   break;

  default:
   VAR_3 = 0;
   break;
  }
 } else
  VAR_3 = 0;

 return VAR_3;
}

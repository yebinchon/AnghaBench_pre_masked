
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int buf ;
typedef int HCFILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,char*) ;
 size_t FUNC_2 (int*,int,int,int *) ;

bool FUNC_3 (const char *VAR_0)
{
  u8 VAR_1[8] = { 0 };

  HCFILE VAR_2;

  if (FUNC_1 (&VAR_2, VAR_0, "rb") == 0) return 0;

  const size_t VAR_3 = FUNC_2 (VAR_1, 1, sizeof (VAR_1), &VAR_2);

  FUNC_0 (&VAR_2);

  if (VAR_3 < 1) return 0;





  if ((VAR_1[0] == 0xef)
   && (VAR_1[1] == 0xbb)
   && (VAR_1[2] == 0xbf)) return 1;



  if ((VAR_1[0] == 0xfe)
   && (VAR_1[1] == 0xff)) return 1;

  if ((VAR_1[0] == 0xff)
   && (VAR_1[1] == 0xfe)) return 1;



  if ((VAR_1[0] == 0x00)
   && (VAR_1[1] == 0x00)
   && (VAR_1[2] == 0xfe)
   && (VAR_1[3] == 0xff)) return 1;

  if ((VAR_1[0] == 0xff)
   && (VAR_1[1] == 0xfe)
   && (VAR_1[2] == 0x00)
   && (VAR_1[3] == 0x00)) return 1;



  if ((VAR_1[0] == 0x2b)
   && (VAR_1[1] == 0x2f)
   && (VAR_1[2] == 0x76)
   && (VAR_1[3] == 0x38)) return 1;

  if ((VAR_1[0] == 0x2b)
   && (VAR_1[1] == 0x2f)
   && (VAR_1[2] == 0x76)
   && (VAR_1[3] == 0x39)) return 1;

  if ((VAR_1[0] == 0x2b)
   && (VAR_1[1] == 0x2f)
   && (VAR_1[2] == 0x76)
   && (VAR_1[3] == 0x2b)) return 1;

  if ((VAR_1[0] == 0x2b)
   && (VAR_1[1] == 0x2f)
   && (VAR_1[2] == 0x76)
   && (VAR_1[3] == 0x2f)) return 1;

  if ((VAR_1[0] == 0x2b)
   && (VAR_1[1] == 0x2f)
   && (VAR_1[2] == 0x76)
   && (VAR_1[3] == 0x38)
   && (VAR_1[4] == 0x2d)) return 1;



  if ((VAR_1[0] == 0xf7)
   && (VAR_1[1] == 0x64)
   && (VAR_1[2] == 0x4c)) return 1;



  if ((VAR_1[0] == 0xdd)
   && (VAR_1[1] == 0x73)
   && (VAR_1[2] == 0x66)
   && (VAR_1[3] == 0x73)) return 1;



  if ((VAR_1[0] == 0x0e)
   && (VAR_1[1] == 0xfe)
   && (VAR_1[2] == 0xff)) return 1;



  if ((VAR_1[0] == 0xfb)
   && (VAR_1[1] == 0xee)
   && (VAR_1[2] == 0x28)) return 1;



  if ((VAR_1[0] == 0x84)
   && (VAR_1[1] == 0x31)
   && (VAR_1[2] == 0x95)
   && (VAR_1[3] == 0x33)) return 1;

  return 0;
}

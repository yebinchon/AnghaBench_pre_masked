
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buf ;
typedef int MD5_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int) ;
 int* VAR_2 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,char*,int*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(uint8_t *VAR_4)
{
 uint8_t VAR_5[32];
 MD5_CTX VAR_6;
 int VAR_7;

 FUNC_7("Original:\n");
 FUNC_8();
 FUNC_6();

 if (VAR_4 == ((void*)0)) {

  VAR_7 = FUNC_5(VAR_1, "cfi0.factory_ppr", VAR_5, sizeof(VAR_5));
  if (VAR_7 == -1)
   FUNC_3(1, "Could not find Intel flash PPR serial\n");

  FUNC_1(&VAR_6);
  FUNC_2(&VAR_6, VAR_5+2, 16);
  FUNC_0(VAR_5, &VAR_6);


  VAR_2[VAR_0 + 7] =
      VAR_5[14] << 4 | VAR_5[13] >> 4;
  VAR_2[VAR_0 + 8] =
      VAR_5[13] << 4 | VAR_5[12] >> 4;
  VAR_2[VAR_0 + 9] = VAR_5[12] << 4;

  VAR_2[VAR_0 + 9] &= ~0x0f;


  if (VAR_3 == 0)
   VAR_2[VAR_0 + 4] |= 2;
  else
   VAR_2[VAR_0 + 4] &= ~2;

  VAR_2[VAR_0 + 4] &= ~1;
 } else {
  int VAR_8;

  VAR_2[VAR_0 + 4] = VAR_4[0];
  VAR_2[VAR_0 + 5] = VAR_4[1];
  VAR_2[VAR_0 + 6] = VAR_4[2];
  VAR_2[VAR_0 + 7] = VAR_4[3];
  VAR_2[VAR_0 + 8] = VAR_4[4];
  VAR_2[VAR_0 + 9] = VAR_4[5];

  VAR_8 = 0;
  if ((VAR_4[5] & 0xf) != 0x0) {
   VAR_8++;
   FUNC_9("WARN: Selected Ethernet Address is "
       "not multi-MAC compatible.\n");
  }
  if (VAR_3 == 0 && ((VAR_4[0] & 0x2) == 0x0)) {
   VAR_8++;
   FUNC_9("WARN: Locally administered bit not set.\n");
  }
  if ((VAR_4[0] & 0x1) != 0x0) {
   VAR_8++;
   FUNC_9("WARN: You are setting a Multicast address.\n");
  }
  if (VAR_8 != 0)
   FUNC_9("Suggesting to re-run with: "
       "%02x:%02x:%02x:%02x:%02x:%02x",
       (VAR_4[0] & 0xfe) | 0x2,
       VAR_4[1], VAR_4[2], VAR_4[3], VAR_4[4],
       VAR_4[5] & 0xf0);
 }


 VAR_2[VAR_0 + 0] = 0xfe;
 VAR_2[VAR_0 + 1] = 0x5a;
 VAR_2[VAR_0 + 2] = 0x00;
 VAR_2[VAR_0 + 3] = 0x00;

 FUNC_10();

 FUNC_7("Updated to:\n");
 FUNC_8();
 FUNC_6();
 FUNC_4(0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val32 ;
typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int seed ;
typedef int nullbuf ;
typedef int ctxt ;
typedef int MD5_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int const*,int*,int) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(u_int8_t *VAR_2, const u_int8_t *VAR_3, u_int8_t *VAR_4)
{
 MD5_CTX VAR_5;
 u_int8_t VAR_6[16], VAR_7[16], VAR_8[8];
 u_int32_t VAR_9;


 FUNC_6(VAR_8, sizeof(VAR_8));
 if (FUNC_4(VAR_8, VAR_2, sizeof(VAR_8)) == 0) {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   VAR_9 = FUNC_3();
   FUNC_5(&VAR_9, VAR_6 + sizeof(VAR_9) * VAR_10, sizeof(VAR_9));
  }
 } else
  FUNC_5(VAR_2, VAR_6, 8);



 FUNC_5(VAR_3, &VAR_6[8], 8);

 if (0) {
  int VAR_11;

  FUNC_8("generate_tmp_ifid: new randomized ID from: ");
  for (VAR_11 = 0; VAR_11 < 16; VAR_11++)
   FUNC_8("%02x", VAR_6[VAR_11]);
  FUNC_8(" ");
 }


 FUNC_6(&VAR_5, sizeof(VAR_5));
 FUNC_1(&VAR_5);
 FUNC_2(&VAR_5, VAR_6, sizeof(VAR_6));
 FUNC_0(VAR_7, &VAR_5);






 FUNC_5(VAR_7, VAR_4, 8);
 VAR_4[0] &= ~VAR_0;






 if (FUNC_4(VAR_8, VAR_4, sizeof(VAR_8)) == 0) {
  FUNC_7((VAR_1,
      "generate_tmp_ifid: computed MD5 value is zero.\n"));

  VAR_9 = FUNC_3();
  VAR_9 = 1 + (VAR_9 % (0xffffffff - 1));
 }







 FUNC_5(&VAR_7[8], VAR_2, 8);

 if (0) {
  int VAR_12;

  FUNC_8("to: ");
  for (VAR_12 = 0; VAR_12 < 16; VAR_12++)
   FUNC_8("%02x", VAR_7[VAR_12]);
  FUNC_8("\n");
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int ;
struct aes_xts_ctx {int* tweak; int key1; } ;
typedef int block ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int *,int*,int*) ;
 int FUNC_2 (int *,int*,int*) ;

__attribute__((used)) static void
FUNC_3(struct aes_xts_ctx *VAR_2, u_int8_t *VAR_3, u_int VAR_4)
{
 u_int8_t VAR_5[VAR_1];
 u_int VAR_6, VAR_7, VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_5[VAR_6] = VAR_3[VAR_6] ^ VAR_2->tweak[VAR_6];

 if (VAR_4)
  FUNC_2(&VAR_2->key1, VAR_5, VAR_3);
 else
  FUNC_1(&VAR_2->key1, VAR_5, VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_3[VAR_6] ^= VAR_2->tweak[VAR_6];


 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_8 = VAR_2->tweak[VAR_6] & 0x80;
  VAR_2->tweak[VAR_6] = (VAR_2->tweak[VAR_6] << 1) | (VAR_7 ? 1 : 0);
  VAR_7 = VAR_8;
 }
 if (VAR_7)
  VAR_2->tweak[0] ^= VAR_0;
 FUNC_0(VAR_5, sizeof(VAR_5));
}

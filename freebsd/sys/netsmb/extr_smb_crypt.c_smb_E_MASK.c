
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int des_key_schedule ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int ,int) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_4(const u_char *VAR_2, u_char *VAR_3, u_char *VAR_4)
{
 des_key_schedule *VAR_5;
 u_char VAR_6[8];

 VAR_6[0] = VAR_2[0] & 0xfe;
 VAR_6[1] = VAR_2[0] << 7 | (VAR_2[1] >> 1 & 0xfe);
 VAR_6[2] = VAR_2[1] << 6 | (VAR_2[2] >> 2 & 0xfe);
 VAR_6[3] = VAR_2[2] << 5 | (VAR_2[3] >> 3 & 0xfe);
 VAR_6[4] = VAR_2[3] << 4 | (VAR_2[4] >> 4 & 0xfe);
 VAR_6[5] = VAR_2[4] << 3 | (VAR_2[5] >> 5 & 0xfe);
 VAR_6[6] = VAR_2[5] << 2 | (VAR_2[6] >> 6 & 0xfe);
 VAR_6[7] = VAR_2[6] << 1;
 VAR_5 = FUNC_3(sizeof(des_key_schedule), VAR_0, VAR_1);
 FUNC_1(VAR_6, *VAR_5);
 FUNC_0(VAR_3, VAR_4, *VAR_5, 1);
 FUNC_2(VAR_5, VAR_0);
}

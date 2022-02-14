
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct stmfts_data {int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct stmfts_data *VAR_4,
          const u8 VAR_5[])
{
 u16 VAR_6 = (VAR_5[2] << 4) | (VAR_5[4] >> 4);
 u16 VAR_7 = (VAR_5[3] << 4) | (VAR_5[4] & VAR_3);
 u8 VAR_8 = VAR_5[5];

 FUNC_0(VAR_4->input, VAR_1, VAR_6);
 FUNC_0(VAR_4->input, VAR_2, VAR_7);
 FUNC_0(VAR_4->input, VAR_0, VAR_8);

 FUNC_1(VAR_4->input);
}

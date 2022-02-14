
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct stmfts_data *VAR_9,
     const u8 VAR_10[])
{
 u8 VAR_11 = (VAR_10[0] & VAR_7) >> 4;
 u16 VAR_12 = VAR_10[1] | ((VAR_10[2] & VAR_8) << 8);
 u16 VAR_13 = (VAR_10[2] >> 4) | (VAR_10[3] << 4);
 u8 VAR_14 = VAR_10[4];
 u8 VAR_15 = VAR_10[5];
 u8 VAR_16 = VAR_10[6];
 u8 VAR_17 = VAR_10[7];

 FUNC_1(VAR_9->input, VAR_11);

 FUNC_0(VAR_9->input, VAR_6, 1);
 FUNC_2(VAR_9->input, VAR_1, VAR_12);
 FUNC_2(VAR_9->input, VAR_2, VAR_13);
 FUNC_2(VAR_9->input, VAR_4, VAR_14);
 FUNC_2(VAR_9->input, VAR_5, VAR_15);
 FUNC_2(VAR_9->input, VAR_3, VAR_17);
 FUNC_2(VAR_9->input, VAR_0, VAR_16);

 FUNC_3(VAR_9->input);
}

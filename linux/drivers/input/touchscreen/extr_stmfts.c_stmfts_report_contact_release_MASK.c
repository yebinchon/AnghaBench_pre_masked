
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmfts_data {int input; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct stmfts_data *VAR_2,
       const u8 VAR_3[])
{
 u8 VAR_4 = (VAR_3[0] & VAR_1) >> 4;

 FUNC_1(VAR_2->input, VAR_4);
 FUNC_0(VAR_2->input, VAR_0, 0);

 FUNC_2(VAR_2->input);
}

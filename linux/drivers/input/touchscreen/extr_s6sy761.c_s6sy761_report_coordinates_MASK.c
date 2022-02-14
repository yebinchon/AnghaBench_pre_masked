
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct s6sy761_data {int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct s6sy761_data *VAR_9,
           u8 *VAR_10, u8 VAR_11)
{
 u8 VAR_12 = VAR_10[4];
 u8 VAR_13 = VAR_10[5];
 u8 VAR_14 = VAR_10[6] & VAR_8;
 u16 VAR_15 = (VAR_10[1] << 3) | ((VAR_10[3] & VAR_6) >> 4);
 u16 VAR_16 = (VAR_10[2] << 3) | (VAR_10[3] & VAR_7);

 FUNC_1(VAR_9->input, VAR_11);

 FUNC_0(VAR_9->input, VAR_5, 1);
 FUNC_2(VAR_9->input, VAR_0, VAR_15);
 FUNC_2(VAR_9->input, VAR_1, VAR_16);
 FUNC_2(VAR_9->input, VAR_3, VAR_12);
 FUNC_2(VAR_9->input, VAR_4, VAR_13);
 FUNC_2(VAR_9->input, VAR_2, VAR_14);

 FUNC_3(VAR_9->input);
}

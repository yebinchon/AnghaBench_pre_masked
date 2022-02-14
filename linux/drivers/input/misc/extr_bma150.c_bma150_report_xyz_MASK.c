
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bma150_data {int input; int client; } ;
typedef int s32 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct bma150_data *VAR_5)
{
 u8 VAR_6[VAR_4];
 s16 VAR_7, VAR_8, VAR_9;
 s32 VAR_10;

 VAR_10 = FUNC_0(VAR_5->client,
   VAR_3, VAR_4, VAR_6);
 if (VAR_10 != VAR_4)
  return;

 VAR_7 = ((0xc0 & VAR_6[0]) >> 6) | (VAR_6[1] << 2);
 VAR_8 = ((0xc0 & VAR_6[2]) >> 6) | (VAR_6[3] << 2);
 VAR_9 = ((0xc0 & VAR_6[4]) >> 6) | (VAR_6[5] << 2);

 VAR_7 = FUNC_3(VAR_7, 9);
 VAR_8 = FUNC_3(VAR_8, 9);
 VAR_9 = FUNC_3(VAR_9, 9);

 FUNC_1(VAR_5->input, VAR_0, VAR_7);
 FUNC_1(VAR_5->input, VAR_1, VAR_8);
 FUNC_1(VAR_5->input, VAR_2, VAR_9);
 FUNC_2(VAR_5->input);
}

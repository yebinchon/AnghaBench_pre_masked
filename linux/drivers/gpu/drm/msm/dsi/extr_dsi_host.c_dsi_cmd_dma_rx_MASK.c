
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct msm_dsi_host {int * rx_buf; } ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct msm_dsi_host*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct msm_dsi_host *VAR_0,
   u8 *VAR_1, int VAR_2, int VAR_3)
{
 u32 *VAR_4, *VAR_5, VAR_6;
 int VAR_7, VAR_8 = 0, VAR_9;
 u32 VAR_10;
 u8 VAR_11[16];
 int VAR_12 = 0;
 int VAR_13 = VAR_1 - VAR_0->rx_buf;

 VAR_4 = (u32 *)VAR_1;
 VAR_5 = (u32 *)VAR_11;
 VAR_9 = (VAR_2 + 3) >> 2;
 if (VAR_9 > 4)
  VAR_9 = 4;

 if (VAR_2 == 4)
  VAR_10 = 4;
 else
  VAR_10 = VAR_3 + 6;
 if (VAR_10 > 16) {
  int VAR_14;




  VAR_14 = VAR_10 - 16;
  VAR_12 = VAR_13 - VAR_14;
 }

 for (VAR_7 = VAR_9 - 1; VAR_7 >= 0; VAR_7--) {
  VAR_6 = FUNC_2(VAR_0, FUNC_1(VAR_7));
  *VAR_5++ = FUNC_3(VAR_6);
  FUNC_0("data = 0x%x and ntohl(data) = 0x%x", VAR_6, FUNC_3(VAR_6));
 }

 for (VAR_7 = VAR_12; VAR_7 < 16; VAR_7++)
  VAR_1[VAR_8++] = VAR_11[VAR_7];

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct mtk_hdmi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (struct mtk_hdmi*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct mtk_hdmi *VAR_2, unsigned int VAR_3,
        unsigned int VAR_4)
{
 unsigned char VAR_5[VAR_1];
 int VAR_6;

 FUNC_1(VAR_2, VAR_0, 0);
 FUNC_1(VAR_2, VAR_0, 0);
 FUNC_1(VAR_2, VAR_0, 0);
 FUNC_0(VAR_5, 0, sizeof(VAR_5));

 VAR_5[0] = (VAR_4 >> 24) & 0xff;
 VAR_5[1] = (VAR_4 >> 16) & 0xff;
 VAR_5[2] = (VAR_4 >> 8) & 0xff;
 VAR_5[3] = VAR_4 & 0xff;

 VAR_5[4] = (VAR_3 >> 16) & 0xff;
 VAR_5[5] = (VAR_3 >> 8) & 0xff;
 VAR_5[6] = VAR_3 & 0xff;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_1(VAR_2, VAR_0, VAR_5[VAR_6]);
}

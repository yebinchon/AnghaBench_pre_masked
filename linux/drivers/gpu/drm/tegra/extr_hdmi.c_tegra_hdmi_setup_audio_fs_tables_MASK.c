
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_hdmi {int dummy; } ;


 unsigned int FUNC_0 (unsigned int const*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct tegra_hdmi*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct tegra_hdmi *VAR_1)
{
 const unsigned int VAR_2[] = {
  32000, 44100, 48000, 88200, 96000, 176400, 192000
 };
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  unsigned int VAR_4 = VAR_2[VAR_3];
  unsigned int VAR_5;
  unsigned int VAR_6;
  u32 VAR_7;

  if (VAR_4 > 96000)
   VAR_6 = 2;
  else if (VAR_4 > 48000)
   VAR_6 = 6;
  else
   VAR_6 = 9;

  VAR_5 = (8 * VAR_0) / (VAR_4 * 128);
  VAR_7 = FUNC_2(VAR_5 - VAR_6) |
   FUNC_1(VAR_5 + VAR_6);
  FUNC_4(VAR_1, VAR_7, FUNC_3(VAR_3));
 }
}

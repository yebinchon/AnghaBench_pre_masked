
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tegra_hdmi_audio_config {int n; int cts; int aval; } ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int,unsigned int const) ;
 int FUNC_3 (struct tegra_hdmi_audio_config*,int ,int) ;

__attribute__((used)) static int
FUNC_4(unsigned int VAR_1, unsigned int VAR_2,
       struct tegra_hdmi_audio_config *VAR_3)
{
 const unsigned int VAR_4 = 128 * VAR_1;
 const unsigned int VAR_5 = VAR_4 / 1500;
 const unsigned int VAR_6 = VAR_4 / 300;
 const unsigned int VAR_7 = VAR_4 / 1000;
 int64_t VAR_8 = (uint64_t)-1 >> 1;
 unsigned int VAR_9 = -1;
 int VAR_10;

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->n = -1;

 for (VAR_10 = VAR_5; VAR_10 <= VAR_6; VAR_10++) {
  uint64_t VAR_11, VAR_12;
  unsigned int VAR_13;
  int64_t VAR_14, VAR_15;


  VAR_12 = ((int64_t)24000000 << 16) * VAR_10;
  FUNC_2(VAR_12, VAR_4);

  if (VAR_12 & 0xFFFF)
   continue;


  VAR_11 = ((int64_t)VAR_2 << 16) * VAR_10;
  FUNC_2(VAR_11, VAR_4);

  VAR_14 = (VAR_11 & ~0xFFFF) + ((VAR_11 & FUNC_0(15)) << 1);

  VAR_13 = FUNC_1(VAR_10 - VAR_7);


  VAR_15 = FUNC_1((int64_t)VAR_11 - VAR_14);
  if (VAR_15 < VAR_8 || (VAR_15 == VAR_8 && VAR_13 < VAR_9)) {
   VAR_3->n = VAR_10;
   VAR_3->cts = VAR_14 >> 16;
   VAR_3->aval = VAR_12 >> 16;
   VAR_9 = VAR_13;
   VAR_8 = VAR_15;
  }
 }

 return VAR_3->n != -1 ? 0 : -VAR_0;
}

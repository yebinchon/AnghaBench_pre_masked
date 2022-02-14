
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct snd_pcm_runtime {int dummy; } ;
struct snd_dw_hdmi {unsigned int** cs; } ;
typedef int cs ;


 unsigned int FUNC_0 (unsigned int*) ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (unsigned int**,int ,int) ;
 int FUNC_3 (struct snd_pcm_runtime*,unsigned int*,int) ;

__attribute__((used)) static void FUNC_4(struct snd_dw_hdmi *VAR_1,
 struct snd_pcm_runtime *VAR_2)
{
 u8 VAR_3[4];
 unsigned VAR_4, VAR_5, VAR_6;

 FUNC_3(VAR_2, VAR_3, sizeof(VAR_3));

 FUNC_2(VAR_1->cs, 0, sizeof(VAR_1->cs));

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  VAR_3[2] &= ~VAR_0;
  VAR_3[2] |= (VAR_4 + 1) << 4;

  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
   unsigned VAR_7 = VAR_3[VAR_5];

   for (VAR_6 = 0; VAR_6 < 8; VAR_6++, VAR_7 >>= 1)
    VAR_1->cs[VAR_5 * 8 + VAR_6][VAR_4] = (VAR_7 & 1) << 2;
  }
 }
 VAR_1->cs[0][0] |= FUNC_1(4);
}

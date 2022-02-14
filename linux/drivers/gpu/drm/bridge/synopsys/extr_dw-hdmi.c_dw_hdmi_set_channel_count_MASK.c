
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct dw_hdmi {int audio_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dw_hdmi*,unsigned int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct dw_hdmi *VAR_7, unsigned int VAR_8)
{
 u8 VAR_9;

 FUNC_1(&VAR_7->audio_mutex);





 if (VAR_8 > 2)
  VAR_9 = VAR_5;
 else
  VAR_9 = VAR_4;

 FUNC_0(VAR_7, VAR_9, VAR_6,
    VAR_3);


 FUNC_0(VAR_7, (VAR_8 - 1) << VAR_2,
    VAR_1, VAR_0);

 FUNC_2(&VAR_7->audio_mutex);
}

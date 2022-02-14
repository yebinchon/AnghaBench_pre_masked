
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ams_delta_serio {int* fiq_buffer; int serio; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 struct ams_delta_serio *VAR_8 = VAR_7;
 int *VAR_9 = &VAR_8->fiq_buffer[VAR_1];
 int VAR_10, VAR_11;
 u8 VAR_12;

 VAR_8->fiq_buffer[VAR_3] = 0;





 while (VAR_8->fiq_buffer[VAR_4] > 0) {

  VAR_10 = VAR_9[VAR_8->fiq_buffer[VAR_2]++];
  VAR_8->fiq_buffer[VAR_4]--;
  if (VAR_8->fiq_buffer[VAR_2] ==
      VAR_8->fiq_buffer[VAR_0])
   VAR_8->fiq_buffer[VAR_2] = 0;

  VAR_11 = FUNC_0(VAR_8->serio, VAR_10);
  VAR_12 = (u8) (VAR_10 >> 1) & 0xFF;
  FUNC_1(VAR_8->serio, VAR_12, VAR_11);
 }
 return VAR_5;
}

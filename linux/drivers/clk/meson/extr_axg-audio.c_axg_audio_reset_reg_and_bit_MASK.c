
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axg_audio_reset_data {scalar_t__ offset; int map; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct axg_audio_reset_data *VAR_1,
     unsigned long VAR_2,
     unsigned int *VAR_3,
     unsigned int *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_1->map);

 *VAR_3 = (VAR_2 / (VAR_5 * VAR_0)) * VAR_5;
 *VAR_3 += VAR_1->offset;
 *VAR_4 = VAR_2 % (VAR_5 * VAR_0);
}

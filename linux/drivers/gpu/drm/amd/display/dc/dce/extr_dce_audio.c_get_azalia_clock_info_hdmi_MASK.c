
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct azalia_clock_info {int audio_dto_phase; int audio_dto_module; } ;



__attribute__((used)) static void FUNC_0(
 uint32_t VAR_0,
 uint32_t VAR_1,
 struct azalia_clock_info *VAR_2)
{


 VAR_2->audio_dto_phase =
   24 * 10000;



 VAR_2->audio_dto_module =
   VAR_1;
}

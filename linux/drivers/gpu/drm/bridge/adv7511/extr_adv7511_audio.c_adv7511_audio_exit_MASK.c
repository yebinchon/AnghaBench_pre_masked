
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv7511 {int * audio_pdev; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct adv7511 *VAR_0)
{
 if (VAR_0->audio_pdev) {
  FUNC_0(VAR_0->audio_pdev);
  VAR_0->audio_pdev = ((void*)0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcmidi_snd {scalar_t__ card; TYPE_2__* pk; } ;
struct TYPE_4__ {TYPE_1__* hdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct pcmidi_snd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct pcmidi_snd *VAR_3)
{
 if (VAR_3->card) {
  FUNC_3(VAR_3);

  FUNC_0(&VAR_3->pk->hdev->dev,
   VAR_0);
  FUNC_0(&VAR_3->pk->hdev->dev,
   VAR_2);
  FUNC_0(&VAR_3->pk->hdev->dev,
   VAR_1);

  FUNC_1(VAR_3->card);
  FUNC_2(VAR_3->card);
 }

 return 0;
}

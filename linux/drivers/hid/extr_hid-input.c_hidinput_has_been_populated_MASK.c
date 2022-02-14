
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_input {TYPE_1__* input; } ;
struct TYPE_2__ {unsigned long* evbit; unsigned long* keybit; unsigned long* relbit; unsigned long* absbit; unsigned long* mscbit; unsigned long* ledbit; unsigned long* sndbit; unsigned long* ffbit; unsigned long* swbit; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static bool FUNC_1(struct hid_input *VAR_9)
{
 int VAR_10;
 unsigned long VAR_11 = 0;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_1); VAR_10++)
  VAR_11 |= VAR_9->input->evbit[VAR_10];

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++)
  VAR_11 |= VAR_9->input->keybit[VAR_10];

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); VAR_10++)
  VAR_11 |= VAR_9->input->relbit[VAR_10];

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_0); VAR_10++)
  VAR_11 |= VAR_9->input->absbit[VAR_10];

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++)
  VAR_11 |= VAR_9->input->mscbit[VAR_10];

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++)
  VAR_11 |= VAR_9->input->ledbit[VAR_10];

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_7); VAR_10++)
  VAR_11 |= VAR_9->input->sndbit[VAR_10];

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++)
  VAR_11 |= VAR_9->input->ffbit[VAR_10];

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8); VAR_10++)
  VAR_11 |= VAR_9->input->swbit[VAR_10];

 return !!VAR_11;
}

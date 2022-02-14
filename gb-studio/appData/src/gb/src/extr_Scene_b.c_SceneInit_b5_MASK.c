
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UWORD ;
typedef int UBYTE ;
struct TYPE_5__ {int frames_len; int sprite_type; int animate; scalar_t__ frame; scalar_t__ sprite; } ;
struct TYPE_4__ {size_t bank; scalar_t__ offset; } ;
typedef TYPE_1__ BANK_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int FUNC_2 (size_t,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (size_t,int ,int,scalar_t__) ;
 TYPE_2__* VAR_5 ;
 scalar_t__* VAR_6 ;
 size_t VAR_7 ;
 int * VAR_8 ;

void FUNC_5()
{
  BANK_PTR VAR_9;
  UWORD VAR_10;
  UBYTE VAR_11, VAR_12;


  FUNC_1(VAR_0, &VAR_9, &VAR_8[VAR_7]);
  VAR_10 = ((UWORD)VAR_6[VAR_9.bank]) + VAR_9.offset;
  VAR_11 = FUNC_2(VAR_9.bank, VAR_10);
  VAR_12 = FUNC_0(VAR_11);
  FUNC_4(VAR_9.bank, 0, VAR_12, VAR_10 + 1);
  VAR_5[0].sprite = 0;
  VAR_5[0].frame = 0;
  VAR_5[0].animate = VAR_1;
  VAR_5[0].sprite_type = VAR_11 == 6 ? VAR_3 : VAR_11 == 3 ? VAR_2 : VAR_4;
  VAR_5[0].frames_len = VAR_11 == 6 ? 2 : VAR_11 == 3 ? 1 : VAR_11;
  FUNC_3(0);
}

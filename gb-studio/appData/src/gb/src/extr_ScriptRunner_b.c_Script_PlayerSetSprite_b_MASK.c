
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UWORD ;
typedef size_t UBYTE ;
struct TYPE_5__ {int frames_len; int sprite_type; scalar_t__ frame; scalar_t__ sprite; } ;
struct TYPE_4__ {size_t bank; scalar_t__ offset; } ;
typedef TYPE_1__ BANK_PTR ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 size_t FUNC_2 (size_t,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (size_t,int ,size_t,scalar_t__) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__* VAR_6 ;
 size_t VAR_7 ;
 size_t* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;

void FUNC_5()
{
  BANK_PTR VAR_13;
  UWORD VAR_14;
  UBYTE VAR_15, VAR_16, VAR_17;


  VAR_15 = VAR_8[0];
  FUNC_1(VAR_0, &VAR_13, &VAR_12[VAR_15]);
  VAR_14 = ((UWORD)VAR_6[VAR_13.bank]) + VAR_13.offset;
  VAR_16 = FUNC_2(VAR_13.bank, VAR_14);
  VAR_17 = FUNC_0(VAR_16);
  FUNC_4(VAR_13.bank, 0, VAR_17, VAR_14 + 1);
  VAR_5[0].sprite = 0;
  VAR_5[0].frame = 0;
  VAR_5[0].sprite_type = VAR_16 == 6 ? VAR_2 : VAR_16 == 3 ? VAR_1 : VAR_3;
  VAR_5[0].frames_len = VAR_16 == 6 ? 2 : VAR_16 == 3 ? 1 : VAR_16;
  FUNC_3(0);


  VAR_7 = VAR_15;

  VAR_11 += 1 + VAR_9;
  VAR_10 = VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UWORD ;
typedef size_t UBYTE ;
struct TYPE_8__ {int enabled; } ;
struct TYPE_7__ {int bank; } ;
struct TYPE_6__ {int bank; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 size_t VAR_4 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,TYPE_2__*,int *) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 void* VAR_6 ;
 TYPE_3__* VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_12 ;
 int * VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 size_t VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;

void FUNC_8()
{
  UBYTE VAR_20;


  FUNC_2(VAR_1, &VAR_8, &VAR_13[VAR_14]);
  VAR_11.bank = FUNC_3(VAR_8.bank, (UWORD)VAR_15);
  VAR_11.offset = (FUNC_3(VAR_8.bank, VAR_15 + 1) * 256) + FUNC_3(VAR_8.bank, VAR_15 + 2);
  FUNC_6(&VAR_11);


  for (VAR_20 = VAR_17; VAR_20 != VAR_4; VAR_20++)
  {
    VAR_7[VAR_20].enabled = VAR_3;
    FUNC_7(FUNC_1(VAR_20));
  }


  VAR_9 = VAR_0;

  FUNC_5();
  VAR_10 = VAR_6;
  FUNC_4();

  FUNC_0();

  VAR_18 = 0;
  VAR_12 = 0;
  VAR_16 = VAR_6;


  VAR_19 = 0;

  VAR_5;
  VAR_2;
}

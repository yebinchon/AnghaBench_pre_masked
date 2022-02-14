
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UWORD ;
typedef size_t UBYTE ;
struct TYPE_4__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_5__ {int x; int y; } ;
struct TYPE_6__ {void* moving; TYPE_1__ pos; TYPE_2__ dir; } ;
typedef int POS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (scalar_t__) ;
 void* VAR_2 ;
 size_t FUNC_1 (size_t,size_t,size_t) ;
 int FUNC_2 (size_t) ;
 void* VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 void* VAR_6 ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int* VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

void FUNC_4(UBYTE VAR_13)
{
  UBYTE VAR_14, VAR_15;
  UBYTE VAR_16;
  UWORD VAR_17;

  FUNC_3(&VAR_5[VAR_13].dir, VAR_12, sizeof(POS));

  FUNC_2(VAR_13);


  if (VAR_11 != 0 && (VAR_4 & VAR_1))
  {
    if (VAR_13 == 0)
    {
      VAR_6 = VAR_3;
    }
    VAR_5[VAR_13].moving = VAR_3;
    return;
  }

  VAR_14 = FUNC_0(VAR_5[VAR_13].pos.x) + VAR_5[VAR_13].dir.x;
  VAR_15 = FUNC_0(VAR_5[VAR_13].pos.y) + VAR_5[VAR_13].dir.y;


  VAR_16 = FUNC_1(VAR_13, VAR_14, VAR_15);
  if (VAR_16 != VAR_9)
  {
    VAR_5[VAR_13].moving = VAR_2;
    return;
  }


  if (VAR_5[VAR_13].dir.x == -1 && VAR_14 == 0)
  {
    VAR_5[VAR_13].moving = VAR_2;
    return;
  }


  if (VAR_5[VAR_13].dir.x == 1 && VAR_14 == VAR_10)
  {
    VAR_5[VAR_13].moving = VAR_2;
    return;
  }


  if (VAR_5[VAR_13].dir.y == -1 && VAR_15 == 0)
  {
    VAR_5[VAR_13].moving = VAR_2;
    return;
  }


  if (VAR_5[VAR_13].dir.y == 1 && (VAR_15 == (VAR_8 + 1) || VAR_5[VAR_13].pos.y == VAR_0))
  {
    VAR_5[VAR_13].moving = VAR_2;
    return;
  }


  VAR_17 = ((UWORD)VAR_10 * (VAR_15 - 1)) + (VAR_14 - 1);
  if (VAR_7[VAR_17 >> 3] & (1 << (VAR_17 & 7)))
  {
    VAR_5[VAR_13].moving = VAR_2;
    return;
  }


  VAR_17 = ((UWORD)VAR_10 * (VAR_15 - 1)) + (VAR_14 - 1) + 1;
  if (VAR_7[VAR_17 >> 3] & (1 << (VAR_17 & 7)))
  {
    VAR_5[VAR_13].moving = VAR_2;
    return;
  }

  if (VAR_13 == 0)
  {
    VAR_6 = VAR_3;
  }
  VAR_5[VAR_13].moving = VAR_3;
}

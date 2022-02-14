
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int processed; int offset; } ;
struct TYPE_10__ {int current; } ;
struct TYPE_9__ {int attr; TYPE_1__* pair; } ;
struct TYPE_8__ {int idx; } ;
typedef TYPE_2__ GColors ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_4__*,int ) ;
 int FUNC_4 (int ,char*,char*,int,int ,int,int ) ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int) ;
 TYPE_4__* VAR_6 ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int,int,int ) ;
 int FUNC_9 (int,int,char*,int,...) ;
 int VAR_12 ;
 int FUNC_10 () ;
 int VAR_13 ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void
FUNC_16 (void)
{
  GColors *VAR_14 = FUNC_6 (VAR_0);
  int VAR_15, VAR_16, VAR_17 = 0;

  FUNC_7 (VAR_13, VAR_15, VAR_16);
  FUNC_11 (VAR_10, &VAR_11);

  FUNC_5 ();
  VAR_17 = VAR_6->processed - VAR_6->offset;

  FUNC_4 (VAR_13, "", "%s", VAR_15 - 1, 0, VAR_16, VAR_4);

  FUNC_14 (VAR_13, VAR_14->attr | FUNC_0 (VAR_14->pair->idx));
  FUNC_8 (VAR_15 - 1, 1, VAR_2);
  FUNC_9 (VAR_15 - 1, 30, "%d - %s", VAR_17, FUNC_1 (VAR_12));
  FUNC_8 (VAR_15 - 1, VAR_16 - 21, VAR_3);
  FUNC_9 (VAR_15 - 1, VAR_16 - 5, "%s", VAR_1);
  FUNC_13 (VAR_13, VAR_14->attr | FUNC_0 (VAR_14->pair->idx));

  FUNC_10 ();


  FUNC_3 (VAR_8, VAR_6, VAR_9);
  FUNC_15 (VAR_8);


  FUNC_12 (VAR_8, VAR_7.current);

  FUNC_2 (VAR_10, VAR_5, &VAR_7);
}

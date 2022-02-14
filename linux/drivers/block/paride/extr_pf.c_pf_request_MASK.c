
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* private_data; } ;
struct TYPE_9__ {int pi; } ;
struct TYPE_8__ {int bio; TYPE_4__* rq_disk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_3__* VAR_10 ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void)
{
 if (VAR_7)
  return;
repeat:
 if (!VAR_11 && !FUNC_8())
  return;

 VAR_10 = VAR_11->rq_disk->private_data;
 VAR_5 = FUNC_2(VAR_11);
 VAR_13 = FUNC_3(VAR_11);
 VAR_9 = FUNC_1(VAR_11);

 if (VAR_5 + VAR_9 > FUNC_4(VAR_11->rq_disk)) {
  FUNC_5(VAR_0);
  goto repeat;
 }

 VAR_8 = FUNC_7(VAR_11);
 VAR_6 = FUNC_0(VAR_11->bio);
 VAR_12 = 0;

 VAR_7 = 1;
 if (VAR_8 == VAR_1)
  FUNC_6(VAR_10->pi, VAR_3);
 else if (VAR_8 == VAR_2)
  FUNC_6(VAR_10->pi, VAR_4);
 else {
  VAR_7 = 0;
  FUNC_5(VAR_0);
  goto repeat;
 }
}

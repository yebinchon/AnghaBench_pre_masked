
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {int Flags; } ;
struct isar_ch {TYPE_2__ bch; TYPE_1__* is; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct isar_ch* VAR_3 ;
 int FUNC_0 (struct isar_ch*,int ) ;
 struct isar_ch* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_4 ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct timer_list *VAR_5)
{
 struct isar_ch *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_4);

 FUNC_2("%s: ftimer flags %lx\n", VAR_6->is->name, VAR_6->bch.Flags);
 FUNC_3(VAR_0, &VAR_6->bch.Flags);
 if (FUNC_3(VAR_1, &VAR_6->bch.Flags))
  FUNC_0(VAR_6, VAR_2);
}

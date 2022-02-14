
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fritzcard {struct bchannel* bch; } ;
struct bchannel {int nr; int Flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static struct bchannel *
FUNC_1(struct fritzcard *VAR_1, u32 VAR_2)
{
 if (FUNC_0(VAR_0, &VAR_1->bch[0].Flags) &&
     (VAR_1->bch[0].nr & VAR_2))
  return &VAR_1->bch[0];
 else if (FUNC_0(VAR_0, &VAR_1->bch[1].Flags) &&
   (VAR_1->bch[1].nr & VAR_2))
  return &VAR_1->bch[1];
 else
  return ((void*)0);
}

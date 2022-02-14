
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int idx; } ;
struct tiger_hw {TYPE_2__ send; int name; } ;
struct TYPE_3__ {int nr; int Flags; } ;
struct tiger_ch {int free; int txstate; int idx; TYPE_1__ bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tiger_ch*) ;
 int FUNC_1 (struct tiger_ch*) ;
 int FUNC_2 (struct tiger_ch*,int ,int,int) ;
 int FUNC_3 (char*,int ,int ,int,int ,int ) ;
 int FUNC_4 (char*,int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct tiger_hw *VAR_4, struct tiger_ch *VAR_5)
{
 int VAR_6;

 VAR_5->free += VAR_4->send.size / 2;
 if (VAR_5->free >= VAR_4->send.size) {
  if (!(VAR_5->txstate & (VAR_3 | VAR_2))) {
   FUNC_4("%s: B%1d TX underrun state %x\n", VAR_4->name,
    VAR_5->bch.nr, VAR_5->txstate);
   VAR_5->txstate |= VAR_3;
  }
  VAR_5->free = VAR_4->send.size;
 }
 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6) {
  if (FUNC_5(VAR_0, &VAR_5->bch.Flags)) {
   FUNC_1(VAR_5);
   return;
  }
  FUNC_3("%s: B%1d TX no data free %d idx %d/%d\n", VAR_4->name,
    VAR_5->bch.nr, VAR_5->free, VAR_5->idx, VAR_4->send.idx);
  if (!(VAR_5->txstate & (VAR_1 | VAR_2))) {
   FUNC_2(VAR_5, VAR_5->idx, VAR_5->free, 0xff);
   if (VAR_5->free == VAR_4->send.size)
    VAR_5->txstate |= VAR_1;
  }
 }
}

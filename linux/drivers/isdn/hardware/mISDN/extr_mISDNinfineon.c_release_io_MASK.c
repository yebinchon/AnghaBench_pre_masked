
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* mode; int size; int start; scalar_t__ p; } ;
struct TYPE_3__ {void* mode; int size; int start; scalar_t__ p; } ;
struct inf_hw {TYPE_2__ addr; TYPE_1__ cfg; } ;


 void* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct inf_hw *VAR_1)
{
 if (VAR_1->cfg.mode) {
  if (VAR_1->cfg.p) {
   FUNC_1(VAR_1->cfg.start, VAR_1->cfg.size);
   FUNC_0(VAR_1->cfg.p);
  } else
   FUNC_2(VAR_1->cfg.start, VAR_1->cfg.size);
  VAR_1->cfg.mode = VAR_0;
 }
 if (VAR_1->addr.mode) {
  if (VAR_1->addr.p) {
   FUNC_1(VAR_1->addr.start, VAR_1->addr.size);
   FUNC_0(VAR_1->addr.p);
  } else
   FUNC_2(VAR_1->addr.start, VAR_1->addr.size);
  VAR_1->addr.mode = VAR_0;
 }
}

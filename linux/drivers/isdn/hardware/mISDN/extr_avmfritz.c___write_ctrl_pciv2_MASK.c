
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctrl; } ;
struct hdlc_hw {TYPE_1__ ctrl; } ;
struct fritzcard {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct fritzcard *VAR_2, struct hdlc_hw *VAR_3, u32 VAR_4) {
 FUNC_0(VAR_3->ctrl.ctrl, VAR_2->addr + (VAR_4 == 2 ? VAR_1 :
       VAR_0));
}

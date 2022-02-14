
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl; } ;
struct hdlc_hw {TYPE_1__ ctrl; } ;
struct fritzcard {int type; int name; struct hdlc_hw* hdlc; } ;
struct bchannel {int nr; struct fritzcard* hw; } ;




 int FUNC_0 (struct fritzcard*,struct hdlc_hw*,char) ;
 int FUNC_1 (struct fritzcard*,struct hdlc_hw*,char) ;
 int FUNC_2 (char*,int ,char,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct bchannel *VAR_0, int VAR_1) {
 struct fritzcard *VAR_2 = VAR_0->hw;
 struct hdlc_hw *VAR_3;

 VAR_3 = &VAR_2->hdlc[(VAR_0->nr - 1) & 1];
 FUNC_2("%s: hdlc %c wr%x ctrl %x\n", VAR_2->name, '@' + VAR_0->nr,
   VAR_1, VAR_3->ctrl.ctrl);
 switch (VAR_2->type) {
 case 128:
  FUNC_1(VAR_2, VAR_3, VAR_0->nr);
  break;
 case 129:
  FUNC_0(VAR_2, VAR_3, VAR_0->nr);
  break;
 }
}

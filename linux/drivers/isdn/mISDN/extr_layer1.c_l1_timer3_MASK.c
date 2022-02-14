
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct layer1 {TYPE_1__ l1m; int dch; int (* dcb ) (int ,int ) ;int Flags; } ;
struct FsmInst {struct layer1* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_7, int VAR_8, void *VAR_9)
{
 struct layer1 *VAR_10 = VAR_7->userdata;

 FUNC_3(VAR_2, &VAR_10->Flags);
 if (FUNC_3(VAR_0, &VAR_10->Flags)) {
  if (FUNC_3(VAR_1, &VAR_10->Flags))
   VAR_10->dcb(VAR_10->dch, VAR_3);
  VAR_10->dcb(VAR_10->dch, VAR_4);
 }
 if (VAR_10->l1m.state != VAR_6) {
  FUNC_0(VAR_7, VAR_5);

 }
}

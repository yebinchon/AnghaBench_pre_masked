
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer1 {int dch; int (* dcb ) (int ,int ) ;int Flags; } ;
struct FsmInst {struct layer1* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_6, int VAR_7, void *VAR_8)
{
 struct layer1 *VAR_9 = VAR_6->userdata;

 if ((!FUNC_3(VAR_2, &VAR_9->Flags)) &&
     (!FUNC_3(VAR_3, &VAR_9->Flags))) {
  FUNC_2(VAR_0, &VAR_9->Flags);
  if (FUNC_2(VAR_1, &VAR_9->Flags))
   VAR_9->dcb(VAR_9->dch, VAR_4);
  VAR_9->dcb(VAR_9->dch, VAR_5);
 }
}

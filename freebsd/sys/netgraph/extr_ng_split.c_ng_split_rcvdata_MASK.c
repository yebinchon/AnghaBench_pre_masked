
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef scalar_t__ item_p ;
typedef int * hook_p ;
struct TYPE_3__ {int * out; int * mixed; int * in; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(hook_p VAR_1, item_p VAR_2)
{
 const priv_p VAR_3 = FUNC_3(FUNC_2(VAR_1));
 int VAR_4 = 0;

 if (VAR_1 == VAR_3->out) {
  FUNC_4("ng_split: got packet from out hook!\n");
  FUNC_0(VAR_2);
  VAR_4 = VAR_0;
 } else if ((VAR_1 == VAR_3->in) && (VAR_3->mixed != ((void*)0))) {
  FUNC_1(VAR_4, VAR_2, VAR_3->mixed);
 } else if ((VAR_1 == VAR_3->mixed) && (VAR_3->out != ((void*)0))) {
  FUNC_1(VAR_4, VAR_2, VAR_3->out);
 }

 if (VAR_2)
  FUNC_0(VAR_2);

 return (VAR_4);
}

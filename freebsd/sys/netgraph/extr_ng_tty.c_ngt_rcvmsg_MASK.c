
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct proc {int p_flag; } ;
struct TYPE_5__ {int typecookie; int arglen; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
typedef TYPE_2__* sc_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_6__ {int hotchar; int * tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct ng_mesg*) ;




 int FUNC_2 (struct ng_mesg*) ;
 int FUNC_3 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_6 (struct proc*) ;
 int FUNC_7 (struct proc*) ;
 int VAR_5 ;
 int FUNC_8 (struct proc*) ;
 int VAR_6 ;
 struct proc* FUNC_9 (int) ;
 int FUNC_10 (int **,struct proc*,int,int *,TYPE_2__* const) ;

__attribute__((used)) static int
FUNC_11(node_p VAR_7, item_p VAR_8, hook_p VAR_9)
{
 struct proc *VAR_10;
 const sc_p VAR_11 = FUNC_4(VAR_7);
 struct ng_mesg *VAR_12, *VAR_13 = ((void*)0);
 int VAR_14 = 0;

 FUNC_1(VAR_8, VAR_12);
 switch (VAR_12->header.typecookie) {
 case 131:
  switch (VAR_12->header.cmd) {
  case 128:
   if (VAR_11->tp != ((void*)0))
    return (VAR_0);

   VAR_10 = FUNC_9(((int *)VAR_12->data)[0]);
   if (VAR_10 == ((void*)0) || (VAR_10->p_flag & VAR_5))
    return (VAR_3);
   FUNC_8(VAR_10);
   FUNC_7(VAR_10);
   VAR_14 = FUNC_10(&VAR_11->tp, VAR_10, ((int *)VAR_12->data)[1],
       &VAR_6, VAR_11);
   FUNC_6(VAR_10);
   if (VAR_14 != 0)
    return (VAR_14);
   break;
  case 129:
      {
   int VAR_15;

   if (VAR_12->header.arglen != sizeof(int))
    FUNC_0(VAR_1);
   VAR_15 = *((int *) VAR_12->data);
   if (VAR_15 != (u_char) VAR_15 && VAR_15 != -1)
    FUNC_0(VAR_1);
   VAR_11->hotchar = VAR_15;
   break;
      }
  case 130:
   FUNC_3(VAR_13, VAR_12, sizeof(int), VAR_4);
   if (!VAR_13)
    FUNC_0(VAR_2);

   *((int *) VAR_13->data) = VAR_11->hotchar;
   break;
  default:
   FUNC_0(VAR_1);
  }
  break;
 default:
  FUNC_0(VAR_1);
 }
done:
 FUNC_5(VAR_14, VAR_7, VAR_8, VAR_13);
 FUNC_2(VAR_12);
 return (VAR_14);
}

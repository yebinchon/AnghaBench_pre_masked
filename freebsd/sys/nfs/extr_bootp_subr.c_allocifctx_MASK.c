
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bootpc_ifcontext {int xid; int state; } ;
struct bootpc_globalcontext {int xid; int interfaces; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct bootpc_ifcontext*,int ) ;
 struct bootpc_ifcontext* FUNC_1 (int,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2(struct bootpc_globalcontext *VAR_6)
{
 struct bootpc_ifcontext *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_2, VAR_3 | VAR_4);
 VAR_7->xid = VAR_6->xid;



 VAR_7->state = VAR_1;

 VAR_6->xid += 0x100;
 FUNC_0(&VAR_6->interfaces, VAR_7, VAR_5);
}

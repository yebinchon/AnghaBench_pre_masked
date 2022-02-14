
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int u_int ;
struct vm_domain {int dummy; } ;
struct TYPE_6__ {int ref_count; int oflags; int flags; scalar_t__ aflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vm_domain* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct vm_domain*,int *,int) ;
 scalar_t__ FUNC_2 (struct vm_domain*,int,int) ;
 int FUNC_3 (struct vm_domain*) ;
 int FUNC_4 (struct vm_domain*) ;
 int FUNC_5 (struct vm_domain*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int,int,int ,int ) ;
 int FUNC_9 (int) ;

vm_page_t
FUNC_10(int VAR_5, int VAR_6, int VAR_7)
{
 struct vm_domain *VAR_8;
 vm_page_t VAR_9;
 u_int VAR_10;

 VAR_9 = ((void*)0);
 VAR_8 = FUNC_0(VAR_5);
again:
 if (FUNC_2(VAR_8, VAR_7, 1)) {
  FUNC_3(VAR_8);
  VAR_9 = FUNC_8(VAR_5, VAR_6,
      VAR_3, 0);
  FUNC_4(VAR_8);
  if (VAR_9 == ((void*)0))
   FUNC_5(VAR_8, 1);
 }
 if (VAR_9 == ((void*)0)) {
  if (FUNC_1(VAR_8, ((void*)0), VAR_7))
   goto again;
  return (((void*)0));
 }
 FUNC_7(VAR_9);
 FUNC_6(VAR_9);




 VAR_9->aflags = 0;
 VAR_10 = 0;
 if ((VAR_7 & VAR_2) != 0)
  VAR_10 = VAR_0;
 VAR_9->flags &= VAR_10;
 if ((VAR_7 & VAR_1) != 0) {




  FUNC_9(1);
  VAR_9->ref_count = 1;
 }

 VAR_9->oflags = VAR_4;
 return (VAR_9);
}

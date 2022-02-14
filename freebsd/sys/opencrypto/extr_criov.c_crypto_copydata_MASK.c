
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct mbuf {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct uio*,int,int,scalar_t__) ;
 int FUNC_2 (struct mbuf*,int,int,scalar_t__) ;

void
FUNC_3(int VAR_2, caddr_t VAR_3, int VAR_4, int VAR_5, caddr_t VAR_6)
{

 if ((VAR_2 & VAR_0) != 0)
  FUNC_2((struct mbuf *)VAR_3, VAR_4, VAR_5, VAR_6);
 else if ((VAR_2 & VAR_1) != 0)
  FUNC_1((struct uio *)VAR_3, VAR_4, VAR_5, VAR_6);
 else
  FUNC_0(VAR_3 + VAR_4, VAR_6, VAR_5);
}

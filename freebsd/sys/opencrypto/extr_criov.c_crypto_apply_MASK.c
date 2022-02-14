
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct mbuf {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uio*,int,int,int (*) (void*,void*,VAR_2),void*) ;
 int FUNC_1 (struct mbuf*,int,int,int (*) (void*,void*,VAR_3),void*) ;
 int FUNC_2 (void*,void*,...) ;

int
FUNC_3(int VAR_4, caddr_t VAR_5, int VAR_6, int VAR_7,
    int (*VAR_8)(void *, void *, VAR_9), void *VAR_10)
{
 int VAR_11;

 if ((VAR_4 & VAR_0) != 0)
  VAR_11 = FUNC_1((struct mbuf *)VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);
 else if ((VAR_4 & VAR_1) != 0)
  VAR_11 = FUNC_0((struct uio *)VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);
 else
  VAR_11 = (*VAR_8)(VAR_10, VAR_5 + VAR_6, VAR_7);
 return (VAR_11);
}

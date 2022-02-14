
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netbuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct netbuf* FUNC_0 (int,int) ;
 int FUNC_1 (struct netbuf*) ;
 scalar_t__ FUNC_2 (struct netbuf*,struct netbuf*) ;

__attribute__((used)) static struct netbuf *
FUNC_3(struct netbuf *VAR_1)
{
 struct netbuf *VAR_2;

 if ((VAR_2 = FUNC_0(1, sizeof(struct netbuf))) == ((void*)0))
  return (((void*)0));
 if (FUNC_2(VAR_2, VAR_1) == VAR_0) {
  FUNC_1(VAR_2);
  return (((void*)0));
 }
 return (VAR_2);
}

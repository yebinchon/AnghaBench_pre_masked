
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mtu; int mss; char* buffer; } ;
typedef TYPE_1__ ikcpcb ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(ikcpcb *VAR_1, int VAR_2)
{
 char *VAR_3;
 if (VAR_2 < 50 || VAR_2 < (int)VAR_0)
  return -1;
 VAR_3 = (char*)FUNC_1((VAR_2 + VAR_0) * 3);
 if (VAR_3 == ((void*)0))
  return -2;
 VAR_1->mtu = VAR_2;
 VAR_1->mss = VAR_1->mtu - VAR_0;
 FUNC_0(VAR_1->buffer);
 VAR_1->buffer = VAR_3;
 return 0;
}

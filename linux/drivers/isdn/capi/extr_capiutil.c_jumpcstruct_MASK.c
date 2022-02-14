
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p; } ;
typedef TYPE_1__ _cmsg ;


 int VAR_0 ;



__attribute__((used)) static void FUNC_0(_cmsg *VAR_1)
{
 unsigned VAR_2;
 for (VAR_1->p++, VAR_2 = 1; VAR_2;) {

  VAR_1->p++;
  switch (VAR_0) {
  case 128:
   VAR_2++;
   break;
  case 129:
   VAR_2--;
   break;
  }
 }
}

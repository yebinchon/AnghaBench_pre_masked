
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_char ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ NBTNsQuestion ;
typedef int NBTArguments ;


 scalar_t__ FUNC_0 (int *,char*) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static u_char *
FUNC_3(
    u_short VAR_0,
    NBTNsQuestion * VAR_1,
    char *VAR_2,
    NBTArguments * VAR_3)
{

 (void)VAR_3;

 while (VAR_0 != 0) {

  VAR_1 = (NBTNsQuestion *) FUNC_0((u_char *) VAR_1, VAR_2);

  if (VAR_1 == ((void*)0) || (char *)(VAR_1 + 1) > VAR_2) {
   VAR_1 = ((void*)0);
   break;
  }

  switch (FUNC_1(VAR_1->type)) {
  case 129:
  case 128:
   VAR_1 = VAR_1 + 1;
   break;
  default:



   break;
  }
  VAR_0--;
 }


 return ((u_char *) VAR_1);
}

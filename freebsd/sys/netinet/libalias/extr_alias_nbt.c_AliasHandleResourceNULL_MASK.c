
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_char ;
struct TYPE_3__ {int rdlen; } ;
typedef int NBTNsResourceNULL ;
typedef TYPE_1__ NBTNsResource ;
typedef int NBTArguments ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u_char *
FUNC_1(
    NBTNsResource * VAR_0,
    char *VAR_1,
    NBTArguments * VAR_2)
{
 NBTNsResourceNULL *VAR_3;
 u_short VAR_4;

 (void)VAR_2;

 if (VAR_0 == ((void*)0) || (char *)(VAR_0 + 1) > VAR_1)
  return (((void*)0));


 VAR_3 = (NBTNsResourceNULL *) ((u_char *) VAR_0 + sizeof(NBTNsResource));


 VAR_4 = FUNC_0(VAR_0->rdlen);


 while (VAR_4 != 0) {
  if ((char *)(VAR_3 + 1) > VAR_1) {
   VAR_3 = ((void*)0);
   break;
  }
  VAR_3++;
  VAR_4 -= sizeof(NBTNsResourceNULL);
 }
 if ((char *)(VAR_3 + 1) > VAR_1)
  VAR_3 = ((void*)0);

 return ((u_char *) VAR_3);
}

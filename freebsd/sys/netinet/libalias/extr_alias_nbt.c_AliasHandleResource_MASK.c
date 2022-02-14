
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_char ;
struct TYPE_8__ {int type; } ;
typedef TYPE_1__ NBTNsResource ;
typedef int NBTArguments ;


 scalar_t__ FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char*,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char*,int *) ;





 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int,...) ;
 int VAR_0 ;

__attribute__((used)) static u_char *
FUNC_9(
    u_short VAR_1,
    NBTNsResource * VAR_2,
    char *VAR_3,
    NBTArguments
    * VAR_4)
{
 while (VAR_1 != 0) {

  VAR_2 = (NBTNsResource *) FUNC_0((u_char *) VAR_2, VAR_3);

  if (VAR_2 == ((void*)0) || (char *)(VAR_2 + 1) > VAR_3)
   break;





  switch (FUNC_7(VAR_2->type)) {
  case 131:
   VAR_2 = (NBTNsResource *) FUNC_2(
       VAR_2,
       VAR_3,
       VAR_4
       );
   break;
  case 132:
   VAR_2 = (NBTNsResource *) FUNC_1(
       VAR_2,
       VAR_3,
       VAR_4
       );
   break;
  case 129:
   VAR_2 = (NBTNsResource *) FUNC_4(
       VAR_2,
       VAR_3,
       VAR_4
       );
   break;
  case 128:
   VAR_2 = (NBTNsResource *) FUNC_5(
       VAR_2,
       VAR_3,
       VAR_4
       );
   break;
  case 130:
   VAR_2 = (NBTNsResource *) FUNC_3(
       VAR_2,
       VAR_3,
       VAR_4
       );
   break;
  default:







   break;
  }
  VAR_1--;
 }
 return ((u_char *) VAR_2);
}

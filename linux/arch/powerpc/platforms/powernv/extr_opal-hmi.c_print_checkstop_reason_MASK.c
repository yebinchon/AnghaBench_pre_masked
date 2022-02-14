
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int xstop_type; } ;
struct TYPE_4__ {TYPE_1__ xstop_error; } ;
struct OpalHMIEvent {TYPE_2__ u; } ;





 int FUNC_0 (char const*,struct OpalHMIEvent*) ;
 int FUNC_1 (char const*,struct OpalHMIEvent*) ;
 int FUNC_2 (char const*,struct OpalHMIEvent*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0,
     struct OpalHMIEvent *VAR_1)
{
 uint8_t VAR_2 = VAR_1->u.xstop_error.xstop_type;
 switch (VAR_2) {
 case 130:
  FUNC_0(VAR_0, VAR_1);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_1(VAR_0, VAR_1);
  break;
 default:
  FUNC_3("%s	Unknown Malfunction Alert of type %d\n",
         VAR_0, VAR_2);
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int traveltype; } ;
typedef TYPE_1__ aas_reachability_t ;
struct TYPE_5__ {int (* Print ) (int ,char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

int FUNC_1(aas_reachability_t *VAR_3)
{
 switch(VAR_3->traveltype & VAR_1)
 {
  case 130: return 5;
  case 140: return 5;
  case 142: return 5;
  case 134: return 6;
  case 129: return 5;
  case 136: return 5;
  case 132: return 5;
  case 128: return 5;
  case 131: return 5;
  case 139: return 10;
  case 137: return 8;
  case 133: return 6;
  case 141: return 6;
  case 135: return 10;
  case 138: return 10;
  default:
  {
   VAR_2.Print(VAR_0, "travel type %d not implemented yet\n", VAR_3->traveltype);
   return 8;
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int origin_type; } ;
struct TYPE_3__ {int origin_type; } ;


 int FUNC_0 (char*) ;





 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

const char *FUNC_1(void)
{
 int VAR_2;
 if (VAR_1)
  VAR_2 = VAR_1->origin_type;
 else if(VAR_0)
  VAR_2 = VAR_0->origin_type;
 else
  FUNC_0("current_config_origin_type called outside config callback");

 switch (VAR_2) {
 case 132:
  return "blob";
 case 130:
  return "file";
 case 129:
  return "standard input";
 case 128:
  return "submodule-blob";
 case 131:
  return "command line";
 default:
  FUNC_0("unknown config origin type");
 }
}

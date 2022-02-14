
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* filename; } ;


 int FUNC_0 (char*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

const char *FUNC_1(void)
{
 const char *VAR_2;
 if (VAR_1)
  VAR_2 = VAR_1->filename;
 else if (VAR_0)
  VAR_2 = VAR_0->name;
 else
  FUNC_0("current_config_name called outside config callback");
 return VAR_2 ? VAR_2 : "";
}

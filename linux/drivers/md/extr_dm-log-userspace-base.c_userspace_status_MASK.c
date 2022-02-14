
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct log_c {int integrated_flush; int uuid; int usr_argc; int usr_argv_str; } ;
struct dm_dirty_log {TYPE_1__* type; struct log_c* context; } ;
typedef int status_type_t ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;


 char* FUNC_2 (int ,char) ;
 int FUNC_3 (struct log_c*,int ,int ,int *,int ,char*,size_t*) ;

__attribute__((used)) static int FUNC_4(struct dm_dirty_log *VAR_1, status_type_t VAR_2,
       char *VAR_3, unsigned VAR_4)
{
 int VAR_5 = 0;
 char *VAR_6;
 size_t VAR_7 = (size_t)VAR_4;
 struct log_c *VAR_8 = VAR_1->context;

 switch (VAR_2) {
 case 129:
  VAR_5 = FUNC_3(VAR_8, VAR_8->uuid, VAR_0,
      ((void*)0), 0, VAR_3, &VAR_7);

  if (VAR_5) {
   VAR_7 = 0;
   FUNC_1("%s 1 COM_FAILURE", VAR_1->type->name);
  }
  break;
 case 128:
  VAR_7 = 0;
  VAR_6 = FUNC_2(VAR_8->usr_argv_str, ' ');
  FUNC_0(!VAR_6);
  VAR_6++;

  FUNC_1("%s %u %s ", VAR_1->type->name, VAR_8->usr_argc, VAR_8->uuid);
  if (VAR_8->integrated_flush)
   FUNC_1("integrated_flush ");
  FUNC_1("%s ", VAR_6);
  break;
 }
 return (VAR_5) ? 0 : (int)VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {int * firmware_id; } ;
struct TYPE_2__ {struct serio* serio; } ;
struct psmouse {TYPE_1__ ps2dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (char*,char const* const*) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 char* FUNC_4 (char**,char*) ;

bool FUNC_5(struct psmouse *VAR_1, const char * const VAR_2[])
{
 struct serio *VAR_3 = VAR_1->ps2dev.serio;
 char *VAR_4, *VAR_5, *VAR_6;
 bool VAR_7 = 0;

 if (FUNC_3(VAR_3->firmware_id, "PNP: ", 5))
  return 0;

 VAR_5 = FUNC_1(&VAR_3->firmware_id[5],
         sizeof(VAR_3->firmware_id) - 5,
         VAR_0);
 if (!VAR_5)
  return 0;

 VAR_6 = VAR_5;
 while ((VAR_4 = FUNC_4(&VAR_5, " ")) != ((void*)0)) {
  if (FUNC_2(VAR_4, VAR_2)) {
   VAR_7 = 1;
   break;
  }
 }

 FUNC_0(VAR_6);
 return VAR_7;
}

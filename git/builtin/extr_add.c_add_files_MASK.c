
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dir_struct {int ignored_nr; int nr; TYPE_2__** entries; TYPE_1__** ignored; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {char* name; } ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct dir_struct *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = 0;

 if (VAR_4->ignored_nr) {
  FUNC_4(VAR_2, "%s", FUNC_0(VAR_1));
  for (VAR_6 = 0; VAR_6 < VAR_4->ignored_nr; VAR_6++)
   FUNC_4(VAR_2, "%s\n", VAR_4->ignored[VAR_6]->name);
  FUNC_4(VAR_2, "%s", FUNC_0("Use -f if you really want to add them.\n"));
  VAR_7 = 1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->nr; VAR_6++) {
  if (FUNC_1(&VAR_3, VAR_4->entries[VAR_6]->name, VAR_5)) {
   if (!VAR_0)
    FUNC_3(FUNC_0("adding files failed"));
   VAR_7 = 1;
  } else {
   FUNC_2(VAR_4->entries[VAR_6]->name);
  }
 }
 return VAR_7;
}

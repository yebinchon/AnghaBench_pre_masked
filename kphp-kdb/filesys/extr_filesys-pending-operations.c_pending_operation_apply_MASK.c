
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int st_mode; } ;
struct pending_operation {char* oldpath; char* newpath; int type; TYPE_1__ st; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,TYPE_1__*) ;
 int FUNC_6 (char*,int ) ;
 char* VAR_1 ;
 char* VAR_2 ;






 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int,char*,char*,char*) ;
 int FUNC_9 (char*,char*) ;

void FUNC_10 (struct pending_operation *VAR_3) {
  char VAR_4[VAR_0], VAR_5[VAR_0];
  VAR_4[0] = VAR_5[0] = 0;
  if (VAR_3->oldpath) {
    FUNC_1 (FUNC_8 (VAR_4, VAR_0, "%s/%s", VAR_2, VAR_3->oldpath) < VAR_0);
  }
  if (VAR_3->newpath) {
    FUNC_1 (FUNC_8 (VAR_5, VAR_0, "%s/%s", VAR_1, VAR_3->newpath) < VAR_0);
  }
  switch (VAR_3->type) {
    case 131:
      FUNC_4 ("pending_operation_apply (P.type == pot_null)\n");
      FUNC_3 (1);
      break;
    case 132:
      FUNC_0 (FUNC_6 (VAR_5, VAR_3->st.st_mode));
      FUNC_0 (FUNC_5 (VAR_5, &VAR_3->st));
      break;
    case 128:
      FUNC_0 (FUNC_9 (VAR_3->oldpath, VAR_5));
      FUNC_0 (FUNC_5 (VAR_5, &VAR_3->st));
      break;
    case 129:
      FUNC_0 (FUNC_7 (VAR_4, VAR_5));
      FUNC_0 (FUNC_5 (VAR_5, &VAR_3->st));
      break;
    case 130:
      FUNC_0 (FUNC_2 (VAR_5));
      break;
    case 133:
      FUNC_0 (FUNC_5 (VAR_5, &VAR_3->st));
      break;
  }
}

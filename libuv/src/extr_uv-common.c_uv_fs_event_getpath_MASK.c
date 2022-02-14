
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; } ;
typedef TYPE_1__ uv_fs_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(uv_fs_event_t* VAR_2, char* VAR_3, size_t* VAR_4) {
  size_t VAR_5;

  if (!FUNC_2(VAR_2)) {
    *VAR_4 = 0;
    return VAR_0;
  }

  VAR_5 = FUNC_1(VAR_2->path);
  if (VAR_5 >= *VAR_4) {
    *VAR_4 = VAR_5 + 1;
    return VAR_1;
  }

  FUNC_0(VAR_3, VAR_2->path, VAR_5);
  *VAR_4 = VAR_5;
  VAR_3[VAR_5] = '\0';

  return 0;
}

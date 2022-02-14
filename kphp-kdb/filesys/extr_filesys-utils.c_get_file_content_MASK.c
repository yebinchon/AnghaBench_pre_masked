
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int st_size; int st_mode; } ;
struct TYPE_5__ {TYPE_1__ st; int filename; } ;
typedef TYPE_2__ file_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned char* FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int,char*,int ) ;
 unsigned char* FUNC_5 (int) ;

int FUNC_6 (char *VAR_1, file_t *VAR_2, unsigned char **VAR_3, int *VAR_4) {
  *VAR_3 = ((void*)0);
  *VAR_4 = 0;
  if (FUNC_1 (VAR_2->st.st_mode)) {
    FUNC_4 (3, "link: %s\n", VAR_2->filename);
    *VAR_3 = FUNC_5 (VAR_0);
    *VAR_4 = FUNC_3 (VAR_1, (char *) *VAR_3, VAR_0);
    if (*VAR_4 < 0 || *VAR_4 >= VAR_0 - 1) {
      return -1;
    }
    (*VAR_3)[*VAR_4] = 0;
    (*VAR_4)++;
    return 0;
  }
  if (FUNC_0 (VAR_2->st.st_mode)) {
    FUNC_4 (3, "dir: %s\n", VAR_2->filename);
    *VAR_4 = 0;
    return 0;
  }
  FUNC_4 (3, "file: %s\n", VAR_2->filename);
  *VAR_4 = VAR_2->st.st_size;
  *VAR_3 = FUNC_2 (VAR_1, *VAR_4);
  if (*VAR_3 == ((void*)0)) {
    return -2;
  }
  return 0;
}

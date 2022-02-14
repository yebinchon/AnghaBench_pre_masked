
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int last_error ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (int,char*,int,void*) ;

__attribute__((used)) static int FUNC_2 (void **VAR_1, int *VAR_2, int VAR_3, void *VAR_4, char VAR_5[VAR_0]) {
  FUNC_1 (4, "ip_append (*n = %d, cmd = %p)\n", *VAR_2, VAR_4);
  if (*VAR_2 >= VAR_3) {
    FUNC_0 (VAR_5, sizeof (VAR_5[0]) * VAR_0, "too many commands (%d)", *VAR_2);
    return 0;
  }
  VAR_1[(*VAR_2)++] = VAR_4;
  return 1;
}

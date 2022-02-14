
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_type {char* id; int params_num; long long params_types; char* print_id; int flags; scalar_t__ real_id; scalar_t__ constructors; scalar_t__ constructors_num; scalar_t__ name; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,struct tl_type*,int ) ;
 struct tl_type** FUNC_5 (int ,struct tl_type*) ;
 int FUNC_6 (int,char*,char*) ;
 int FUNC_7 (char*,int) ;
 void* FUNC_8 (int) ;
 char* FUNC_9 (char*) ;

struct tl_type *FUNC_10 (const char *VAR_2, int VAR_3, int VAR_4, long long VAR_5) {
  char *VAR_6 = FUNC_8 (VAR_3 + 1);
  FUNC_3 (VAR_6, VAR_2, VAR_3);
  VAR_6[VAR_3] = 0;
  FUNC_6 (2, "Add type %s\n", VAR_6);
  struct tl_type VAR_7 = {.id = VAR_6};
  struct tl_type **VAR_8 = 0;
  if ((VAR_8 = FUNC_5 (VAR_0, &VAR_7))) {
    FUNC_7 (VAR_6, VAR_3 + 1);
    if (VAR_4 >= 0 && ((*VAR_8)->params_num != VAR_4 || (*VAR_8)->params_types != VAR_5)) {
      FUNC_0 ("Wrong params_num or types for type %s\n", (*VAR_8)->id);
      return 0;
    }
    return *VAR_8;
  }
  struct tl_type *VAR_9 = FUNC_8 (sizeof (*VAR_9));
  VAR_9->id = VAR_6;
  VAR_9->print_id = FUNC_9 (VAR_9->id);
  int VAR_10;
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) if (VAR_9->print_id[VAR_10] == '.' || VAR_9->print_id[VAR_10] == '#' || VAR_9->print_id[VAR_10] == ' ') {
    VAR_9->print_id[VAR_10] = '$';
  }
  VAR_9->name = 0;
  VAR_9->constructors_num = 0;
  VAR_9->constructors = 0;
  VAR_9->flags = 0;
  VAR_9->real_id = 0;
  if (VAR_4 >= 0) {
    FUNC_1 (VAR_4 <= 64);
    VAR_9->params_num = VAR_4;
    VAR_9->params_types = VAR_5;
  } else {
    VAR_9->flags |= 4;
    VAR_9->params_num = -1;
  }
  VAR_0 = FUNC_4 (VAR_0, VAR_9, FUNC_2 ());
  VAR_1 ++;
  return VAR_9;
}

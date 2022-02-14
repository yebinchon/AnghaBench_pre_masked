
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_type {int dummy; } ;
struct tl_constructor {char* id; unsigned int name; char* print_id; scalar_t__ right; scalar_t__ left; scalar_t__ real_id; struct tl_type* type; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,struct tl_constructor*,int ) ;
 scalar_t__ FUNC_5 (int ,struct tl_constructor*) ;
 int FUNC_6 (int,char*,char*) ;
 int FUNC_7 (char*,int) ;
 void* FUNC_8 (int) ;
 char* FUNC_9 (char*) ;

struct tl_constructor *FUNC_10 (struct tl_type *VAR_2, const char *VAR_3, int VAR_4, int VAR_5) {

  int VAR_6 = 0;
  while (VAR_6 < VAR_4 && ((VAR_3[VAR_6] != '#') || VAR_5)) { VAR_6++; }
  char *VAR_7 = FUNC_8 (VAR_6 + 1);
  FUNC_3 (VAR_7, VAR_3, VAR_6);
  VAR_7[VAR_6] = 0;
  FUNC_6 (2, "Add function %s\n", VAR_7);

  unsigned VAR_8 = 0;
  if (VAR_6 < VAR_4) {
    FUNC_1 (VAR_4 - VAR_6 == 9);
    int VAR_9;
    for (VAR_9 = 1; VAR_9 <= 8; VAR_9++) {
      VAR_8 = (VAR_8 << 4) + (VAR_3[VAR_6 + VAR_9] <= '9' ? VAR_3[VAR_6 + VAR_9] - '0' : VAR_3[VAR_6 + VAR_9] - 'a' + 10);
    }
    FUNC_1 (VAR_8 && VAR_8 != -1);
  }

  struct tl_constructor VAR_10 = {.id = VAR_7};
  if (FUNC_5 (VAR_0, &VAR_10)) {
    FUNC_0 ("Duplicate function id `%s`\n", VAR_7);
    FUNC_7 (VAR_7, VAR_4 + 1);
    return 0;
  }

  struct tl_constructor *VAR_11 = FUNC_8 (sizeof (*VAR_11));
  VAR_11->type = VAR_2;
  VAR_11->name = VAR_8;
  VAR_11->id = VAR_7;
  VAR_11->print_id = FUNC_9 (VAR_7);
  VAR_11->real_id = 0;

  int VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) if (VAR_11->print_id[VAR_12] == '.' || VAR_11->print_id[VAR_12] == '#' || VAR_11->print_id[VAR_12] == ' ') {
    VAR_11->print_id[VAR_12] = '$';
  }

  VAR_11->left = VAR_11->right = 0;
  VAR_0 = FUNC_4 (VAR_0, VAR_11, FUNC_2 ());
  VAR_1 ++;
  return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_hints_add_object_text {char* text; scalar_t__ object_id; scalar_t__ object_type; int text_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,int,int,char*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_6 (char*) ;
 int ** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

int FUNC_7 (struct lev_hints_add_object_text *VAR_9) {
  if (!FUNC_2 (VAR_9->object_type) || !FUNC_0 (VAR_9->object_id) || !FUNC_1 (VAR_9->text_len)) {
    return 0;
  }
  if (VAR_8 || VAR_4) {
    return 1;
  }

  VAR_1 -= FUNC_4();
  char *VAR_10 = FUNC_6 (VAR_9->text);
  VAR_1 += FUNC_4();
  if (VAR_10 == ((void*)0)) {
    if (VAR_7 > 1) {
      FUNC_5 (VAR_6, "botva %s\n", VAR_9->text);
    }
    return 0;
  }

  VAR_5[(int)VAR_9->object_type][1]++;

  FUNC_3 (&VAR_3, &VAR_2, (int)VAR_9->object_type, (int)VAR_9->object_id, VAR_10);
  VAR_0++;

  return 1;
}

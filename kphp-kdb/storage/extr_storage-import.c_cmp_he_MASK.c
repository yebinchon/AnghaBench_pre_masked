
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* key; scalar_t__ mtime; } ;
typedef TYPE_1__ hash_entry_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*,int) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static int FUNC_4 (const void *VAR_0, const void *VAR_1) {
  const hash_entry_t *VAR_2 = *(const hash_entry_t **) VAR_0;
  const hash_entry_t *VAR_3 = *(const hash_entry_t **) VAR_1;
  const char *VAR_4 = VAR_2->key;
  const char *VAR_5 = VAR_3->key;
  if (VAR_4 == VAR_5) { return 0; }
  const char *VAR_6 = FUNC_3 (VAR_4, '/');
  FUNC_0 (VAR_6 != ((void*)0));
  const char *VAR_7 = FUNC_3 (VAR_5, '/');
  FUNC_0 (VAR_7 != ((void*)0));
  int VAR_8 = VAR_6 - VAR_4, VAR_9 = VAR_7 - VAR_5;
  if (VAR_8 != VAR_9) {
    return FUNC_1 (VAR_4, VAR_5);
  }
  int VAR_10 = FUNC_2 (VAR_4, VAR_5, VAR_8);
  if (VAR_10) {
    return VAR_10;
  }
  if (VAR_2->mtime < VAR_3->mtime) {
    return -1;
  }
  if (VAR_2->mtime > VAR_3->mtime) {
    return 1;
  }
  return FUNC_1 (VAR_6 + 1, VAR_7 + 1);
}

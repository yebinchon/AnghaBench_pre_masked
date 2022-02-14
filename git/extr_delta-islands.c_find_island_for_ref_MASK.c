
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int buf; scalar_t__ len; } ;
struct object_id {int dummy; } ;
struct TYPE_4__ {int rm_so; scalar_t__ rm_eo; } ;
typedef TYPE_1__ regmatch_t ;


 int FUNC_0 (TYPE_1__*) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct object_id const*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,char const*,int,TYPE_1__*,int ) ;
 int FUNC_4 (struct strbuf*,char const*,scalar_t__) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(const char *VAR_3, const struct object_id *VAR_4,
          int VAR_5, void *VAR_6)
{





 regmatch_t VAR_7[16];
 int VAR_8, VAR_9;
 struct strbuf VAR_10 = VAR_0;


 for (VAR_8 = VAR_2 - 1; VAR_8 >= 0; VAR_8--) {
  if (!FUNC_3(&VAR_1[VAR_8], VAR_3,
        FUNC_0(VAR_7), VAR_7, 0))
   break;
 }

 if (VAR_8 < 0)
  return 0;

 if (VAR_7[FUNC_0(VAR_7) - 1].rm_so != -1)
  FUNC_7(FUNC_1("island regex from config has "
     "too many capture groups (max=%d)"),
   (int)FUNC_0(VAR_7) - 2);

 for (VAR_9 = 1; VAR_9 < FUNC_0(VAR_7); VAR_9++) {
  regmatch_t *VAR_11 = &VAR_7[VAR_9];

  if (VAR_11->rm_so == -1)
   continue;

  if (VAR_10.len)
   FUNC_5(&VAR_10, '-');

  FUNC_4(&VAR_10, VAR_3 + VAR_11->rm_so, VAR_11->rm_eo - VAR_11->rm_so);
 }

 FUNC_2(VAR_10.buf, VAR_4);
 FUNC_6(&VAR_10);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct image {int nr; size_t len; char* buf; TYPE_1__* line; TYPE_1__* line_allocated; } ;
struct apply_state {int allow_overlap; } ;
struct TYPE_6__ {int flag; scalar_t__ len; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (int ,size_t,int) ;
 int FUNC_6 (size_t,size_t) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct apply_state *VAR_1,
    struct image *VAR_2,
    int VAR_3,
    struct image *VAR_4,
    struct image *VAR_5)
{




 int VAR_6, VAR_7;
 size_t VAR_8, VAR_9, VAR_10 = 0;
 char *VAR_11;
 int VAR_12;
 VAR_12 = VAR_4->nr;
 if (VAR_12 > VAR_2->nr - VAR_3)
  VAR_12 = VAR_2->nr - VAR_3;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_10 += VAR_2->line[VAR_6].len;

 VAR_8 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_12; VAR_6++)
  VAR_8 += VAR_2->line[VAR_3 + VAR_6].len;
 VAR_9 = VAR_5->len;


 VAR_11 = FUNC_7(FUNC_5(FUNC_6(VAR_2->len, VAR_8), VAR_9, 1));
 FUNC_4(VAR_11, VAR_2->buf, VAR_10);
 FUNC_4(VAR_11 + VAR_10, VAR_5->buf, VAR_5->len);
 FUNC_4(VAR_11 + VAR_10 + VAR_5->len,
        VAR_2->buf + (VAR_10 + VAR_8),
        VAR_2->len - (VAR_10 + VAR_8));
 FUNC_3(VAR_2->buf);
 VAR_2->buf = VAR_11;
 VAR_2->len += VAR_9 - VAR_8;
 VAR_11[VAR_2->len] = '\0';


 VAR_7 = VAR_2->nr + VAR_5->nr - VAR_12;
 if (VAR_12 < VAR_5->nr) {




  FUNC_2(VAR_2->line, VAR_7);
  VAR_2->line_allocated = VAR_2->line;
 }
 if (VAR_12 != VAR_5->nr)
  FUNC_1(VAR_2->line + VAR_3 + VAR_5->nr,
      VAR_2->line + VAR_3 + VAR_12,
      VAR_2->nr - (VAR_3 + VAR_12));
 FUNC_0(VAR_2->line + VAR_3, VAR_5->line, VAR_5->nr);
 if (!VAR_1->allow_overlap)
  for (VAR_6 = 0; VAR_6 < VAR_5->nr; VAR_6++)
   VAR_2->line[VAR_3 + VAR_6].flag |= VAR_0;
 VAR_2->nr = VAR_7;
}

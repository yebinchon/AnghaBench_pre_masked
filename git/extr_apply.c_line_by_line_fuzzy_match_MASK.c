
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct image {size_t len; char* buf; int nr; TYPE_1__* line; } ;
struct TYPE_2__ {size_t len; int flag; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,size_t) ;
 int FUNC_1 (char) ;
 int FUNC_2 (struct strbuf*,char*,size_t) ;
 char* FUNC_3 (struct strbuf*,size_t*) ;
 int FUNC_4 (struct strbuf*,size_t) ;
 int FUNC_5 (struct image*,struct image*,char*,size_t,size_t) ;

__attribute__((used)) static int FUNC_6(struct image *VAR_1,
        struct image *VAR_2,
        struct image *VAR_3,
        unsigned long VAR_4,
        int VAR_5,
        int VAR_6)
{
 int VAR_7;
 size_t VAR_8 = 0;
 size_t VAR_9 = 0;
 size_t VAR_10 = VAR_3->len;
 size_t VAR_11;
 char *VAR_12;
 char *VAR_13;
 char *VAR_14;
 struct strbuf VAR_15;
 char *VAR_16;
 size_t VAR_17;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  size_t VAR_18 = VAR_2->line[VAR_7].len;
  size_t VAR_19 = VAR_1->line[VAR_5+VAR_7].len;

  if (!FUNC_0(VAR_1->buf + VAR_4 + VAR_8, VAR_19,
          VAR_2->buf + VAR_9, VAR_18))
   return 0;
  if (VAR_2->line[VAR_7].flag & VAR_0)
   VAR_10 += VAR_19 - VAR_18;
  VAR_8 += VAR_19;
  VAR_9 += VAR_18;
 }
 VAR_12 = VAR_13 = VAR_2->buf + VAR_9;
 for ( ; VAR_7 < VAR_2->nr; VAR_7++)
  VAR_9 += VAR_2->line[VAR_7].len;
 VAR_14 = VAR_2->buf + VAR_9;
 for ( ; VAR_12 < VAR_14; VAR_12++)
  if (!FUNC_1(*VAR_12))
   return 0;
 VAR_11 = VAR_14 - VAR_13;
 FUNC_4(&VAR_15, VAR_8 + VAR_11);
 FUNC_2(&VAR_15, VAR_1->buf + VAR_4, VAR_8);
 FUNC_2(&VAR_15, VAR_13, VAR_11);
 VAR_16 = FUNC_3(&VAR_15, &VAR_17);
 FUNC_5(VAR_2, VAR_3,
          VAR_16, VAR_17, VAR_10);
 return 1;
}

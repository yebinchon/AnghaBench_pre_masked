
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct lazy_entry {int dummy; } ;
struct index_state {TYPE_1__** cache; } ;
struct dir_entry {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct index_state*,int,int,struct dir_entry*,struct strbuf*,struct lazy_entry*) ;
 struct dir_entry* FUNC_3 (struct index_state*,struct dir_entry*,struct strbuf*) ;
 int FUNC_4 (struct strbuf*,char) ;
 int FUNC_5 (struct strbuf*,int) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(
 struct index_state *VAR_0,
 int VAR_1,
 int VAR_2,
 struct dir_entry *VAR_3,
 struct strbuf *VAR_4,
 struct lazy_entry *VAR_5,
 struct dir_entry **VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9 = VAR_4->len;
 struct dir_entry *VAR_10;

 VAR_10 = FUNC_3(VAR_0, VAR_3, VAR_4);

 FUNC_4(VAR_4, '/');





 if (VAR_1 + 1 >= VAR_2)
  VAR_8 = VAR_2;
 else if (FUNC_6(VAR_0->cache[VAR_1 + 1]->name, VAR_4->buf, VAR_4->len) > 0)
  VAR_8 = VAR_1 + 1;
 else if (FUNC_6(VAR_0->cache[VAR_2 - 1]->name, VAR_4->buf, VAR_4->len) == 0)
  VAR_8 = VAR_2;
 else {
  int VAR_11 = VAR_1;
  int VAR_12 = VAR_2;
  FUNC_0(VAR_11 >= 0);
  while (VAR_11 < VAR_12) {
   int VAR_13 = VAR_11 + ((VAR_12 - VAR_11) >> 1);
   int VAR_14 = FUNC_6(VAR_0->cache[VAR_13]->name, VAR_4->buf, VAR_4->len);
   if (VAR_14 == 0)
    VAR_11 = VAR_13 + 1;
   else if (VAR_14 > 0)
    VAR_12 = VAR_13;
   else
    FUNC_1("cache entry out of order");
  }
  VAR_8 = VAR_11;
 }




 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_8, VAR_10, VAR_4, VAR_5);

 FUNC_5(VAR_4, VAR_9);

 *VAR_6 = VAR_10;
 return VAR_7;
}

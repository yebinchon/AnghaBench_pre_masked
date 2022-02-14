
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct stat {int st_mode; } ;
struct index_state {int cache_nr; TYPE_1__** cache; } ;
struct TYPE_2__ {int name; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct index_state*,int ,int ) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*,struct stat*) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*,char const*) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct index_state *VAR_1, const char *VAR_2,
        int VAR_3, int VAR_4)
{
 int VAR_5;
 struct strbuf VAR_6 = VAR_0;
 struct stat VAR_7;

 FUNC_6(&VAR_6, VAR_2);
 FUNC_5(&VAR_6, '/');

 VAR_5 = FUNC_2(VAR_1, VAR_6.buf, VAR_6.len);

 if (VAR_5 < 0)
  VAR_5 = -1 - VAR_5;
 if (VAR_5 < VAR_1->cache_nr &&
     !FUNC_9(VAR_6.buf, VAR_1->cache[VAR_5]->name, VAR_6.len)) {
  FUNC_7(&VAR_6);
  return 1;
 }

 FUNC_7(&VAR_6);
 return VAR_3 && !FUNC_4(VAR_2, &VAR_7) && FUNC_0(VAR_7.st_mode) &&
  !(VAR_4 && FUNC_3(VAR_2)) &&
  !FUNC_1(VAR_2, FUNC_8(VAR_2));
}

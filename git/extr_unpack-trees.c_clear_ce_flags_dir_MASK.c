
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; int buf; } ;
struct pattern_list {int dummy; } ;
struct index_state {int dummy; } ;
struct cache_entry {int name; } ;
typedef enum pattern_match_result { ____Placeholder_pattern_match_result } pattern_match_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct index_state*,struct cache_entry**,int,struct strbuf*,int,int,struct pattern_list*,int) ;
 int FUNC_1 (int ,scalar_t__,char*,int*,struct pattern_list*,struct index_state*) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct index_state *VAR_2,
         struct cache_entry **VAR_3, int VAR_4,
         struct strbuf *VAR_5,
         char *VAR_6,
         int VAR_7, int VAR_8,
         struct pattern_list *VAR_9,
         enum pattern_match_result VAR_10)
{
 struct cache_entry **VAR_11;
 int VAR_12 = VAR_0;
 int VAR_13;
 enum pattern_match_result VAR_14;
 VAR_14 = FUNC_1(VAR_5->buf, VAR_5->len,
     VAR_6, &VAR_12, VAR_9, VAR_2);

 FUNC_2(VAR_5, '/');


 if (VAR_14 == VAR_1)
  VAR_14 = VAR_10;

 for (VAR_11 = VAR_3; VAR_11 != VAR_3 + VAR_4; VAR_11++) {
  struct cache_entry *VAR_15 = *VAR_11;
  if (FUNC_4(VAR_15->name, VAR_5->buf, VAR_5->len))
   break;
 }
 VAR_13 = FUNC_0(VAR_2, VAR_3, VAR_11 - VAR_3,
         VAR_5,
         VAR_7, VAR_8,
         VAR_9, VAR_14);
 FUNC_3(VAR_5, VAR_5->len - 1);
 return VAR_13;
}

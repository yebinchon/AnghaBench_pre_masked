
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {int pathspec; } ;
struct strbuf {int dummy; } ;
struct name_entry {int dummy; } ;
struct index_state {int dummy; } ;


 int FUNC_0 (struct index_state*,struct name_entry*,struct strbuf*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct index_state *VAR_0,
      struct name_entry *VAR_1,
      struct traverse_info *VAR_2,
      struct strbuf *VAR_3,
      int VAR_4)
{
 if (!VAR_2->pathspec || VAR_4 == 2)
  return 2;
 if (VAR_4 < 0)
  return VAR_4;
 return FUNC_0(VAR_0, VAR_1, VAR_3,
          0, VAR_2->pathspec);
}

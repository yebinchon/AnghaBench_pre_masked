
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct pathspec {int magic; } ;
struct name_entry {int mode; } ;
struct index_state {int dummy; } ;
typedef enum interesting { ____Placeholder_interesting } interesting ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct index_state*,struct name_entry const*,struct strbuf*,int,struct pathspec const*,int) ;
 int VAR_3 ;
 int VAR_4 ;

enum interesting FUNC_2(struct index_state *VAR_5,
     const struct name_entry *VAR_6,
     struct strbuf *VAR_7, int VAR_8,
     const struct pathspec *VAR_9)
{
 enum interesting VAR_10, VAR_11;
 VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, 0);
 if (!(VAR_9->magic & VAR_0) ||
     VAR_10 <= VAR_4)
  return VAR_10;

 VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, 1);


 if (VAR_10 == VAR_1 &&
     VAR_11 == VAR_4)
  return VAR_3;


 if (VAR_11 <= VAR_4)
  return VAR_10;


 if (FUNC_0(VAR_6->mode) &&
     VAR_10 >= VAR_3 &&
     VAR_11 == VAR_3)
  return VAR_3;

 if ((VAR_10 == VAR_3 &&
      VAR_11 >= VAR_3) ||
     (VAR_10 == VAR_1 &&
      VAR_11 == VAR_3))
  return VAR_4;

 return VAR_2;
}

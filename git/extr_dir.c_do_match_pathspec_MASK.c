
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pathspec {int nr; int magic; int max_depth; TYPE_1__* items; scalar_t__ recursive; } ;
struct index_state {int dummy; } ;
struct TYPE_2__ {int magic; int len; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct pathspec const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct index_state const*,TYPE_1__*,int,char const*,int,unsigned int) ;
 scalar_t__ FUNC_2 (char const*,int,int ,int) ;

__attribute__((used)) static int FUNC_3(const struct index_state *VAR_11,
        const struct pathspec *VAR_12,
        const char *VAR_13, int VAR_14,
        int VAR_15, char *VAR_16,
        unsigned VAR_17)
{
 int VAR_18, VAR_19 = 0, VAR_20 = VAR_17 & VAR_0;

 FUNC_0(VAR_12,
         VAR_6 |
         VAR_10 |
         VAR_9 |
         VAR_7 |
         VAR_8 |
         VAR_5 |
         VAR_4);

 if (!VAR_12->nr) {
  if (!VAR_12->recursive ||
      !(VAR_12->magic & VAR_10) ||
      VAR_12->max_depth == -1)
   return VAR_3;

  if (FUNC_2(VAR_13, VAR_14, 0, VAR_12->max_depth))
   return VAR_1;
  else
   return 0;
 }

 VAR_13 += VAR_15;
 VAR_14 -= VAR_15;

 for (VAR_18 = VAR_12->nr - 1; VAR_18 >= 0; VAR_18--) {
  int VAR_21;

  if ((!VAR_20 && VAR_12->items[VAR_18].magic & VAR_5) ||
      ( VAR_20 && !(VAR_12->items[VAR_18].magic & VAR_5)))
   continue;

  if (VAR_16 && VAR_16[VAR_18] == VAR_1)
   continue;




  if (VAR_16 && VAR_12->items[VAR_18].magic & VAR_5)
   VAR_16[VAR_18] = VAR_2;
  VAR_21 = FUNC_1(VAR_11, VAR_12->items+VAR_18, VAR_15, VAR_13,
       VAR_14, VAR_17);
  if (VAR_12->recursive &&
      (VAR_12->magic & VAR_10) &&
      VAR_12->max_depth != -1 &&
      VAR_21 && VAR_21 != VAR_2) {
   int VAR_22 = VAR_12->items[VAR_18].len;
   if (VAR_13[VAR_22] == '/')
    VAR_22++;
   if (FUNC_2(VAR_13+VAR_22, VAR_14-VAR_22, 0, VAR_12->max_depth))
    VAR_21 = VAR_1;
   else
    VAR_21 = 0;
  }
  if (VAR_21) {
   if (VAR_19 < VAR_21)
    VAR_19 = VAR_21;
   if (VAR_16 && VAR_16[VAR_18] < VAR_21)
    VAR_16[VAR_18] = VAR_21;
  }
 }
 return VAR_19;
}

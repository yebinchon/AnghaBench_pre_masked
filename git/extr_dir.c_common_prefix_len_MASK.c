
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pathspec {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {int magic; size_t prefix; size_t nowildcard_len; char* match; } ;


 int FUNC_0 (struct pathspec const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static size_t FUNC_1(const struct pathspec *VAR_7)
{
 int VAR_8;
 size_t VAR_9 = 0;
 FUNC_0(VAR_7,
         VAR_2 |
         VAR_6 |
         VAR_5 |
         VAR_3 |
         VAR_4 |
         VAR_1 |
         VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_7->nr; VAR_8++) {
  size_t VAR_10 = 0, VAR_11 = 0, VAR_12;
  if (VAR_7->items[VAR_8].magic & VAR_1)
   continue;
  if (VAR_7->items[VAR_8].magic & VAR_4)
   VAR_12 = VAR_7->items[VAR_8].prefix;
  else
   VAR_12 = VAR_7->items[VAR_8].nowildcard_len;
  while (VAR_10 < VAR_12 && (VAR_8 == 0 || VAR_10 < VAR_9)) {
   char VAR_13 = VAR_7->items[VAR_8].match[VAR_10];
   if (VAR_13 != VAR_7->items[0].match[VAR_10])
    break;
   if (VAR_13 == '/')
    VAR_11 = VAR_10 + 1;
   VAR_10++;
  }
  if (VAR_8 == 0 || VAR_11 < VAR_9) {
   VAR_9 = VAR_11;
   if (!VAR_9)
    break;
  }
 }
 return VAR_9;
}

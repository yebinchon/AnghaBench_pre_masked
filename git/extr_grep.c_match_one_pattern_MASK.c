
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct grep_pat {scalar_t__ token; size_t field; scalar_t__ word_regexp; } ;
struct TYPE_6__ {int rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
typedef enum grep_context { ____Placeholder_grep_context } grep_context ;
struct TYPE_7__ {char* field; size_t len; } ;


 size_t FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_3 (struct grep_pat*,char*,char*,TYPE_1__*,int) ;
 int FUNC_4 (char*,char**) ;
 scalar_t__ FUNC_5 (char*,char const*,size_t) ;
 scalar_t__ FUNC_6 (char) ;

__attribute__((used)) static int FUNC_7(struct grep_pat *VAR_5, char *VAR_6, char *VAR_7,
        enum grep_context VAR_8,
        regmatch_t *VAR_9, int VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = 0;
 const char *VAR_13 = VAR_6;

 if ((VAR_5->token != VAR_1) &&
     ((VAR_5->token == VAR_2) != (VAR_8 == VAR_0)))
  return 0;

 if (VAR_5->token == VAR_2) {
  const char *VAR_14;
  size_t VAR_15;
  FUNC_1(VAR_5->field < FUNC_0(VAR_4));
  VAR_14 = VAR_4[VAR_5->field].field;
  VAR_15 = VAR_4[VAR_5->field].len;
  if (FUNC_5(VAR_6, VAR_14, VAR_15))
   return 0;
  VAR_6 += VAR_15;
  switch (VAR_5->field) {
  case 129:
  case 128:
   VAR_12 = FUNC_4(VAR_6, &VAR_7);
   break;
  default:
   break;
  }
 }

 again:
 VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_9, VAR_10);

 if (VAR_11 && VAR_5->word_regexp) {
  if ((VAR_9[0].rm_so < 0) ||
      (VAR_7 - VAR_6) < VAR_9[0].rm_so ||
      (VAR_9[0].rm_eo < 0) ||
      (VAR_7 - VAR_6) < VAR_9[0].rm_eo)
   FUNC_2("regexp returned nonsense");







  if ( ((VAR_9[0].rm_so == 0) ||
        !FUNC_6(VAR_6[VAR_9[0].rm_so-1])) &&
       ((VAR_9[0].rm_eo == (VAR_7-VAR_6)) ||
        !FUNC_6(VAR_6[VAR_9[0].rm_eo])) )
   ;
  else
   VAR_11 = 0;


  if (VAR_9->rm_so == VAR_9->rm_eo)
   VAR_11 = 0;

  if (!VAR_11 && VAR_9[0].rm_so + VAR_6 + 1 < VAR_7) {






   VAR_6 = VAR_9[0].rm_so + VAR_6 + 1;
   while (FUNC_6(VAR_6[-1]) && VAR_6 < VAR_7)
    VAR_6++;
   VAR_10 |= VAR_3;
   if (VAR_6 < VAR_7)
    goto again;
  }
 }
 if (VAR_5->token == VAR_2 && VAR_12)
  *VAR_7 = VAR_12;
 if (VAR_11) {
  VAR_9[0].rm_so += VAR_6 - VAR_13;
  VAR_9[0].rm_eo += VAR_6 - VAR_13;
 }
 return VAR_11;
}

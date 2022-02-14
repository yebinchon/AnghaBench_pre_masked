
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int push; int force; int matching; char const* string; char const* src; char const* dst; int pattern; } ;
typedef TYPE_1__ git_refspec ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (char const*) ;
 void* FUNC_3 (char const*,size_t) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (char const*,char,size_t) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_9 (char const*,char) ;
 size_t FUNC_10 (char const*) ;
 char* FUNC_11 (char const*,char) ;

int FUNC_12(git_refspec *VAR_4, const char *VAR_5, bool VAR_6)
{


 size_t VAR_7;
 int VAR_8 = 0;
 const char *VAR_9, *VAR_10;
 int VAR_11;

 FUNC_1(VAR_4 && VAR_5);

 FUNC_8(VAR_4, 0x0, sizeof(git_refspec));
 VAR_4->push = !VAR_6;

 VAR_9 = VAR_5;
 if (*VAR_9 == '+') {
  VAR_4->force = 1;
  VAR_9++;
 }

 VAR_10 = FUNC_11(VAR_9, ':');





 if (!VAR_6 && VAR_10 == VAR_9 && VAR_10[1] == '\0') {
  VAR_4->matching = 1;
  VAR_4->string = FUNC_2(VAR_5);
  FUNC_0(VAR_4->string);
  VAR_4->src = FUNC_2("");
  FUNC_0(VAR_4->src);
  VAR_4->dst = FUNC_2("");
  FUNC_0(VAR_4->dst);
  return 0;
 }

 if (VAR_10) {
  size_t VAR_12 = FUNC_10(++VAR_10);
  if (VAR_12 || !VAR_6) {
   VAR_8 = (1 <= VAR_12 && FUNC_9(VAR_10, '*'));
   VAR_4->dst = FUNC_3(VAR_10, VAR_12);
  }
 }

 VAR_7 = (VAR_10 ? (size_t)(VAR_10 - VAR_9 - 1) : FUNC_10(VAR_9));
 if (1 <= VAR_7 && FUNC_7(VAR_9, '*', VAR_7)) {
  if ((VAR_10 && !VAR_8) || (!VAR_10 && VAR_6))
   goto invalid;
  VAR_8 = 1;
 } else if (VAR_10 && VAR_8)
  goto invalid;

 VAR_4->pattern = VAR_8;
 VAR_4->src = FUNC_3(VAR_9, VAR_7);
 VAR_11 = VAR_1 |
  VAR_3 |
  (VAR_8 ? VAR_2 : 0);

 if (VAR_6) {





  if (!*VAR_4->src)
   ;
  else if (!FUNC_5(VAR_4->src, VAR_11))
   goto invalid;






  if (!VAR_4->dst)
   ;
  else if (!*VAR_4->dst)
   ;
  else if (!FUNC_5(VAR_4->dst, VAR_11))
   goto invalid;
 } else {







  if (!*VAR_4->src)
   ;
  else if (VAR_8) {
   if (!FUNC_5(VAR_4->src, VAR_11))
    goto invalid;
  }
  else {
   ;
  }







  if (!VAR_4->dst) {
   if (!FUNC_5(VAR_4->src, VAR_11))
    goto invalid;
  } else if (!*VAR_4->dst) {
   goto invalid;
  } else {
   if (!FUNC_5(VAR_4->dst, VAR_11))
    goto invalid;
  }


  if (!VAR_4->dst) {
   VAR_4->dst = FUNC_2(VAR_4->src);
   FUNC_0(VAR_4->dst);
  }
 }

 VAR_4->string = FUNC_2(VAR_5);
 FUNC_0(VAR_4->string);

 return 0;

 invalid:
        FUNC_4(
                VAR_0,
                "'%s' is not a valid refspec.", VAR_5);
        FUNC_6(VAR_4);
 return -1;
}

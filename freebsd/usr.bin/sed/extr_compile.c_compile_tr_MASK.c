
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_char ;
struct s_tr {int nmultis; char* bytetab; TYPE_1__* multis; } ;
typedef int mbstate_t ;
typedef int mbs2 ;
typedef int mbs1 ;
struct TYPE_3__ {size_t fromlen; size_t tolen; int to; int from; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int ,int *) ;
 int FUNC_5 (int,char*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct s_tr* FUNC_6 (int) ;
 size_t FUNC_7 (char const*,int ,int *) ;
 size_t FUNC_8 (int *,char const**,int ,int *) ;
 int FUNC_9 (int ,char const*,size_t) ;
 int FUNC_10 (int *,int ,int) ;
 TYPE_1__* FUNC_11 (TYPE_1__*,int) ;

__attribute__((used)) static char *
FUNC_12(char *VAR_8, struct s_tr **VAR_9)
{
 struct s_tr *VAR_10;
 int VAR_11;
 const char *VAR_12, *VAR_13;
 char VAR_14[VAR_5 + 1];
 char VAR_15[VAR_5 + 1];
 size_t VAR_16, VAR_17, VAR_18, VAR_19;
 mbstate_t VAR_20, VAR_21;

 if ((*VAR_9 = VAR_10 = FUNC_6(sizeof(*VAR_10))) == ((void*)0))
  FUNC_3(1, ((void*)0));
 VAR_10->multis = ((void*)0);
 VAR_10->nmultis = 0;

 if (*VAR_8 == '\0' || *VAR_8 == '\\')
  FUNC_5(1,
 "%lu: %s: transform pattern can not be delimited by newline or backslash",
   VAR_7, VAR_6);
 VAR_8 = FUNC_2(VAR_8, VAR_14, 1);
 if (VAR_8 == ((void*)0))
  FUNC_5(1, "%lu: %s: unterminated transform source string",
    VAR_7, VAR_6);
 VAR_8 = FUNC_2(VAR_8 - 1, VAR_15, 1);
 if (VAR_8 == ((void*)0))
  FUNC_5(1, "%lu: %s: unterminated transform target string",
    VAR_7, VAR_6);
 FUNC_0();
 VAR_12 = VAR_14;
 VAR_17 = FUNC_8(((void*)0), &VAR_12, 0, ((void*)0));
 if (VAR_17 == (size_t)-1)
  FUNC_3(1, ((void*)0));
 VAR_13 = VAR_15;
 VAR_19 = FUNC_8(((void*)0), &VAR_13, 0, ((void*)0));
 if (VAR_19 == (size_t)-1)
  FUNC_3(1, ((void*)0));
 if (VAR_19 != VAR_17)
  FUNC_5(1, "%lu: %s: transform strings are not the same length",
    VAR_7, VAR_6);
 if (VAR_1 == 1) {




  for (VAR_11 = 0; VAR_11 <= VAR_3; VAR_11++)
   VAR_10->bytetab[VAR_11] = (char)VAR_11;
  for (; *VAR_12; VAR_12++, VAR_13++)
   VAR_10->bytetab[(u_char)*VAR_12] = *VAR_13;
 } else {







  FUNC_10(&VAR_20, 0, sizeof(VAR_20));
  FUNC_10(&VAR_21, 0, sizeof(VAR_21));
  for (VAR_11 = 0; VAR_11 <= VAR_3; VAR_11++)
   VAR_10->bytetab[VAR_11] = (FUNC_1(VAR_11) != VAR_4) ? VAR_11 : 0;
  while (*VAR_12 != '\0') {
   VAR_16 = FUNC_7(VAR_12, VAR_2, &VAR_20);
   if (VAR_16 == (size_t)-1 || VAR_16 == (size_t)-2)
    FUNC_4(1, VAR_0, ((void*)0));
   VAR_18 = FUNC_7(VAR_13, VAR_2, &VAR_21);
   if (VAR_18 == (size_t)-1 || VAR_18 == (size_t)-2)
    FUNC_4(1, VAR_0, ((void*)0));
   if (VAR_16 == 1 && VAR_18 == 1)
    VAR_10->bytetab[(u_char)*VAR_12] = *VAR_13;
   else {
    VAR_10->bytetab[(u_char)*VAR_12] = 0;
    VAR_10->multis = FUNC_11(VAR_10->multis,
        (VAR_10->nmultis + 1) * sizeof(*VAR_10->multis));
    if (VAR_10->multis == ((void*)0))
     FUNC_3(1, ((void*)0));
    VAR_11 = VAR_10->nmultis++;
    VAR_10->multis[VAR_11].fromlen = VAR_16;
    FUNC_9(VAR_10->multis[VAR_11].from, VAR_12, VAR_16);
    VAR_10->multis[VAR_11].tolen = VAR_18;
    FUNC_9(VAR_10->multis[VAR_11].to, VAR_13, VAR_18);
   }
   VAR_12 += VAR_16;
   VAR_13 += VAR_18;
  }
 }
 return (VAR_8);
}

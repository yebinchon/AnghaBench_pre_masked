
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int offset; char sign; int time; } ;
struct TYPE_6__ {TYPE_1__ when; int * email; int * name; } ;
typedef TYPE_2__ git_signature ;


 void* FUNC_0 (char const*,int) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char const*,char,int) ;
 scalar_t__ FUNC_3 (int*,char const*,int,char const**,int) ;
 scalar_t__ FUNC_4 (int *,char const*,int,char const**,int) ;
 char* FUNC_5 (char const*,char,int) ;
 scalar_t__ FUNC_6 (char const*,char const*,size_t const) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (char*) ;
 size_t FUNC_9 (char const*) ;

int FUNC_10(git_signature *VAR_0, const char **VAR_1,
  const char *VAR_2, const char *VAR_3, char VAR_4)
{
 const char *VAR_5 = *VAR_1;
 const char *VAR_6, *VAR_7;

 FUNC_7(VAR_0, 0, sizeof(git_signature));

 if (VAR_4 &&
  (VAR_2 = FUNC_5(VAR_5, VAR_4, VAR_2 - VAR_5)) == ((void*)0))
  return FUNC_8("no newline given");

 if (VAR_3) {
  const size_t VAR_8 = FUNC_9(VAR_3);

  if (VAR_5 + VAR_8 >= VAR_2 || FUNC_6(VAR_5, VAR_3, VAR_8) != 0)
   return FUNC_8("expected prefix doesn't match actual");

  VAR_5 += VAR_8;
 }

 VAR_6 = FUNC_2(VAR_5, '<', VAR_2 - VAR_5);
 VAR_7 = FUNC_2(VAR_5, '>', VAR_2 - VAR_5);

 if (!VAR_6 || !VAR_7 || VAR_7 <= VAR_6)
  return FUNC_8("malformed e-mail");

 VAR_6 += 1;
 VAR_0->name = FUNC_0(VAR_5, VAR_6 - VAR_5 - 1);
 VAR_0->email = FUNC_0(VAR_6, VAR_7 - VAR_6);


 if (VAR_7 + 2 < VAR_2) {
  const char *VAR_9 = VAR_7 + 2;
  const char *VAR_10;

  if (FUNC_4(&VAR_0->when.time, VAR_9,
       VAR_2 - VAR_9, &VAR_10, 10) < 0) {
   FUNC_1(VAR_0->name);
   FUNC_1(VAR_0->email);
   VAR_0->name = VAR_0->email = ((void*)0);
   return FUNC_8("invalid Unix timestamp");
  }


  if (VAR_10 + 1 < VAR_2) {
   int VAR_11, VAR_12, VAR_13;
   const char *VAR_14, *VAR_15;

   VAR_14 = VAR_10 + 1;

   if ((VAR_14[0] != '-' && VAR_14[0] != '+') ||
       FUNC_3(&VAR_11, VAR_14 + 1,
        VAR_2 - VAR_14 - 1, &VAR_15, 10) < 0) {

    VAR_11 = 0;
   }

   VAR_12 = VAR_11 / 100;
   VAR_13 = VAR_11 % 100;





   if (VAR_12 <= 14 && VAR_13 <= 59) {
    VAR_0->when.offset = (VAR_12 * 60) + VAR_13;
    VAR_0->when.sign = VAR_14[0];
    if (VAR_14[0] == '-')
     VAR_0->when.offset = -VAR_0->when.offset;
   }
  }
 }

 *VAR_1 = VAR_2 + 1;
 return 0;
}

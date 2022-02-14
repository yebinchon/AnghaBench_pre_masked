
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int type; char* tag_name; char* tagger; char* message; int target; } ;
typedef TYPE_1__ git_tag ;
typedef int git_signature ;


 unsigned int FUNC_0 (char const**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (size_t*,size_t,int) ;
 unsigned int VAR_0 ;
 void* FUNC_3 (size_t) ;
 char* FUNC_4 (char const*,int,char*,int) ;
 scalar_t__ FUNC_5 (int *,char const**,char const*,char*) ;
 scalar_t__ FUNC_6 (char*,char const**,char const*,char*,char) ;
 char* FUNC_7 (char const*,char,int) ;
 scalar_t__ FUNC_8 (char const*,char const*,int) ;
 int FUNC_9 (char*,char const*,size_t) ;
 size_t FUNC_10 (char const*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(git_tag *VAR_1, const char *VAR_2, const char *VAR_3)
{
 static const char *VAR_4[] = {
  ((void*)0), "commit\n", "tree\n", "blob\n", "tag\n"
 };
 size_t VAR_5, VAR_6;
 const char *VAR_7;
 unsigned int VAR_8;

 if (FUNC_5(&VAR_1->target, &VAR_2, VAR_3, "object ") < 0)
  return FUNC_11("object field invalid");

 if (VAR_2 + 5 >= VAR_3)
  return FUNC_11("object too short");

 if (FUNC_8(VAR_2, "type ", 5) != 0)
  return FUNC_11("type field not found");
 VAR_2 += 5;

 VAR_1->type = VAR_0;

 for (VAR_8 = 1; VAR_8 < FUNC_0(VAR_4); ++VAR_8) {
  size_t VAR_9 = FUNC_10(VAR_4[VAR_8]);

  if (VAR_2 + VAR_9 >= VAR_3)
   return FUNC_11("object too short");

  if (FUNC_8(VAR_2, VAR_4[VAR_8], VAR_9) == 0) {
   VAR_1->type = VAR_8;
   VAR_2 += VAR_9;
   break;
  }
 }

 if (VAR_1->type == VAR_0)
  return FUNC_11("invalid object type");

 if (VAR_2 + 4 >= VAR_3)
  return FUNC_11("object too short");

 if (FUNC_8(VAR_2, "tag ", 4) != 0)
  return FUNC_11("tag field not found");

 VAR_2 += 4;

 VAR_7 = FUNC_7(VAR_2, '\n', VAR_3 - VAR_2);
 if (VAR_7 == ((void*)0))
  return FUNC_11("object too short");

 VAR_5 = VAR_7 - VAR_2;

 FUNC_2(&VAR_6, VAR_5, 1);
 VAR_1->tag_name = FUNC_3(VAR_6);
 FUNC_1(VAR_1->tag_name);

 FUNC_9(VAR_1->tag_name, VAR_2, VAR_5);
 VAR_1->tag_name[VAR_5] = '\0';

 VAR_2 = VAR_7 + 1;

 VAR_1->tagger = ((void*)0);
 if (VAR_2 < VAR_3 && *VAR_2 != '\n') {
  VAR_1->tagger = FUNC_3(sizeof(git_signature));
  FUNC_1(VAR_1->tagger);

  if (FUNC_6(VAR_1->tagger, &VAR_2, VAR_3, "tagger ", '\n') < 0)
   return -1;
 }

 VAR_1->message = ((void*)0);
 if (VAR_2 < VAR_3) {

  if(*VAR_2 != '\n') {
   VAR_7 = FUNC_4(VAR_2, VAR_3 - VAR_2,
          "\n\n", 2);
   if (VAR_7)
    VAR_2 = VAR_7 + 1;
   else
    return FUNC_11("tag contains no message");
  }

  VAR_5 = VAR_3 - ++VAR_2;

  FUNC_2(&VAR_6, VAR_5, 1);
  VAR_1->message = FUNC_3(VAR_6);
  FUNC_1(VAR_1->message);

  FUNC_9(VAR_1->message, VAR_2, VAR_5);
  VAR_1->message[VAR_5] = '\0';
 }

 return 0;
}

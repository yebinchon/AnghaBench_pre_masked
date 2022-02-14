
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int email; int name; } ;
typedef TYPE_1__ git_signature ;
typedef TYPE_1__ git_oid ;
struct TYPE_13__ {TYPE_1__* raw_message; TYPE_1__* raw_header; TYPE_1__* message_encoding; TYPE_1__* committer; TYPE_1__* author; int parent_ids; TYPE_1__ tree_id; } ;
typedef TYPE_3__ git_commit ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char const*,int,char*) ;
 TYPE_1__* FUNC_6 (char*) ;
 void* FUNC_7 (char const*,int) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,char const**,char const*,char*) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*,char const**,char const*,char*,char) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int FUNC_15(git_commit *VAR_3, const char *VAR_4, size_t VAR_5, unsigned int VAR_6)
{
 const char *VAR_7 = VAR_4, *VAR_8;
 const char *VAR_9 = VAR_7 + VAR_5;
 git_oid VAR_10;
 size_t VAR_11;
 git_signature VAR_12;

 FUNC_2(VAR_3 && VAR_4);

 VAR_8 = VAR_7;


 FUNC_9(VAR_3->parent_ids, 1);
 FUNC_1(VAR_3->parent_ids);


 if (!(VAR_6 & VAR_0)) {
     if (FUNC_11(&VAR_3->tree_id, &VAR_8, VAR_9, "tree ") < 0)
   goto bad_buffer;
 } else {
  size_t VAR_13 = FUNC_14("tree ") + VAR_2 + 1;
  if (VAR_8 + VAR_13 > VAR_9)
   goto bad_buffer;
  VAR_8 += VAR_13;
 }





 while (FUNC_11(&VAR_10, &VAR_8, VAR_9, "parent ") == 0) {
  git_oid *VAR_14 = FUNC_8(VAR_3->parent_ids);
  FUNC_0(VAR_14);

  FUNC_12(VAR_14, &VAR_10);
 }

 if (!(VAR_6 & VAR_0)) {
  VAR_3->author = FUNC_4(sizeof(git_signature));
  FUNC_0(VAR_3->author);

  if (FUNC_13(VAR_3->author, &VAR_8, VAR_9, "author ", '\n') < 0)
   return -1;
 }


 while (!FUNC_5(VAR_8, VAR_9 - VAR_8, "author ")) {
  if (FUNC_13(&VAR_12, &VAR_8, VAR_9, "author ", '\n') < 0)
   return -1;

  FUNC_3(VAR_12.name);
  FUNC_3(VAR_12.email);
 }


 VAR_3->committer = FUNC_4(sizeof(git_signature));
 FUNC_0(VAR_3->committer);

 if (FUNC_13(VAR_3->committer, &VAR_8, VAR_9, "committer ", '\n') < 0)
  return -1;

 if (VAR_6 & VAR_0)
  return 0;


 while (VAR_8 < VAR_9) {
  const char *VAR_15 = VAR_8;
  if (VAR_8[-1] == '\n' && VAR_8[0] == '\n')
   break;

  while (VAR_15 < VAR_9 && *VAR_15 != '\n')
   ++VAR_15;

  if (FUNC_5(VAR_8, VAR_9 - VAR_8, "encoding ") == 0) {
   VAR_8 += FUNC_14("encoding ");

   VAR_3->message_encoding = FUNC_7(VAR_8, VAR_15 - VAR_8);
   FUNC_0(VAR_3->message_encoding);
  }

  if (VAR_15 < VAR_9 && *VAR_15 == '\n')
   ++VAR_15;
  VAR_8 = VAR_15;
 }

 VAR_11 = VAR_8 - VAR_7;
 VAR_3->raw_header = FUNC_7(VAR_7, VAR_11);
 FUNC_0(VAR_3->raw_header);


 VAR_8 = VAR_7 + VAR_11 + 1;


 if (VAR_8 <= VAR_9)
  VAR_3->raw_message = FUNC_7(VAR_8, VAR_9 - VAR_8);
 else
  VAR_3->raw_message = FUNC_6("");
 FUNC_0(VAR_3->raw_message);

 return 0;

bad_buffer:
 FUNC_10(VAR_1, "failed to parse bad commit object");
 return -1;
}

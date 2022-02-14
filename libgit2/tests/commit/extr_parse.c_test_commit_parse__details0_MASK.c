
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ git_time_t ;
struct TYPE_4__ {int email; int name; } ;
typedef TYPE_1__ git_signature ;
typedef int git_oid ;
typedef int git_commit ;
typedef int commit_ids ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int **,int *,unsigned int) ;
 unsigned int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,char const*) ;

void FUNC_13(void) {
 static const char *VAR_1[] = {
  "a4a7dce85cf63874e984719f4fdd239f5145052f",
  "9fd738e8f7967c078dceed8190330fc8648ee56a",
  "4a202b346bb0fb0db7eff3cffeb3c70babbd2045",
  "c47800c7266a2be04c571c04d5a6614691ea99bd",
  "8496071c1b46c854b31185ea97743be6a8774479",
  "5b5b025afb0b4c913b4c338a42934a3863bf3644",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
 };
 const size_t VAR_2 = sizeof(VAR_1) / sizeof(const char *);
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  git_oid VAR_4;
  git_commit *VAR_5;

  const git_signature *VAR_6, *VAR_7;
  const char *VAR_8;
  git_time_t VAR_9;
  unsigned int VAR_10, VAR_11;
  git_commit *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);

  FUNC_12(&VAR_4, VAR_1[VAR_3]);

  FUNC_3(FUNC_7(&VAR_5, VAR_0, &VAR_4));

  VAR_8 = FUNC_8(VAR_5);
  VAR_6 = FUNC_4(VAR_5);
  VAR_7 = FUNC_5(VAR_5);
  VAR_9 = FUNC_11(VAR_5);
  VAR_10 = FUNC_10(VAR_5);

  FUNC_1("Scott Chacon", VAR_6->name);
  FUNC_1("schacon@gmail.com", VAR_6->email);
  FUNC_1("Scott Chacon", VAR_7->name);
  FUNC_1("schacon@gmail.com", VAR_7->email);
  FUNC_0(VAR_8 != ((void*)0));
  FUNC_0(VAR_9 > 0);
  FUNC_0(VAR_10 <= 2);
  for (VAR_11 = 0;VAR_11 < VAR_10;VAR_11++) {
   if (VAR_13 != ((void*)0))
    FUNC_6(VAR_13);

   VAR_13 = VAR_12;
   FUNC_3(FUNC_9(&VAR_12, VAR_5, VAR_11));
   FUNC_0(VAR_12 != ((void*)0));
   FUNC_0(FUNC_4(VAR_12) != ((void*)0));
  }
  FUNC_6(VAR_13);
  FUNC_6(VAR_12);

  FUNC_2(FUNC_9(&VAR_12, VAR_5, VAR_10));
  FUNC_6(VAR_5);
 }
}

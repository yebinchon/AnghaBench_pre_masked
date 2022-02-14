
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int oid; } ;
typedef TYPE_2__ git_tree_entry ;
struct TYPE_13__ {int repo; } ;
struct TYPE_15__ {TYPE_1__ object; } ;
typedef TYPE_3__ git_tree ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__ const*,char const*,size_t) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__**,TYPE_2__ const*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__**,int ,int ) ;
 size_t FUNC_6 (char const*) ;

int FUNC_7(
 git_tree_entry **VAR_2,
 const git_tree *VAR_3,
 const char *VAR_4)
{
 int VAR_5 = 0;
 git_tree *VAR_6;
 const git_tree_entry *VAR_7;
 size_t VAR_8;



 VAR_8 = FUNC_6(VAR_4);

 if (VAR_8 == 0) {
  FUNC_1(VAR_1, "invalid tree path given");
  return VAR_0;
 }

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_8);

 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_1,
      "the path '%.*s' does not exist in the given tree", (int) VAR_8, VAR_4);
  return VAR_0;
 }

 switch (VAR_4[VAR_8]) {
 case '/':


  if (!FUNC_2(VAR_7)) {
   FUNC_1(VAR_1,
       "the path '%.*s' exists but is not a tree", (int) VAR_8, VAR_4);
   return VAR_0;
  }




  if (VAR_4[VAR_8 + 1] != '\0')
   break;

 case '\0':


  return FUNC_3(VAR_2, VAR_7);
 }

 if (FUNC_5(&VAR_6, VAR_3->object.repo, VAR_7->oid) < 0)
  return -1;

 VAR_5 = FUNC_7(
  VAR_2,
  VAR_6,
  VAR_4 + VAR_8 + 1
 );

 FUNC_4(VAR_6);
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_2; int* member_3; int member_6; int member_8; int * member_7; int member_5; int * member_4; int member_1; int member_0; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct option FUNC_1 (int ,char*,int*,int ,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (int ,char*,char const**,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_4 (char*,char const*,...) ;
 int FUNC_5 (int ,int *) ;
 int VAR_5 ;
 char* FUNC_6 (struct object_id*) ;
 int FUNC_7 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (struct object_id*,int,char const*) ;
 int VAR_6 ;

int FUNC_10(int VAR_7, const char **VAR_8, const char *VAR_9)
{
 int VAR_10 = 0, VAR_11;
 const char *VAR_12 = ((void*)0);
 struct object_id VAR_13;
 const char *VAR_14 = "git-write-tree";
 struct option VAR_15[] = {
  FUNC_1(0, "missing-ok", &VAR_10, FUNC_0("allow missing objects"),
   VAR_4),
  FUNC_3(0, "prefix", &VAR_12, FUNC_0("<prefix>/"),
      FUNC_0("write tree object for a subdirectory <prefix>")),
  { VAR_0, 0, "ignore-cache-tree", VAR_10, ((void*)0),
    FUNC_0("only useful for debugging"),
    VAR_1 | VAR_2, ((void*)0),
    VAR_3 },
  FUNC_2()
 };

 FUNC_5(VAR_5, ((void*)0));
 VAR_7 = FUNC_7(VAR_7, VAR_8, VAR_9, VAR_15,
        VAR_6, 0);

 VAR_11 = FUNC_9(&VAR_13, VAR_10, VAR_12);
 switch (VAR_11) {
 case 0:
  FUNC_8("%s\n", FUNC_6(&VAR_13));
  break;
 case 128:
  FUNC_4("%s: error reading the index", VAR_14);
  break;
 case 129:
  FUNC_4("%s: error building trees", VAR_14);
  break;
 case 130:
  FUNC_4("%s: prefix %s not found", VAR_14, VAR_12);
  break;
 }
 return VAR_11;
}

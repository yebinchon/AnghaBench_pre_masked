
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {scalar_t__ origin; } ;
struct refspec_item {char* src; scalar_t__ matching; scalar_t__ pattern; } ;
struct refspec {int nr; struct refspec_item* items; } ;
struct ref {int dummy; } ;
struct object_id {int dummy; } ;


 struct refspec VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct ref*,int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 struct ref* FUNC_4 () ;
 struct remote* FUNC_5 (char const*) ;
 int FUNC_6 (struct refspec*,char const**,int) ;
 int FUNC_7 (struct refspec*) ;
 char* FUNC_8 (char*,int ,struct object_id*,int *) ;
 int FUNC_9 (char*,char const*) ;

__attribute__((used)) static int FUNC_10(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 struct remote *VAR_5;
 const char *VAR_6;
 char *VAR_7;
 int VAR_8 = 0;
 struct object_id VAR_9;

 if (VAR_2 < 3)
  FUNC_2("submodule--helper push-check requires at least 2 arguments");






 VAR_6 = VAR_3[1];
 VAR_3++;
 VAR_2--;

 VAR_7 = FUNC_8("HEAD", 0, &VAR_9, ((void*)0));
 if (!VAR_7)
  FUNC_2(FUNC_0("Failed to resolve HEAD as a valid ref."));
 if (!FUNC_9(VAR_7, "HEAD"))
  VAR_8 = 1;





 VAR_5 = FUNC_5(VAR_3[1]);
 if (!VAR_5 || VAR_5->origin == VAR_1)
  FUNC_2("remote '%s' not configured", VAR_3[1]);


 if (VAR_2 > 2) {
  int VAR_10;
  struct ref *VAR_11 = FUNC_4();
  struct refspec VAR_12 = VAR_0;

  FUNC_6(&VAR_12, VAR_3 + 2, VAR_2 - 2);

  for (VAR_10 = 0; VAR_10 < VAR_12.nr; VAR_10++) {
   const struct refspec_item *VAR_13 = &VAR_12.items[VAR_10];

   if (VAR_13->pattern || VAR_13->matching)
    continue;


   switch (FUNC_1(VAR_13->src, VAR_11, ((void*)0))) {
   case 1:
    break;
   case 0:





    if (!FUNC_9(VAR_13->src, "HEAD")) {
     if (!VAR_8 &&
         !FUNC_9(VAR_7, VAR_6))
      break;
     FUNC_2("HEAD does not match the named branch in the superproject");
    }

   default:
    FUNC_2("src refspec '%s' must name a ref",
        VAR_13->src);
   }
  }
  FUNC_7(&VAR_12);
 }
 FUNC_3(VAR_7);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int * n_location; int n_config_line; int n_config_file; } ;
struct autofs_daemon_request {char* adr_from; char* adr_path; char* adr_prefix; char* adr_key; char* adr_options; int adr_id; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*,char*,char*,char*,int *,char*,int *) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char,char*) ;
 int FUNC_6 (struct node*,int) ;
 int FUNC_7 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (struct node*,char*) ;
 int FUNC_11 (struct node*) ;
 int FUNC_12 (struct node*,char*) ;
 struct node* FUNC_13 (struct node*,char*) ;
 int FUNC_14 (struct node*) ;
 struct node* FUNC_15 (struct node*,char*,int *,char*,char*,int ) ;
 struct node* FUNC_16 () ;
 char* FUNC_17 (struct node*) ;
 int FUNC_18 (struct node*,char const*,char*,int*) ;
 char* FUNC_19 (char*,char**) ;
 int FUNC_20 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_21 (char*,char*) ;
 scalar_t__ FUNC_22 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_23(const struct autofs_daemon_request *VAR_3, char *VAR_4,
    bool VAR_5)
{
 const char *VAR_6;
 struct node *VAR_7, *VAR_8, *VAR_9;
 FILE *VAR_10;
 char *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 int VAR_17;
 bool VAR_18;

 FUNC_8("got request %d: from %s, path %s, prefix \"%s\", "
     "key \"%s\", options \"%s\"", VAR_3->adr_id, VAR_3->adr_from,
     VAR_3->adr_path, VAR_3->adr_prefix, VAR_3->adr_key, VAR_3->adr_options);




 VAR_2 = VAR_3->adr_id;
 FUNC_1(VAR_0);

 if (FUNC_22(VAR_3->adr_from, "map ", 4) != 0) {
  FUNC_9(1, "invalid mountfrom \"%s\"; failing request",
      VAR_3->adr_from);
 }

 VAR_6 = VAR_3->adr_from + 4;
 VAR_7 = FUNC_16();
 if (VAR_3->adr_prefix[0] == '\0' || FUNC_21(VAR_3->adr_prefix, "/") == 0) {





  VAR_8 = VAR_7;
  VAR_11 = FUNC_4(VAR_3->adr_path);
 } else {



  VAR_8 = FUNC_15(VAR_7, FUNC_4(VAR_3->adr_prefix),
      ((void*)0), FUNC_4(VAR_6),
      FUNC_4("[kernel request]"), VAR_1);

  if (VAR_3->adr_key[0] == '\0')
   VAR_11 = ((void*)0);
  else
   VAR_11 = FUNC_4(VAR_3->adr_key);
 }
 FUNC_18(VAR_8, VAR_6, VAR_11, &VAR_18);
 if (!VAR_18)
  VAR_18 = FUNC_14(VAR_8);
 if (VAR_18)
  FUNC_8("map may contain wildcard entries");
 else
  FUNC_8("map does not contain wildcard entries");

 if (VAR_11 != ((void*)0))
  FUNC_12(VAR_7, VAR_11);

 VAR_9 = FUNC_13(VAR_7, VAR_3->adr_path);
 if (VAR_9 == ((void*)0)) {
  FUNC_9(1, "map %s does not contain key for \"%s\"; "
      "failing mount", VAR_6, VAR_3->adr_path);
 }

 VAR_12 = FUNC_17(VAR_9);




 VAR_12 = FUNC_5(VAR_12, ',', VAR_3->adr_options);




 VAR_12 = FUNC_5(VAR_4, ',', VAR_12);

 if (VAR_9->n_location == ((void*)0)) {
  FUNC_8("found node defined at %s:%d; not a mountpoint",
      VAR_9->n_config_file, VAR_9->n_config_line);

  VAR_14 = FUNC_19("nobrowse", &VAR_12);
  if (VAR_14 != ((void*)0) && VAR_11 == ((void*)0)) {
   FUNC_8("skipping map %s due to \"nobrowse\" "
       "option; exiting", VAR_6);
   FUNC_7(0, 1);




   FUNC_20(0);
  }





  FUNC_6(VAR_9, VAR_5);

  if (VAR_5 && VAR_11 != ((void*)0)) {




   VAR_16 = FUNC_5(VAR_3->adr_path, '/', VAR_11);
   VAR_9 = FUNC_13(VAR_7, VAR_16);
   if (VAR_9 != ((void*)0))
    FUNC_6(VAR_9, 0);
  }

  FUNC_8("nothing to mount; exiting");
  FUNC_7(0, VAR_18);




  FUNC_20(0);
 }

 FUNC_8("found node defined at %s:%d; it is a mountpoint",
     VAR_9->n_config_file, VAR_9->n_config_line);

 if (VAR_11 != ((void*)0))
  FUNC_10(VAR_9, VAR_11);
 VAR_17 = FUNC_11(VAR_9);
 if (VAR_17 != 0) {
  FUNC_9(1, "variable expansion failed for %s; "
      "failing mount", VAR_3->adr_path);
 }




 VAR_12 = FUNC_5(VAR_12, ',', "automounted");




 FUNC_19("nobrowse", &VAR_12);




 VAR_13 = FUNC_19("fstype=", &VAR_12);
 if (VAR_13 == ((void*)0)) {
  FUNC_8("fstype not specified in options; "
      "defaulting to \"nfs\"");
  VAR_13 = FUNC_4("nfs");
 }

 if (FUNC_21(VAR_13, "nfs") == 0) {






  VAR_15 = FUNC_19("retrycnt=", &VAR_12);
  if (VAR_15 == ((void*)0)) {
   FUNC_8("retrycnt not specified in options; "
       "defaulting to 1");
   VAR_12 = FUNC_5(VAR_12, ',', "retrycnt=1");
  } else {
   VAR_12 = FUNC_5(VAR_12, ',',
       FUNC_5("retrycnt", '=', VAR_15));
  }
 }

 VAR_10 = FUNC_3("mount", "-t", VAR_13, "-o", VAR_12,
     VAR_9->n_location, VAR_3->adr_path, ((void*)0));
 FUNC_0(VAR_10 != ((void*)0));
 VAR_17 = FUNC_2(VAR_10);
 if (VAR_17 != 0)
  FUNC_9(1, "mount failed");

 FUNC_8("mount done; exiting");
 FUNC_7(0, VAR_18);




 FUNC_20(0);
}

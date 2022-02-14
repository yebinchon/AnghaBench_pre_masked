
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct stat {int st_mode; } ;
typedef int repo_version_string ;
typedef int junk ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char*,int *) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 char* FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,char const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (struct strbuf*,char*) ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_17 () ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_18 (char*,struct stat*) ;
 scalar_t__ FUNC_19 (char const*,char const*) ;
 int FUNC_20 () ;
 int FUNC_21 (char*,char*,int) ;
 scalar_t__ FUNC_22 (struct strbuf*) ;
 int FUNC_23 () ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (int) ;
 int FUNC_26 (struct strbuf*) ;
 int FUNC_27 (char*,char*) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (char*) ;
 int FUNC_30 (char*,int,char*,int ) ;

__attribute__((used)) static int FUNC_31(const char *VAR_14,
    const char *VAR_15)
{
 struct stat VAR_16;
 struct strbuf VAR_17 = VAR_4;
 char *VAR_18;
 char VAR_19[10];
 char VAR_20[2];
 int VAR_21;
 int VAR_22;
 struct strbuf VAR_23 = VAR_4;


 VAR_9 = ((void*)0);
 FUNC_12(VAR_8, ((void*)0));
 FUNC_5(VAR_14);
 FUNC_13();
 FUNC_23();
 FUNC_12(VAR_7, ((void*)0));





 VAR_12 = VAR_10;
 if (VAR_11 != -1)
  FUNC_25(VAR_11);





 if (FUNC_11()) {
  FUNC_2(FUNC_9());
 }





 FUNC_24(FUNC_15("refs"), 1);
 FUNC_2(FUNC_15("refs"));

 if (FUNC_22(&VAR_23))
  FUNC_7("failed to set up refs db: %s", VAR_23.buf);





 VAR_18 = FUNC_16(&VAR_17, "HEAD");
 VAR_21 = (!FUNC_1(VAR_18, VAR_3)
    || FUNC_21(VAR_18, VAR_20, sizeof(VAR_20)-1) != -1);
 if (!VAR_21) {
  if (FUNC_6("HEAD", "refs/heads/master", ((void*)0)) < 0)
   FUNC_8(1);
 }


 FUNC_30(VAR_19, sizeof(VAR_19),
    "%d", VAR_1);
 FUNC_14("core.repositoryformatversion", VAR_19);


 VAR_18 = FUNC_16(&VAR_17, "config");
 VAR_22 = VAR_6;
 if (VAR_6 && !FUNC_18(VAR_18, &VAR_16)) {
  struct stat VAR_24;
  VAR_22 = (!FUNC_3(VAR_18, VAR_16 ^ VAR_5) &&
    !FUNC_18(VAR_18, &VAR_24) &&
    VAR_16 != VAR_24 &&
    !FUNC_3(VAR_18, VAR_16));
  if (VAR_22 && !VAR_21 && (VAR_16 & VAR_5))
   VAR_22 = 0;
 }
 FUNC_14("core.filemode", VAR_22 ? "true" : "false");

 if (FUNC_17())
  FUNC_14("core.bare", "true");
 else {
  const char *VAR_25 = FUNC_10();
  FUNC_14("core.bare", "false");

  if (VAR_13 == VAR_2)
   FUNC_14("core.logallrefupdates", "true");
  if (FUNC_19(VAR_15, VAR_25))
   FUNC_14("core.worktree", VAR_25);
 }

 if (!VAR_21) {

  VAR_18 = FUNC_16(&VAR_17, "tXXXXXX");
  if (!FUNC_4(FUNC_29(VAR_18)) &&
      !FUNC_28(VAR_18) &&
      !FUNC_27("testing", VAR_18) &&
      !FUNC_18(VAR_18, &VAR_16) &&
      FUNC_0(VAR_16))
   FUNC_28(VAR_18);
  else
   FUNC_14("core.symlinks", "false");


  VAR_18 = FUNC_16(&VAR_17, "CoNfIg");
  if (!FUNC_1(VAR_18, VAR_0))
   FUNC_14("core.ignorecase", "true");
  FUNC_20();
 }

 FUNC_26(&VAR_17);
 return VAR_21;
}

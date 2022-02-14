
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walker {int get_verbosely; int get_recover; scalar_t__ corrupt_object_found; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 struct walker* FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (char const*,char**) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct walker*,int,char**,char const**,char*) ;
 int FUNC_11 (struct walker*) ;
 int FUNC_12 (int,char**,char const**) ;
 int FUNC_13 (char***,char const***) ;

int FUNC_14(int VAR_3, const char **VAR_4)
{
 struct walker *VAR_5;
 int VAR_6 = 0;
 int VAR_7;
 const char **VAR_8 = ((void*)0);
 char **VAR_9;
 char *VAR_10 = ((void*)0);
 int VAR_11 = 1;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;

 while (VAR_11 < VAR_3 && VAR_4[VAR_11][0] == '-') {
  if (VAR_4[VAR_11][1] == 't') {
  } else if (VAR_4[VAR_11][1] == 'c') {
  } else if (VAR_4[VAR_11][1] == 'a') {
  } else if (VAR_4[VAR_11][1] == 'v') {
   VAR_13 = 1;
  } else if (VAR_4[VAR_11][1] == 'w') {
   VAR_8 = &VAR_4[VAR_11 + 1];
   VAR_11++;
  } else if (VAR_4[VAR_11][1] == 'h') {
   FUNC_9(VAR_1);
  } else if (!FUNC_8(VAR_4[VAR_11], "--recover")) {
   VAR_14 = 1;
  } else if (!FUNC_8(VAR_4[VAR_11], "--stdin")) {
   VAR_6 = 1;
  }
  VAR_11++;
 }
 if (VAR_3 != VAR_11 + 2 - VAR_6)
  FUNC_9(VAR_1);
 if (VAR_6) {
  VAR_7 = FUNC_13(&VAR_9, &VAR_8);
 } else {
  VAR_9 = (char **) &VAR_4[VAR_11++];
  VAR_7 = 1;
 }

 if (VAR_4[VAR_11])
  FUNC_7(VAR_4[VAR_11], &VAR_10);

 FUNC_6();

 FUNC_3(VAR_0, ((void*)0));

 FUNC_5(((void*)0), VAR_10, 0);
 VAR_5 = FUNC_2(VAR_10);
 VAR_5->get_verbosely = VAR_13;
 VAR_5->get_recover = VAR_14;

 VAR_12 = FUNC_10(VAR_5, VAR_7, VAR_9, VAR_8, VAR_10);

 if (VAR_6)
  FUNC_12(VAR_7, VAR_9, VAR_8);

 if (VAR_5->corrupt_object_found) {
  FUNC_0(VAR_2,
"Some loose object were found to be corrupt, but they might be just\n"
"a false '404 Not Found' error message sent with incorrect HTTP\n"
"status code.  Suggest running 'git fsck'.\n");
 }

 FUNC_11(VAR_5);
 FUNC_4();

 FUNC_1(VAR_10);

 return VAR_12;
}

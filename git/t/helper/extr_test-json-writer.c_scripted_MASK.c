
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* buf; } ;
struct json_writer {TYPE_1__ json; } ;
typedef int intmax_t ;


 struct json_writer VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,double*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,char**) ;
 char* FUNC_4 (char*,int) ;
 int FUNC_5 (struct json_writer*,int ) ;
 int FUNC_6 (struct json_writer*,int ,double) ;
 int FUNC_7 (struct json_writer*) ;
 int FUNC_8 (struct json_writer*) ;
 int FUNC_9 (struct json_writer*) ;
 int FUNC_10 (struct json_writer*,int ) ;
 int FUNC_11 (struct json_writer*) ;
 int FUNC_12 (struct json_writer*,char*) ;
 int FUNC_13 (struct json_writer*) ;
 int FUNC_14 (struct json_writer*) ;
 int FUNC_15 (struct json_writer*) ;
 int FUNC_16 (struct json_writer*,int ) ;
 int FUNC_17 (struct json_writer*,char*,int ,double) ;
 int FUNC_18 (struct json_writer*,char*) ;
 int FUNC_19 (struct json_writer*,char*) ;
 int FUNC_20 (struct json_writer*,char*) ;
 int FUNC_21 (struct json_writer*,char*,int ) ;
 int FUNC_22 (struct json_writer*,char*) ;
 int FUNC_23 (struct json_writer*,char*,char*) ;
 int FUNC_24 (struct json_writer*,char*) ;
 int VAR_2 ;
 int FUNC_25 (char*,char*) ;
 int FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (char*,char*) ;
 char* FUNC_28 (char*,char*) ;

__attribute__((used)) static int FUNC_29(void)
{
 struct json_writer VAR_3 = VAR_0;
 char VAR_4[VAR_1];
 char *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_4(VAR_4, VAR_1);
 if (!VAR_5)
  return 0;

 if (!FUNC_27(VAR_5, "object"))
  FUNC_16(&VAR_3, VAR_2);
 else if (!FUNC_27(VAR_5, "array"))
  FUNC_5(&VAR_3, VAR_2);
 else
  FUNC_0("expected first line to be 'object' or 'array'");

 while ((VAR_5 = FUNC_4(VAR_4, VAR_1)) != ((void*)0)) {
  char *VAR_7;
  char *VAR_8;
  char *VAR_9;
  intmax_t VAR_10;
  double VAR_11;

  VAR_6++;

  VAR_7 = FUNC_28(VAR_5, " ");

  if (!FUNC_27(VAR_7, "end")) {
   FUNC_14(&VAR_3);
  }
  else if (!FUNC_27(VAR_7, "object-string")) {
   FUNC_3(VAR_6, &VAR_8);
   FUNC_3(VAR_6, &VAR_9);
   FUNC_23(&VAR_3, VAR_8, VAR_9);
  }
  else if (!FUNC_27(VAR_7, "object-int")) {
   FUNC_3(VAR_6, &VAR_8);
   FUNC_2(VAR_6, &VAR_10);
   FUNC_21(&VAR_3, VAR_8, VAR_10);
  }
  else if (!FUNC_27(VAR_7, "object-double")) {
   FUNC_3(VAR_6, &VAR_8);
   FUNC_2(VAR_6, &VAR_10);
   FUNC_1(VAR_6, &VAR_11);
   FUNC_17(&VAR_3, VAR_8, VAR_10, VAR_11);
  }
  else if (!FUNC_27(VAR_7, "object-true")) {
   FUNC_3(VAR_6, &VAR_8);
   FUNC_24(&VAR_3, VAR_8);
  }
  else if (!FUNC_27(VAR_7, "object-false")) {
   FUNC_3(VAR_6, &VAR_8);
   FUNC_18(&VAR_3, VAR_8);
  }
  else if (!FUNC_27(VAR_7, "object-null")) {
   FUNC_3(VAR_6, &VAR_8);
   FUNC_22(&VAR_3, VAR_8);
  }
  else if (!FUNC_27(VAR_7, "object-object")) {
   FUNC_3(VAR_6, &VAR_8);
   FUNC_20(&VAR_3, VAR_8);
  }
  else if (!FUNC_27(VAR_7, "object-array")) {
   FUNC_3(VAR_6, &VAR_8);
   FUNC_19(&VAR_3, VAR_8);
  }
  else if (!FUNC_27(VAR_7, "array-string")) {
   FUNC_3(VAR_6, &VAR_9);
   FUNC_12(&VAR_3, VAR_9);
  }
  else if (!FUNC_27(VAR_7, "array-int")) {
   FUNC_2(VAR_6, &VAR_10);
   FUNC_10(&VAR_3, VAR_10);
  }
  else if (!FUNC_27(VAR_7, "array-double")) {
   FUNC_2(VAR_6, &VAR_10);
   FUNC_1(VAR_6, &VAR_11);
   FUNC_6(&VAR_3, VAR_10, VAR_11);
  }
  else if (!FUNC_27(VAR_7, "array-true"))
   FUNC_13(&VAR_3);
  else if (!FUNC_27(VAR_7, "array-false"))
   FUNC_7(&VAR_3);
  else if (!FUNC_27(VAR_7, "array-null"))
   FUNC_11(&VAR_3);
  else if (!FUNC_27(VAR_7, "array-object"))
   FUNC_9(&VAR_3);
  else if (!FUNC_27(VAR_7, "array-array"))
   FUNC_8(&VAR_3);
  else
   FUNC_0("unrecognized token: '%s'", VAR_7);
 }

 if (!FUNC_15(&VAR_3))
  FUNC_0("json not terminated: '%s'", VAR_3.json.buf);

 FUNC_25("%s\n", VAR_3.json.buf);

 FUNC_26(&VAR_3.json);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_attr {int dummy; } ;
struct attr_check {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct attr_check* FUNC_0 () ;
 int FUNC_1 (struct attr_check*,struct git_attr const*) ;
 int FUNC_2 (struct attr_check*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char const*,struct attr_check*,scalar_t__,char const*) ;
 int VAR_4 ;
 int FUNC_4 (char const*,struct attr_check*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*) ;
 struct git_attr* FUNC_8 (char const*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int VAR_6 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int,char const**,char const*,int ,int ,int ) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (char const*,char*) ;

int FUNC_17(int VAR_9, const char **VAR_10, const char *VAR_11)
{
 struct attr_check *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 if (!FUNC_11())
  FUNC_15();

 FUNC_10(VAR_6, ((void*)0));

 VAR_9 = FUNC_13(VAR_9, VAR_10, VAR_11, VAR_4,
        VAR_5, VAR_1);

 if (FUNC_14() < 0) {
  FUNC_5("invalid cache");
 }

 if (VAR_3)
  FUNC_9(VAR_0);

 VAR_15 = -1;
 for (VAR_14 = 0; VAR_15 < 0 && VAR_14 < VAR_9; VAR_14++) {
  if (!FUNC_16(VAR_10[VAR_14], "--"))
   VAR_15 = VAR_14;
 }


 if (VAR_2) {
  if (VAR_15 >= 1)
   FUNC_7("Attributes and --all both specified");

  VAR_13 = 0;
  VAR_16 = VAR_15 + 1;
 } else if (VAR_15 == 0) {
  FUNC_7("No attribute specified");
 } else if (VAR_15 < 0) {
  if (!VAR_9)
   FUNC_7("No attribute specified");

  if (VAR_7) {

   VAR_13 = VAR_9;
   VAR_16 = VAR_9;
  } else {

   VAR_13 = 1;
   VAR_16 = 1;
  }
 } else {
  VAR_13 = VAR_15;
  VAR_16 = VAR_15 + 1;
 }


 if (VAR_7) {
  if (VAR_16 < VAR_9)
   FUNC_7("Can't specify files with --stdin");
 } else {
  if (VAR_16 >= VAR_9)
   FUNC_7("No file specified");
 }

 VAR_12 = FUNC_0();
 if (!VAR_2) {
  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
   const struct git_attr *VAR_17 = FUNC_8(VAR_10[VAR_14]);

   if (!VAR_17)
    return FUNC_6("%s: not a valid attribute name",
          VAR_10[VAR_14]);
   FUNC_1(VAR_12, VAR_17);
  }
 }

 if (VAR_7)
  FUNC_4(VAR_11, VAR_12, VAR_2);
 else {
  for (VAR_14 = VAR_16; VAR_14 < VAR_9; VAR_14++)
   FUNC_3(VAR_11, VAR_12, VAR_2, VAR_10[VAR_14]);
  FUNC_12(VAR_8, "attribute to stdout");
 }

 FUNC_2(VAR_12);
 return 0;
}

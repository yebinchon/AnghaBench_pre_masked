
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct option {int dummy; } ;
struct object_id {int dummy; } ;
typedef scalar_t__ (* strbuf_getline_fn ) (struct strbuf*,int ) ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 struct option const FUNC_1 (char,int *,int*,int ) ;
 struct option const FUNC_2 () ;
 struct option const FUNC_3 (int ,char*,int*,int ,int) ;
 struct strbuf VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,int) ;
 int VAR_2 ;
 int FUNC_8 (struct object_id*) ;
 int FUNC_9 (int,char const**,char const*,struct option const*,int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (struct strbuf*,int ) ;
 scalar_t__ FUNC_12 (struct strbuf*,int ) ;
 int FUNC_13 (struct strbuf*) ;
 int VAR_5 ;
 int FUNC_14 (struct object_id*) ;

int FUNC_15(int VAR_6, const char **VAR_7, const char *VAR_8)
{
 struct strbuf VAR_9 = VAR_1;
 struct object_id VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;
 strbuf_getline_fn VAR_15;

 const struct option VAR_16[] = {
  FUNC_1('z', ((void*)0), &VAR_11, FUNC_0("input is NUL terminated")),
  FUNC_3( 0 , "missing", &VAR_12, FUNC_0("allow missing objects"), 1),
  FUNC_3( 0 , "batch", &VAR_13, FUNC_0("allow creation of more than one tree"), 1),
  FUNC_2()
 };

 VAR_6 = FUNC_9(VAR_6, VAR_7, VAR_8, VAR_16, VAR_2, 0);
 VAR_15 = VAR_11 ? FUNC_12 : FUNC_11;

 while (!VAR_14) {
  while (1) {
   if (VAR_15(&VAR_9, VAR_3) == VAR_0) {
    VAR_14 = 1;
    break;
   }
   if (VAR_9.buf[0] == '\0') {

    if (VAR_13)
     break;
    FUNC_4("input format error: (blank line only valid in batch mode)");
   }
   FUNC_7(VAR_9.buf, VAR_11, VAR_12);
  }
  if (VAR_13 && VAR_14 && VAR_5 < 1) {





   ;
  } else {
   FUNC_14(&VAR_10);
   FUNC_10(FUNC_8(&VAR_10));
   FUNC_6(VAR_4);
  }
  VAR_5=0;
 }
 FUNC_13(&VAR_9);
 FUNC_5(0);
}

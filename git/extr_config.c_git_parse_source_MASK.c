
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; } ;
struct parse_event_data {struct config_options const* member_2; int member_1; int member_0; } ;
struct config_options {int error_action; } ;
typedef int config_fn_t ;
struct TYPE_2__ {int origin_type; int default_error_action; int name; int linenr; scalar_t__ eof; struct strbuf var; } ;


 int FUNC_0 (char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_1 (char*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int ,struct parse_event_data*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct strbuf*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,void*,struct strbuf*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct strbuf*,char) ;
 int FUNC_12 (struct strbuf*) ;
 int FUNC_13 (struct strbuf*,int) ;
 char FUNC_14 (int) ;
 char const* VAR_7 ;
 char* FUNC_15 (int ,int ,...) ;

__attribute__((used)) static int FUNC_16(config_fn_t VAR_8, void *VAR_9,
       const struct config_options *VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = 0;
 struct strbuf *VAR_13 = &VAR_6->var;
 int VAR_14 = 0;
 char *VAR_15 = ((void*)0);


 const char *VAR_16 = VAR_7;


 struct parse_event_data VAR_17 = {
  VAR_2, 0, VAR_10
 };

 for (;;) {
  int VAR_18;

  VAR_18 = FUNC_7();
  if (VAR_16 && *VAR_16) {



   if (VAR_18 == (*VAR_16 & 0377)) {
    VAR_16++;
    continue;
   } else {

    if (VAR_16 != VAR_7)
     break;

    VAR_16 = ((void*)0);
   }
  }
  if (VAR_18 == '\n') {
   if (VAR_6->eof) {
    if (FUNC_3(VAR_2, &VAR_17) < 0)
     return -1;
    return 0;
   }
   if (FUNC_3(VAR_5, &VAR_17) < 0)
    return -1;
   VAR_11 = 0;
   continue;
  }
  if (VAR_11)
   continue;
  if (FUNC_10(VAR_18)) {
   if (FUNC_3(VAR_5, &VAR_17) < 0)
     return -1;
   continue;
  }
  if (VAR_18 == '#' || VAR_18 == ';') {
   if (FUNC_3(VAR_0, &VAR_17) < 0)
     return -1;
   VAR_11 = 1;
   continue;
  }
  if (VAR_18 == '[') {
   if (FUNC_3(VAR_4, &VAR_17) < 0)
     return -1;


   FUNC_12(VAR_13);
   if (FUNC_6(VAR_13) < 0 || VAR_13->len < 1)
    break;
   FUNC_11(VAR_13, '.');
   VAR_12 = VAR_13->len;
   continue;
  }
  if (!FUNC_9(VAR_18))
   break;

  if (FUNC_3(VAR_1, &VAR_17) < 0)
   return -1;






  FUNC_13(VAR_13, VAR_12);
  FUNC_11(VAR_13, FUNC_14(VAR_18));
  if (FUNC_8(VAR_8, VAR_9, VAR_13) < 0)
   break;
 }

 if (FUNC_3(VAR_3, &VAR_17) < 0)
  return -1;

 switch (VAR_6->origin_type) {
 case 132:
  VAR_15 = FUNC_15(FUNC_1("bad config line %d in blob %s"),
          VAR_6->linenr, VAR_6->name);
  break;
 case 130:
  VAR_15 = FUNC_15(FUNC_1("bad config line %d in file %s"),
          VAR_6->linenr, VAR_6->name);
  break;
 case 129:
  VAR_15 = FUNC_15(FUNC_1("bad config line %d in standard input"),
          VAR_6->linenr);
  break;
 case 128:
  VAR_15 = FUNC_15(FUNC_1("bad config line %d in submodule-blob %s"),
           VAR_6->linenr, VAR_6->name);
  break;
 case 131:
  VAR_15 = FUNC_15(FUNC_1("bad config line %d in command line %s"),
           VAR_6->linenr, VAR_6->name);
  break;
 default:
  VAR_15 = FUNC_15(FUNC_1("bad config line %d in %s"),
          VAR_6->linenr, VAR_6->name);
 }

 switch (VAR_10 && VAR_10->error_action ?
  VAR_10->error_action :
  VAR_6->default_error_action) {
 case 136:
  FUNC_2("%s", VAR_15);
  break;
 case 135:
  VAR_14 = FUNC_4("%s", VAR_15);
  break;
 case 134:
  VAR_14 = -1;
  break;
 case 133:
  FUNC_0("config error action unset");
 }

 FUNC_5(VAR_15);
 return VAR_14;
}

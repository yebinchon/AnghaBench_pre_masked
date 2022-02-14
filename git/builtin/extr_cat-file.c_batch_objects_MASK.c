
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct oidset {int dummy; } ;
struct oid_array {struct oidset* seen; struct strbuf* scratch; struct expand_data* expand; struct batch_options* opt; } ;
struct object_info {int dummy; } ;
struct object_cb_data {struct oidset* seen; struct strbuf* scratch; struct expand_data* expand; struct batch_options* opt; } ;
struct TYPE_2__ {int * typep; } ;
struct expand_data {int mark_query; int split_on_whitespace; int skip_object_info; char* rest; int type; TYPE_1__ info; } ;
struct batch_options {char* format; scalar_t__ unordered; scalar_t__ all_objects; scalar_t__ print_contents; scalar_t__ cmdmode; } ;
typedef int empty ;
typedef int data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct object_info VAR_2 ;
 struct oidset VAR_3 ;
 struct oid_array VAR_4 ;
 struct strbuf VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct strbuf*,struct batch_options*,struct expand_data*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,struct oid_array*,int ) ;
 int FUNC_2 (int ,struct oid_array*,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,struct object_info*,int) ;
 int FUNC_5 (struct expand_data*,int ,int) ;
 int FUNC_6 (struct oid_array*) ;
 int FUNC_7 (struct oid_array*,int ,struct oid_array*) ;
 int FUNC_8 (struct oidset*) ;
 int VAR_12 ;
 int FUNC_9 (struct strbuf*,char*,int ,struct expand_data*) ;
 scalar_t__ FUNC_10 (struct strbuf*,int ) ;
 int FUNC_11 (struct strbuf*) ;
 scalar_t__ FUNC_12 (char*,char) ;
 char* FUNC_13 (int ,char*) ;
 int VAR_13 ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int FUNC_15(struct batch_options *VAR_14)
{
 struct strbuf VAR_15 = VAR_5;
 struct strbuf VAR_16 = VAR_5;
 struct expand_data VAR_17;
 int VAR_18;
 int VAR_19 = 0;

 if (!VAR_14->format)
  VAR_14->format = "%(objectname) %(objecttype) %(objectsize)";






 FUNC_5(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.mark_query = 1;
 FUNC_9(&VAR_16, VAR_14->format, VAR_11, &VAR_17);
 VAR_17.mark_query = 0;
 FUNC_11(&VAR_16);
 if (VAR_14->cmdmode)
  VAR_17.split_on_whitespace = 1;

 if (VAR_14->all_objects) {
  struct object_info VAR_20 = VAR_2;
  if (!FUNC_4(&VAR_17.info, &VAR_20, sizeof(VAR_20)))
   VAR_17.skip_object_info = 1;
 }





 if (VAR_14->print_contents)
  VAR_17.info.typep = &VAR_17.type;

 if (VAR_14->all_objects) {
  struct object_cb_data VAR_21;

  if (FUNC_3())
   FUNC_14("This repository uses promisor remotes. Some objects may not be loaded.");

  VAR_21.opt = VAR_14;
  VAR_21.expand = &VAR_17;
  VAR_21.scratch = &VAR_16;

  if (VAR_14->unordered) {
   struct oidset VAR_22 = VAR_3;

   VAR_21.seen = &VAR_22;

   FUNC_1(VAR_7, &VAR_21, 0);
   FUNC_2(VAR_8, &VAR_21,
            VAR_1);

   FUNC_8(&VAR_22);
  } else {
   struct oid_array VAR_23 = VAR_4;

   FUNC_1(VAR_9, &VAR_23, 0);
   FUNC_2(VAR_10, &VAR_23, 0);

   FUNC_7(&VAR_23, VAR_6, &VAR_21);

   FUNC_6(&VAR_23);
  }

  FUNC_11(&VAR_16);
  return 0;
 }
 VAR_18 = VAR_13;
 VAR_13 = 0;

 while (FUNC_10(&VAR_15, VAR_12) != VAR_0) {
  if (VAR_17.split_on_whitespace) {





   char *VAR_24 = FUNC_13(VAR_15.buf, " \t");
   if (VAR_24) {
    while (*VAR_24 && FUNC_12(" \t", *VAR_24))
     *VAR_24++ = '\0';
   }
   VAR_17.rest = VAR_24;
  }

  FUNC_0(VAR_15.buf, &VAR_16, VAR_14, &VAR_17);
 }

 FUNC_11(&VAR_15);
 FUNC_11(&VAR_16);
 VAR_13 = VAR_18;
 return VAR_19;
}

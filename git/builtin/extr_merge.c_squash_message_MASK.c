
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct rev_info {int ignore_merges; int commit_format; int date_mode; int abbrev; } ;
struct pretty_print_context {int fmt; int date_mode; int abbrev; int member_0; } ;
struct commit_list {TYPE_1__* item; struct commit_list* next; } ;
struct TYPE_4__ {int oid; int flags; } ;
struct commit {TYPE_2__ object; } ;
struct TYPE_3__ {TYPE_2__ object; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct rev_info*,TYPE_2__*,int *) ;
 int FUNC_2 (char*) ;
 struct commit* FUNC_3 (struct rev_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct rev_info*) ;
 int FUNC_7 (struct pretty_print_context*,struct commit*,struct strbuf*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,struct rev_info*,int *) ;
 int FUNC_10 (int ,int *,struct rev_info*,int *) ;
 int FUNC_11 (struct strbuf*,char) ;
 int FUNC_12 (struct strbuf*,char*,int ) ;
 int FUNC_13 (struct strbuf*,char*) ;
 int FUNC_14 (struct strbuf*) ;
 int VAR_3 ;
 int FUNC_15 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_16(struct commit *VAR_4, struct commit_list *VAR_5)
{
 struct rev_info VAR_6;
 struct strbuf VAR_7 = VAR_1;
 struct commit_list *VAR_8;
 struct pretty_print_context VAR_9 = {0};

 FUNC_8(FUNC_0("Squash commit -- not updating HEAD\n"));

 FUNC_9(VAR_3, &VAR_6, ((void*)0));
 VAR_6.ignore_merges = 1;
 VAR_6.commit_format = VAR_0;

 VAR_4->object.flags |= VAR_2;
 FUNC_1(&VAR_6, &VAR_4->object, ((void*)0));

 for (VAR_8 = VAR_5; VAR_8; VAR_8 = VAR_8->next)
  FUNC_1(&VAR_6, &VAR_8->item->object, ((void*)0));

 FUNC_10(0, ((void*)0), &VAR_6, ((void*)0));
 if (FUNC_6(&VAR_6))
  FUNC_2(FUNC_0("revision walk setup failed"));

 VAR_9.abbrev = VAR_6.abbrev;
 VAR_9.date_mode = VAR_6.date_mode;
 VAR_9.fmt = VAR_6.commit_format;

 FUNC_13(&VAR_7, "Squashed commit of the following:\n");
 while ((VAR_4 = FUNC_3(&VAR_6)) != ((void*)0)) {
  FUNC_11(&VAR_7, '\n');
  FUNC_12(&VAR_7, "commit %s\n",
   FUNC_5(&VAR_4->object.oid));
  FUNC_7(&VAR_9, VAR_4, &VAR_7);
 }
 FUNC_15(FUNC_4(VAR_3), VAR_7.buf, VAR_7.len);
 FUNC_14(&VAR_7);
}

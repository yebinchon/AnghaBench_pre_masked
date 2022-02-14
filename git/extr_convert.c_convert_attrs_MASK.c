
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct conv_attrs {void* crlf_action; void* attr_action; int working_tree_encoding; int drv; int ident; } ;
struct attr_check_item {int dummy; } ;
typedef enum eol { ____Placeholder_eol } eol ;
struct TYPE_4__ {struct attr_check_item* items; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* FUNC_0 (char*,char*,char*,char*,char*,char*,int *) ;
 scalar_t__ VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_1 (struct index_state const*,char const*,TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct attr_check_item*) ;
 void* FUNC_4 (struct attr_check_item*) ;
 int FUNC_5 (struct attr_check_item*) ;
 int FUNC_6 (struct attr_check_item*) ;
 int FUNC_7 (struct attr_check_item*) ;
 int VAR_15 ;
 scalar_t__ FUNC_8 () ;
 int VAR_16 ;
 int * VAR_17 ;

__attribute__((used)) static void FUNC_9(const struct index_state *VAR_18,
     struct conv_attrs *VAR_19, const char *VAR_20)
{
 struct attr_check_item *VAR_21 = ((void*)0);

 if (!VAR_14) {
  VAR_14 = FUNC_0("crlf", "ident", "filter",
      "eol", "text", "working-tree-encoding",
      ((void*)0));
  VAR_17 = &VAR_16;
  FUNC_2(VAR_15, ((void*)0));
 }

 FUNC_1(VAR_18, VAR_20, VAR_14);
 VAR_21 = VAR_14->items;
 VAR_19->crlf_action = FUNC_4(VAR_21 + 4);
 if (VAR_19->crlf_action == VAR_10)
  VAR_19->crlf_action = FUNC_4(VAR_21 + 0);
 VAR_19->ident = FUNC_7(VAR_21 + 1);
 VAR_19->drv = FUNC_3(VAR_21 + 2);
 if (VAR_19->crlf_action != VAR_6) {
  enum eol VAR_22 = FUNC_6(VAR_21 + 3);
  if (VAR_19->crlf_action == VAR_3 && VAR_22 == VAR_12)
   VAR_19->crlf_action = VAR_5;
  else if (VAR_19->crlf_action == VAR_3 && VAR_22 == VAR_11)
   VAR_19->crlf_action = VAR_4;
  else if (VAR_22 == VAR_12)
   VAR_19->crlf_action = VAR_9;
  else if (VAR_22 == VAR_11)
   VAR_19->crlf_action = VAR_8;
 }
 VAR_19->working_tree_encoding = FUNC_5(VAR_21 + 5);


 VAR_19->attr_action = VAR_19->crlf_action;
 if (VAR_19->crlf_action == VAR_7)
  VAR_19->crlf_action = FUNC_8() ? VAR_8 : VAR_9;
 if (VAR_19->crlf_action == VAR_10 && VAR_13 == VAR_0)
  VAR_19->crlf_action = VAR_6;
 if (VAR_19->crlf_action == VAR_10 && VAR_13 == VAR_2)
  VAR_19->crlf_action = VAR_4;
 if (VAR_19->crlf_action == VAR_10 && VAR_13 == VAR_1)
  VAR_19->crlf_action = VAR_5;
}

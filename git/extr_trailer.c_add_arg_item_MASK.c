
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct new_trailer_item {scalar_t__ where; scalar_t__ if_exists; scalar_t__ if_missing; } ;
struct list_head {int dummy; } ;
struct conf_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ where; scalar_t__ if_exists; scalar_t__ if_missing; } ;
struct arg_item {char* token; char* value; int list; TYPE_1__ conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct conf_info const*) ;
 int FUNC_1 (int *,struct list_head*) ;
 struct arg_item* FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct list_head *VAR_3, char *VAR_4, char *VAR_5,
    const struct conf_info *VAR_6,
    const struct new_trailer_item *VAR_7)
{
 struct arg_item *VAR_8 = FUNC_2(sizeof(*VAR_8), 1);
 VAR_8->token = VAR_4;
 VAR_8->value = VAR_5;
 FUNC_0(&VAR_8->conf, VAR_6);
 if (VAR_7) {
  if (VAR_7->where != VAR_2)
   VAR_8->conf.where = VAR_7->where;
  if (VAR_7->if_exists != VAR_0)
   VAR_8->conf.if_exists = VAR_7->if_exists;
  if (VAR_7->if_missing != VAR_1)
   VAR_8->conf.if_missing = VAR_7->if_missing;
 }
 FUNC_1(&VAR_8->list, VAR_3);
}

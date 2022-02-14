
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct parse_event_data {int previous_type; size_t previous_offset; TYPE_1__* opts; } ;
typedef enum config_event_t { ____Placeholder_config_event_t } config_event_t ;
struct TYPE_5__ {size_t (* do_ftell ) (TYPE_2__*) ;} ;
struct TYPE_4__ {scalar_t__ (* event_fn ) (int,size_t,size_t,int ) ;int event_fn_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 size_t FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int,size_t,size_t,int ) ;

__attribute__((used)) static int FUNC_2(enum config_event_t VAR_3, struct parse_event_data *VAR_4)
{
 size_t VAR_5;

 if (!VAR_4->opts || !VAR_4->opts->event_fn)
  return 0;

 if (VAR_3 == VAR_1 &&
     VAR_4->previous_type == VAR_3)
  return 0;

 VAR_5 = VAR_2->do_ftell(VAR_2);





 if (VAR_3 != VAR_0)
  VAR_5--;

 if (VAR_4->previous_type != VAR_0 &&
     VAR_4->opts->event_fn(VAR_4->previous_type, VAR_4->previous_offset,
     VAR_5, VAR_4->opts->event_fn_data) < 0)
  return -1;

 VAR_4->previous_type = VAR_3;
 VAR_4->previous_offset = VAR_5;

 return 0;
}

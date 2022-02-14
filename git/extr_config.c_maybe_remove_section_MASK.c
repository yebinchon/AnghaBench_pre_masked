
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_store_data {int* seen; int parsed_nr; int seen_nr; TYPE_1__* parsed; } ;
typedef enum config_event_t { ____Placeholder_config_event_t } config_event_t ;
struct TYPE_2__ {int type; size_t begin; size_t end; scalar_t__ is_keys_section; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct config_store_data *VAR_3,
     size_t *VAR_4, size_t *VAR_5,
     int *VAR_6)
{
 size_t VAR_7;
 int VAR_8, VAR_9, VAR_10 = 0;





 VAR_9 = *VAR_6;
 for (VAR_8 = VAR_3->seen[VAR_9]; VAR_8 > 0; VAR_8--) {
  enum config_event_t VAR_11 = VAR_3->parsed[VAR_8 - 1].type;

  if (VAR_11 == VAR_0)

   return;
  if (VAR_11 == VAR_1) {
   if (!VAR_10)

    return;

   break;
  }
  if (VAR_11 == VAR_2) {
   if (!VAR_3->parsed[VAR_8 - 1].is_keys_section)
    break;
   VAR_10 = 1;
  }
 }
 VAR_7 = VAR_3->parsed[VAR_8].begin;






 for (VAR_8 = VAR_3->seen[VAR_9] + 1; VAR_8 < VAR_3->parsed_nr; VAR_8++) {
  enum config_event_t VAR_12 = VAR_3->parsed[VAR_8].type;

  if (VAR_12 == VAR_0)
   return;
  if (VAR_12 == VAR_2) {
   if (VAR_3->parsed[VAR_8].is_keys_section)
    continue;
   break;
  }
  if (VAR_12 == VAR_1) {
   if (++VAR_9 < VAR_3->seen_nr &&
       VAR_8 == VAR_3->seen[VAR_9])

    continue;

   return;
  }
 }






 *VAR_6 = VAR_9;
 *VAR_4 = VAR_7;
 if (VAR_8 < VAR_3->parsed_nr)
  *VAR_5 = VAR_3->parsed[VAR_8].begin;
 else
  *VAR_5 = VAR_3->parsed[VAR_3->parsed_nr - 1].end;
}

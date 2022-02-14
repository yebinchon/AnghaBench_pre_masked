
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_config_entry {int dummy; } ;
struct event_config {int entries; } ;


 struct event_config_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct event_config_entry*,int ) ;
 int FUNC_2 (struct event_config_entry*) ;
 int FUNC_3 (struct event_config*) ;
 int VAR_0 ;

void
FUNC_4(struct event_config *VAR_1)
{
 struct event_config_entry *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->entries)) != ((void*)0)) {
  FUNC_1(&VAR_1->entries, VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
 FUNC_3(VAR_1);
}

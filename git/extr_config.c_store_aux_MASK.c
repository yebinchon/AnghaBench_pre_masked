
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_store_data {int key_seen; int seen_nr; scalar_t__ multi_replace; int section_seen; int parsed_nr; int * seen; int seen_alloc; scalar_t__ is_keys_section; } ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char const*,struct config_store_data*) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct config_store_data *VAR_3 = VAR_2;

 if (VAR_3->key_seen) {
  if (FUNC_2(VAR_0, VAR_1, VAR_3)) {
   if (VAR_3->seen_nr == 1 && VAR_3->multi_replace == 0) {
    FUNC_3(FUNC_1("%s has multiple values"), VAR_0);
   }

   FUNC_0(VAR_3->seen, VAR_3->seen_nr + 1,
       VAR_3->seen_alloc);

   VAR_3->seen[VAR_3->seen_nr] = VAR_3->parsed_nr;
   VAR_3->seen_nr++;
  }
 } else if (VAR_3->is_keys_section) {




  FUNC_0(VAR_3->seen, VAR_3->seen_nr + 1, VAR_3->seen_alloc);
  VAR_3->seen[VAR_3->seen_nr] = VAR_3->parsed_nr;
  VAR_3->section_seen = 1;

  if (FUNC_2(VAR_0, VAR_1, VAR_3)) {
   VAR_3->seen_nr++;
   VAR_3->key_seen = 1;
  }
 }

 return 0;
}

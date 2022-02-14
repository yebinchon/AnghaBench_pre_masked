
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_ctx {unsigned long nr_regions; unsigned long nr_paths; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 unsigned long FUNC_1 (char const**) ;
 unsigned long FUNC_2 (struct switch_ctx*,unsigned long) ;
 int FUNC_3 (struct switch_ctx*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (char const) ;

__attribute__((used)) static int FUNC_5(struct switch_ctx *VAR_1,
           unsigned VAR_2, char **VAR_3)
{
 unsigned VAR_4;
 unsigned long VAR_5 = 0;

 for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
  unsigned long VAR_6;
  const char *VAR_7 = VAR_3[VAR_4];

  if ((*VAR_7 & 0xdf) == 'R') {
   unsigned long VAR_8, VAR_9;

   VAR_7++;
   if (FUNC_4(*VAR_7 == ',')) {
    FUNC_0("invalid set_region_mappings argument: '%s'", VAR_3[VAR_4]);
    return -VAR_0;
   }
   VAR_8 = FUNC_1(&VAR_7);
   if (FUNC_4(*VAR_7 != ',')) {
    FUNC_0("invalid set_region_mappings argument: '%s'", VAR_3[VAR_4]);
    return -VAR_0;
   }
   VAR_7++;
   if (FUNC_4(!*VAR_7)) {
    FUNC_0("invalid set_region_mappings argument: '%s'", VAR_3[VAR_4]);
    return -VAR_0;
   }
   VAR_9 = FUNC_1(&VAR_7);
   if (FUNC_4(*VAR_7)) {
    FUNC_0("invalid set_region_mappings argument: '%s'", VAR_3[VAR_4]);
    return -VAR_0;
   }

   if (FUNC_4(!VAR_8) || FUNC_4(VAR_8 - 1 > VAR_5)) {
    FUNC_0("invalid set_region_mappings cycle length: %lu > %lu",
           VAR_8 - 1, VAR_5);
    return -VAR_0;
   }
   if (FUNC_4(VAR_5 + VAR_9 < VAR_5) ||
       FUNC_4(VAR_5 + VAR_9 >= VAR_1->nr_regions)) {
    FUNC_0("invalid set_region_mappings region number: %lu + %lu >= %lu",
           VAR_5, VAR_9, VAR_1->nr_regions);
    return -VAR_0;
   }

   while (VAR_9--) {
    VAR_5++;
    VAR_6 = FUNC_2(VAR_1, VAR_5 - VAR_8);
    FUNC_3(VAR_1, VAR_5, VAR_6);
   }

   continue;
  }

  if (*VAR_7 == ':')
   VAR_5++;
  else {
   VAR_5 = FUNC_1(&VAR_7);
   if (FUNC_4(*VAR_7 != ':')) {
    FUNC_0("invalid set_region_mappings argument: '%s'", VAR_3[VAR_4]);
    return -VAR_0;
   }
  }

  VAR_7++;
  if (FUNC_4(!*VAR_7)) {
   FUNC_0("invalid set_region_mappings argument: '%s'", VAR_3[VAR_4]);
   return -VAR_0;
  }

  VAR_6 = FUNC_1(&VAR_7);
  if (FUNC_4(*VAR_7)) {
   FUNC_0("invalid set_region_mappings argument: '%s'", VAR_3[VAR_4]);
   return -VAR_0;
  }
  if (FUNC_4(VAR_5 >= VAR_1->nr_regions)) {
   FUNC_0("invalid set_region_mappings region number: %lu >= %lu", VAR_5, VAR_1->nr_regions);
   return -VAR_0;
  }
  if (FUNC_4(VAR_6 >= VAR_1->nr_paths)) {
   FUNC_0("invalid set_region_mappings device: %lu >= %u", VAR_6, VAR_1->nr_paths);
   return -VAR_0;
  }

  FUNC_3(VAR_1, VAR_5, VAR_6);
 }

 return 0;
}

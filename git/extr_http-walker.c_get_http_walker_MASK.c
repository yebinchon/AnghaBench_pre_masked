
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct walker_data {int got_alternates; TYPE_1__* alt; } ;
struct walker {struct walker_data* data; int cleanup; int prefetch; int fetch_ref; int fetch; scalar_t__ corrupt_object_found; } ;
struct TYPE_2__ {char* base; int * next; int * packs; scalar_t__ got_indices; } ;


 int FUNC_0 (struct walker*,int (*) (void*)) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int) ;
 char* FUNC_3 (char const*) ;

struct walker *FUNC_4(const char *VAR_5)
{
 char *VAR_6;
 struct walker_data *VAR_7 = FUNC_2(sizeof(struct walker_data));
 struct walker *VAR_8 = FUNC_2(sizeof(struct walker));

 VAR_7->alt = FUNC_2(sizeof(*VAR_7->alt));
 VAR_7->alt->base = FUNC_3(VAR_5);
 for (VAR_6 = VAR_7->alt->base + FUNC_1(VAR_7->alt->base) - 1; *VAR_6 == '/'; --VAR_6)
  *VAR_6 = 0;

 VAR_7->alt->got_indices = 0;
 VAR_7->alt->packs = ((void*)0);
 VAR_7->alt->next = ((void*)0);
 VAR_7->got_alternates = -1;

 VAR_8->corrupt_object_found = 0;
 VAR_8->fetch = VAR_1;
 VAR_8->fetch_ref = VAR_2;
 VAR_8->prefetch = VAR_4;
 VAR_8->cleanup = VAR_0;
 VAR_8->data = VAR_7;





 return VAR_8;
}

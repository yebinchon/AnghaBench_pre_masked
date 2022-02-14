
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_region {scalar_t__ mr_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mem_region*,int*,struct mem_region*,int*) ;
 int VAR_1 ;
 struct mem_region* VAR_2 ;
 int FUNC_1 (struct mem_region*,struct mem_region*,int) ;
 int FUNC_2 (struct mem_region*,struct mem_region*) ;
 int FUNC_3 (struct mem_region*,struct mem_region*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct mem_region* VAR_7 ;
 int FUNC_4 (struct mem_region*,int,int,int ) ;

void
FUNC_5(struct mem_region **VAR_8, int *VAR_9, struct mem_region **VAR_10,
    int *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;

 if (VAR_5 == 0) {
  FUNC_0(VAR_6, VAR_7, &VAR_5,
      VAR_2, &VAR_4);
  FUNC_4(VAR_7, VAR_5, sizeof(*VAR_7), VAR_3);
  FUNC_4(VAR_2, VAR_4, sizeof(*VAR_2), VAR_3);


  do {
   VAR_14 = VAR_0;
   for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
    if (VAR_2[VAR_12].mr_size == 0)
     continue;
    for (VAR_13 = VAR_12+1; VAR_13 < VAR_4; VAR_13++) {
     if (VAR_2[VAR_13].mr_size == 0)
      continue;
     if (!FUNC_3(&VAR_2[VAR_13],
         &VAR_2[VAR_12]))
      continue;

     FUNC_2(&VAR_2[VAR_13], &VAR_2[VAR_12]);

     VAR_2[VAR_13].mr_size = 0;
     VAR_14 = VAR_1;
    }
   }
  } while (VAR_14 == VAR_1);


  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
   if (VAR_2[VAR_12].mr_size == 0) {
    FUNC_1(&VAR_2[VAR_12], &VAR_2[VAR_12+1],
        (VAR_4 - VAR_12 - 1)*sizeof(*VAR_2));
    VAR_4--;
    VAR_12--;
   }
  }
 }

 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_7;
 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_2;
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_5;
 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_4;
}

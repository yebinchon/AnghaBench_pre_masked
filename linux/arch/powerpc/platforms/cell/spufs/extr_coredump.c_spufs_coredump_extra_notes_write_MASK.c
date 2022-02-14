
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {int dummy; } ;
struct coredump_params {int dummy; } ;
struct TYPE_2__ {int * name; } ;


 struct spu_context* FUNC_0 (int*) ;
 int FUNC_1 (struct spu_context*) ;
 int FUNC_2 (struct spu_context*) ;
 int FUNC_3 (struct spu_context*,int,struct coredump_params*,int) ;
 TYPE_1__* VAR_0 ;

int FUNC_4(struct coredump_params *VAR_1)
{
 struct spu_context *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = 0;
 while ((VAR_2 = FUNC_0(&VAR_3)) != ((void*)0)) {
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5)
   return VAR_5;

  for (VAR_4 = 0; VAR_0[VAR_4].name != ((void*)0); VAR_4++) {
   VAR_5 = FUNC_3(VAR_2, VAR_4, VAR_1, VAR_3);
   if (VAR_5) {
    FUNC_2(VAR_2);
    return VAR_5;
   }
  }

  FUNC_2(VAR_2);


  VAR_3++;
 }

 return 0;
}

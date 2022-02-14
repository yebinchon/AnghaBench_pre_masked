
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firmware {int dummy; } ;
struct adreno_gpu {struct firmware const** fw; TYPE_1__* info; } ;
struct TYPE_2__ {int * fw; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const*) ;
 struct firmware* FUNC_3 (struct adreno_gpu*,int ) ;

int FUNC_4(struct adreno_gpu *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->info->fw); VAR_1++) {
  const struct firmware *VAR_2;

  if (!VAR_0->info->fw[VAR_1])
   continue;


  if (VAR_0->fw[VAR_1])
   continue;

  VAR_2 = FUNC_3(VAR_0, VAR_0->info->fw[VAR_1]);
  if (FUNC_1(VAR_2))
   return FUNC_2(VAR_2);

  VAR_0->fw[VAR_1] = VAR_2;
 }

 return 0;
}

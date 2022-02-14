
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* filelen; void* fileofs; } ;
typedef TYPE_1__ aas_lump_t ;
struct TYPE_5__ {TYPE_1__* lumps; } ;
typedef TYPE_2__ aas_header_t ;
typedef int FILE ;


 void* FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,int,int,int *) ;

int FUNC_5(FILE *VAR_0, aas_header_t *VAR_1, int VAR_2, void *VAR_3, int VAR_4)
{
 aas_lump_t *VAR_5;

 VAR_5 = &VAR_1->lumps[VAR_2];

 VAR_5->fileofs = FUNC_0(FUNC_3(VAR_0));
 VAR_5->filelen = FUNC_0(VAR_4);

 if (VAR_4 > 0)
 {
  if (FUNC_4(VAR_3, VAR_4, 1, VAR_0) < 1)
  {
   FUNC_1("error writing lump %s\n", VAR_2);
   FUNC_2(VAR_0);
   return 0;
  }
 }
 return 1;
}

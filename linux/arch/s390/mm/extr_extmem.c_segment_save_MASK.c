
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcss_segment {int segcnt; TYPE_1__* range; } ;
struct TYPE_2__ {int start; int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int ,int*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 struct dcss_segment* FUNC_4 (char*) ;
 int * VAR_3 ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*) ;

void
FUNC_7(char *VAR_4)
{
 struct dcss_segment *VAR_5;
 char VAR_6[160];
 char VAR_7[80];
 int VAR_8, VAR_9;

 if (!VAR_0)
  return;

 FUNC_1(&VAR_2);
 VAR_5 = FUNC_4 (VAR_4);

 if (VAR_5 == ((void*)0)) {
  FUNC_3("Saving unknown DCSS %s failed\n", VAR_4);
  goto out;
 }

 FUNC_5(VAR_6, "DEFSEG %s", VAR_4);
 for (VAR_8=0; VAR_8<VAR_5->segcnt; VAR_8++) {
  FUNC_5(VAR_6+FUNC_6(VAR_6), " %lX-%lX %s",
   VAR_5->range[VAR_8].start >> VAR_1,
   VAR_5->range[VAR_8].end >> VAR_1,
   VAR_3[VAR_5->range[VAR_8].start & 0xff]);
 }
 FUNC_5(VAR_7, "SAVESEG %s", VAR_4);
 VAR_9 = 0;
 FUNC_0(VAR_6, ((void*)0), 0, &VAR_9);
 if (VAR_9) {
  FUNC_3("Saving a DCSS failed with DEFSEG response code "
         "%i\n", VAR_9);
  goto out;
 }
 FUNC_0(VAR_7, ((void*)0), 0, &VAR_9);
 if (VAR_9) {
  FUNC_3("Saving a DCSS failed with SAVESEG response code "
         "%i\n", VAR_9);
  goto out;
 }
out:
 FUNC_2(&VAR_2);
}

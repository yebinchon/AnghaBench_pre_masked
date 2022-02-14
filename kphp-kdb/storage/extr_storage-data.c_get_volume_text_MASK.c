
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int binlogs; int disabled; int docs; int idx_docs; int * B; } ;
typedef TYPE_1__ volume_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 TYPE_1__* FUNC_1 (long long,int ) ;
 int FUNC_2 (char*,char*,int,int,int,int) ;

int FUNC_3 (char *VAR_1, long long VAR_2) {
  int VAR_3;
  char *VAR_4 = VAR_1;
  volume_t *VAR_5 = FUNC_1 (VAR_2, 0);
  if (VAR_5 == ((void*)0)) {
    return VAR_0;
  }
  VAR_4 += FUNC_2 (VAR_4, "binlogs\t%d\n"
                   "disabled\t%d\n"
                   "docs\t%d\n"
                   "idx_docs\t%d\n",
    VAR_5->binlogs,
    VAR_5->disabled,
    VAR_5->docs,
    VAR_5->idx_docs
    );
  for (VAR_3 = 0; VAR_3 < VAR_5->binlogs; VAR_3++) {
    VAR_4 += FUNC_0 (VAR_4, VAR_5->B[VAR_3], VAR_3 + 1);
  }
  return VAR_4 - VAR_1;
}

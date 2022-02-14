
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refcnt; struct TYPE_4__* prev; } ;
typedef TYPE_1__ metafile_t ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (int,char*,scalar_t__,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2 (int VAR_4) {
  int VAR_5 = 0;
  metafile_t *VAR_6, *VAR_7;
  for (VAR_6 = VAR_0[VAR_4].prev; VAR_6 != &VAR_0[VAR_4] && VAR_2[VAR_4] > VAR_1; ) {
    if (VAR_6->refcnt > 0) {
      VAR_6 = VAR_6->prev;
      continue;
    }
    VAR_7 = VAR_6->prev;
    FUNC_0 (VAR_6);
    VAR_5++;
    VAR_6 = VAR_7;
  }

  if (VAR_2[VAR_4] > VAR_1 && !VAR_5) {
    FUNC_1 (2, "unload_metafile: max_metafiles_bytes = %d, metafile_bucket_bytes[%d] = %d, metafiles = %d\n", VAR_1, VAR_4, VAR_2[VAR_4], VAR_3);
  }
}

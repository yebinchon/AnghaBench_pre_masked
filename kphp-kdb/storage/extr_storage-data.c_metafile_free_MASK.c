
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int local_id; TYPE_1__* B; } ;
typedef TYPE_2__ metafile_t ;
struct TYPE_7__ {int volume_id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (int ,int ,int*,int) ;
 int VAR_0 ;
 int FUNC_4 (int,char*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5 (metafile_t *VAR_1) {
  int VAR_2;
  FUNC_4 (3, "metafile_free (%p)\n", VAR_1);
  FUNC_1 (VAR_1);
  FUNC_0 (FUNC_3 (VAR_1->B->volume_id, VAR_1->local_id, &VAR_2, -1) != ((void*)0));
  FUNC_2 (VAR_1);
  VAR_0++;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ flags; scalar_t__ tot_entries; } ;
typedef TYPE_1__ metafile_t ;
typedef int list_id_t ;
struct TYPE_9__ {scalar_t__ flags; } ;
struct TYPE_8__ {int tot_lists; } ;


 scalar_t__ VAR_0 ;
 TYPE_6__* FUNC_0 (int) ;
 TYPE_5__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static inline int FUNC_6 (list_id_t VAR_3, int VAR_4) {
  FUNC_3 (0 <= VAR_4 && VAR_4 < VAR_1.tot_lists);
  metafile_t *VAR_5 = FUNC_4 (VAR_4);
  FUNC_3 (FUNC_2(VAR_5) == VAR_0 && FUNC_5 (FUNC_1(VAR_5), VAR_3));
  FUNC_3 (VAR_5->flags == FUNC_0(VAR_4)->flags);
  FUNC_3 ((unsigned) VAR_5->tot_entries <= VAR_2);
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_7__ {int initialized; } ;
typedef TYPE_1__ ctl_arena_t ;
typedef int arena_t ;
struct TYPE_8__ {int destroyed; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int *,int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,size_t const*,size_t,void*,size_t*,void*,size_t,unsigned int*,int **) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,unsigned int) ;
 TYPE_1__* FUNC_7 (unsigned int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int *,TYPE_1__*,unsigned int,int) ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (int *,TYPE_1__*,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(tsd_t *VAR_4, const size_t *VAR_5, size_t VAR_6, void *VAR_7,
    size_t *VAR_8, void *VAR_9, size_t VAR_10) {
 int VAR_11;
 unsigned VAR_12;
 arena_t *VAR_13;
 ctl_arena_t *VAR_14, *VAR_15;

 VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10, &VAR_12, &VAR_13);
 if (VAR_11 != 0) {
  goto label_return;
 }

 if (FUNC_3(VAR_13, 0) != 0 || FUNC_3(VAR_13,
     1) != 0) {
  VAR_11 = VAR_0;
  goto label_return;
 }

 FUNC_6(VAR_4, VAR_12);

 FUNC_4(VAR_4, VAR_13);
 FUNC_0(FUNC_12(VAR_4), VAR_13, 0, 1);
 VAR_14 = FUNC_7(VAR_1);
 VAR_14->initialized = 1;
 FUNC_9(FUNC_12(VAR_4), VAR_13, VAR_14, VAR_12, 1);

 FUNC_1(VAR_4, VAR_13);
 VAR_15 = FUNC_7(VAR_12);
 VAR_15->initialized = 0;

 FUNC_10(VAR_15, VAR_3);
 FUNC_11(&VAR_2->destroyed, VAR_15, VAR_3);
 FUNC_5(VAR_4, VAR_12);

 FUNC_8(VAR_11 == 0);
label_return:
 return VAR_11;
}

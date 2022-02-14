
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsd_t ;
typedef int ctl_node_t ;
struct TYPE_3__ {int (* ctl ) (int *,size_t*,size_t,void*,size_t*,void*,size_t) ;} ;
typedef TYPE_1__ ctl_named_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,char const*,int const**,size_t*,size_t*) ;
 TYPE_1__* FUNC_2 (int const*) ;
 int FUNC_3 (int *,size_t*,size_t,void*,size_t*,void*,size_t) ;
 int FUNC_4 (int *) ;

int
FUNC_5(tsd_t *VAR_4, const char *VAR_5, void *VAR_6, size_t *VAR_7,
    void *VAR_8, size_t VAR_9) {
 int VAR_10;
 size_t VAR_11;
 ctl_node_t const *VAR_12[VAR_0];
 size_t VAR_13[VAR_0];
 const ctl_named_node_t *VAR_14;

 if (!VAR_3 && FUNC_0(VAR_4)) {
  VAR_10 = VAR_1;
  goto label_return;
 }

 VAR_11 = VAR_0;
 VAR_10 = FUNC_1(FUNC_4(VAR_4), VAR_5, VAR_12, VAR_13, &VAR_11);
 if (VAR_10 != 0) {
  goto label_return;
 }

 VAR_14 = FUNC_2(VAR_12[VAR_11-1]);
 if (VAR_14 != ((void*)0) && VAR_14->ctl) {
  VAR_10 = VAR_14->ctl(VAR_4, VAR_13, VAR_11, VAR_6, VAR_7, VAR_8, VAR_9);
 } else {

  VAR_10 = VAR_2;
 }

label_return:
 return(VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int ctl_named_node_t ;


 scalar_t__ FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int * VAR_1 ;

__attribute__((used)) static const ctl_named_node_t *
FUNC_3(tsdn_t *VAR_2, const size_t *VAR_3,
    size_t VAR_4, size_t VAR_5) {
 const ctl_named_node_t *VAR_6;

 FUNC_1(VAR_2, &VAR_0);
 if (FUNC_0(VAR_5)) {
  VAR_6 = ((void*)0);
  goto label_return;
 }

 VAR_6 = VAR_1;
label_return:
 FUNC_2(VAR_2, &VAR_0);
 return VAR_6;
}

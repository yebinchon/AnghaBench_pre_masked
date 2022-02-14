
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int jq_state ;
typedef int (* jq_msg_cb ) (void*,int ) ;


 int FUNC_0 (int *,int (*) (void*,int ),void**) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static jv FUNC_2(jq_state *VAR_0, jv VAR_1) {
  jq_msg_cb VAR_2;
  void *VAR_3;
  FUNC_0(VAR_0, VAR_2, &VAR_3);
  if (VAR_2 != ((void*)0))
    VAR_2(VAR_3, FUNC_1(VAR_1));
  return VAR_1;
}

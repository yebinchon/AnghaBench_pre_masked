
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct outputs_json_params {int cur_key; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,size_t,unsigned char const*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const unsigned char *VAR_1, size_t VAR_2) {
    struct outputs_json_params *VAR_3 = (struct outputs_json_params *)VAR_0;
    FUNC_0(VAR_3->cur_key);
    FUNC_1(&(VAR_3->cur_key), "%.*s", VAR_2, VAR_1);
    return 1;
}

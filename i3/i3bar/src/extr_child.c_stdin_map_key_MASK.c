
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_map_key; } ;
typedef TYPE_1__ parser_ctx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,size_t,unsigned char const*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const unsigned char *VAR_1, size_t VAR_2) {
    parser_ctx *VAR_3 = VAR_0;
    FUNC_0(VAR_3->last_map_key);
    FUNC_1(&(VAR_3->last_map_key), "%.*s", VAR_2, VAR_1);
    return 1;
}

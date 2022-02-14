
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*,size_t) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, const unsigned char *VAR_3, size_t VAR_4) {
    VAR_0 = (VAR_4 == FUNC_0("human_readable") &&
                          FUNC_1((const char *)VAR_3, "human_readable", FUNC_0("human_readable")) == 0);
    VAR_1 = (VAR_4 == FUNC_0("loaded_config_file_name") &&
                                   FUNC_1((const char *)VAR_3, "loaded_config_file_name", FUNC_0("loaded_config_file_name")) == 0);
    return 1;
}

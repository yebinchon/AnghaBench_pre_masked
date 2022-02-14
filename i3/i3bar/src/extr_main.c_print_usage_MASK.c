
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(char *VAR_0) {
    FUNC_0("Usage: %s -b bar_id [-s sock_path] [-t] [-h] [-v]\n", VAR_0);
    FUNC_0("\n");
    FUNC_0("-b, --bar_id       <bar_id>\tBar ID for which to get the configuration\n");
    FUNC_0("-s, --socket       <sock_path>\tConnect to i3 via <sock_path>\n");
    FUNC_0("-t, --transparency Enable transparency (RGBA colors)\n");
    FUNC_0("-h, --help         Display this help message and exit\n");
    FUNC_0("-v, --version      Display version number and exit\n");
    FUNC_0("-V, --verbose      Enable verbose mode\n");
    FUNC_0("\n");
    FUNC_0(" PLEASE NOTE that i3bar will be automatically started by i3\n"
           " as soon as there is a 'bar' configuration block in your\n"
           " config file. You should never need to start it manually.\n");
    FUNC_0("\n");
}

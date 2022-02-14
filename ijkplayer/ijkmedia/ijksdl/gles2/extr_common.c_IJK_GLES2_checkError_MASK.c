
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLint ;


 int FUNC_0 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;

void FUNC_2(const char* VAR_0) {
    for (GLint VAR_1 = FUNC_1(); VAR_1; VAR_1 = FUNC_1()) {
        FUNC_0("[GLES2] after %s() glError (0x%x)\n", VAR_0, VAR_1);
    }
}

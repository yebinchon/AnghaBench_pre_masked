
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (char*,...) ;

void FUNC_1(char *VAR_0, uint8_t *VAR_1, unsigned int VAR_2) {
    FUNC_0("%s ", VAR_0);
    for(unsigned VAR_3=0; VAR_3<VAR_2; ++VAR_3) {
        FUNC_0("%02X ", (unsigned)VAR_1[VAR_3]);
    }
    FUNC_0("\n");
}

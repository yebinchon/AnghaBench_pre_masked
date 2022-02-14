
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0 (byte *VAR_1) {
 int VAR_2;
 VAR_2 = (VAR_1[(VAR_0>>3)] >> (VAR_0&7)) & 0x1;
 VAR_0++;
 return VAR_2;
}

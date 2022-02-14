
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 size_t VAR_1 ;

int FUNC_0( void ) {
 int VAR_2 = ((unsigned int)VAR_0[VAR_1] | ((unsigned int)VAR_0[VAR_1+1]<<8) | ((unsigned int)VAR_0[VAR_1+2]<<16) | ((unsigned int)VAR_0[VAR_1+3]<<24));
 VAR_1 += 4;
 return VAR_2;
}

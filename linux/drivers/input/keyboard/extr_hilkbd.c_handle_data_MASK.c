
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* data; int ptr; scalar_t__ curdev; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(unsigned char VAR_1, unsigned char VAR_2)
{
 if (VAR_0.curdev) {
  VAR_0.data[VAR_0.ptr++] = VAR_2;
  VAR_0.ptr &= 15;
 }
}

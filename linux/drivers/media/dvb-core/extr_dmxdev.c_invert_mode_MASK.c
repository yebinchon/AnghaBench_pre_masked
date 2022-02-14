
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmx_filter {int* mode; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct dmx_filter *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->mode[VAR_2] ^= 0xff;
}

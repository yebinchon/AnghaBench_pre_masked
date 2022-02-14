
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitstream_cursor {unsigned int bit; scalar_t__ b; } ;



__attribute__((used)) static inline void FUNC_0(struct bitstream_cursor *VAR_0, unsigned int VAR_1)
{
 VAR_1 += VAR_0->bit;
 VAR_0->b = VAR_0->b + (VAR_1 >> 3);
 VAR_0->bit = VAR_1 & 7;
}

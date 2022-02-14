
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsxxxaa {size_t count; int * buf; } ;


 scalar_t__ FUNC_0 (int ,unsigned char) ;

__attribute__((used)) static inline int FUNC_1(struct vsxxxaa *VAR_0,
          unsigned char VAR_1, size_t VAR_2)
{
 return VAR_0->count >= VAR_2 && FUNC_0(VAR_0->buf[0], VAR_1);
}

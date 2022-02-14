
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitreader {int ptr; int start_ptr; int prefix_bit_offset; int m; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_1 (const struct bitreader *VAR_0) {
  return ((VAR_0->ptr - VAR_0->start_ptr) << 3) + (FUNC_0 (VAR_0->m) - 32) - VAR_0->prefix_bit_offset;
}

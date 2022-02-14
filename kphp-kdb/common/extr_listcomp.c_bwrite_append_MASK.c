
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitwriter {unsigned char* ptr; unsigned char* end_ptr; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1 (struct bitwriter *VAR_0, unsigned char VAR_1) {
  VAR_0->ptr++;
  FUNC_0 (VAR_0->ptr < VAR_0->end_ptr);
  *VAR_0->ptr = VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitstream {size_t buf_len; unsigned int pad_bits; void* buf; int cur; } ;


 int FUNC_0 (int *,void*) ;

__attribute__((used)) static inline void FUNC_1(struct bitstream *VAR_0, void *VAR_1, size_t VAR_2, unsigned int VAR_3)
{
 VAR_0->buf = VAR_1;
 VAR_0->buf_len = VAR_2;
 VAR_0->pad_bits = VAR_3;
 FUNC_0(&VAR_0->cur, VAR_0->buf);
}

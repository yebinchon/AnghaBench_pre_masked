
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_buffers_chunk {unsigned int bs_shift; unsigned int bs_inverse; int buffer_size; scalar_t__ first_buffer; scalar_t__ tot_buffers; } ;
struct msg_buffer {int dummy; } ;


 int FUNC_0 (int) ;

inline int FUNC_1 (struct msg_buffers_chunk *VAR_0, struct msg_buffer *VAR_1) {
  unsigned VAR_2 = ((char *) VAR_1 - (char *) VAR_0->first_buffer);
  VAR_2 >>= VAR_0->bs_shift;
  VAR_2 *= VAR_0->bs_inverse;
  FUNC_0 (VAR_2 <= (unsigned) VAR_0->tot_buffers && (char *) VAR_1 == (char *) VAR_0->first_buffer + (VAR_0->buffer_size + 16) * VAR_2);
  return VAR_2;
}

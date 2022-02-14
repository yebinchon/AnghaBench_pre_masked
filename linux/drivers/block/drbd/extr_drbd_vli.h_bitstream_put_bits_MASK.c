
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {unsigned char* b; unsigned int const bit; } ;
struct bitstream {unsigned char* buf; int buf_len; TYPE_1__ cur; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned int const) ;

__attribute__((used)) static inline int FUNC_1(struct bitstream *VAR_1, u64 VAR_2, const unsigned int VAR_3)
{
 unsigned char *VAR_4 = VAR_1->cur.b;
 unsigned int VAR_5;

 if (VAR_3 == 0)
  return 0;

 if ((VAR_1->cur.b + ((VAR_1->cur.bit + VAR_3 -1) >> 3)) - VAR_1->buf >= VAR_1->buf_len)
  return -VAR_0;


 if (VAR_3 < 64)
  VAR_2 &= ~0ULL >> (64 - VAR_3);

 *VAR_4++ |= (VAR_2 & 0xff) << VAR_1->cur.bit;

 for (VAR_5 = 8 - VAR_1->cur.bit; VAR_5 < VAR_3; VAR_5 += 8)
  *VAR_4++ |= (VAR_2 >> VAR_5) & 0xff;

 FUNC_0(&VAR_1->cur, VAR_3);
 return VAR_3;
}

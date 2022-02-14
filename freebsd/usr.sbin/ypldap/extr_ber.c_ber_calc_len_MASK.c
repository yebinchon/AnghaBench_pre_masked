
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {scalar_t__ be_encoding; size_t be_len; unsigned long be_type; struct ber_element* be_next; struct ber_element* be_sub; } ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;

size_t
FUNC_0(struct ber_element *VAR_5)
{
 unsigned long VAR_6;
 size_t VAR_7;
 size_t VAR_8 = 2;


 if (VAR_5->be_sub && (VAR_5->be_encoding == VAR_2 ||
     VAR_5->be_encoding == VAR_3))
  VAR_5->be_len = FUNC_0(VAR_5->be_sub);


 if (VAR_5->be_type > VAR_4)
  for (VAR_6 = VAR_5->be_type; VAR_6 > 0; VAR_6 >>= 7)
   VAR_8++;
 if (VAR_5->be_len >= VAR_0)
  for (VAR_7 = VAR_5->be_len; VAR_7 > 0; VAR_7 >>= 8)
   VAR_8++;


 if (VAR_5->be_next)
  VAR_8 += FUNC_0(VAR_5->be_next);


 if (VAR_5->be_type == VAR_1 && VAR_5->be_len == 0)
  return (0);

 return (VAR_5->be_len + VAR_8);
}

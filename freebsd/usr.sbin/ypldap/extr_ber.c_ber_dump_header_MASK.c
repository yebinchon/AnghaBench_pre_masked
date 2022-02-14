
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_char ;
struct ber_element {size_t be_type; size_t be_class; scalar_t__ be_encoding; unsigned long be_len; } ;
struct ber {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct ber*,size_t) ;

__attribute__((used)) static void
FUNC_1(struct ber *VAR_7, struct ber_element *VAR_8)
{
 u_char VAR_9 = 0, VAR_10, VAR_11[8];
 unsigned long VAR_12;
 size_t VAR_13;



 if (VAR_8->be_type <= VAR_6) {
  VAR_9 = VAR_8->be_type | (VAR_8->be_class << VAR_0);
  if (VAR_8->be_encoding == VAR_4 ||
      VAR_8->be_encoding == VAR_5)
   VAR_9 |= VAR_3;

  FUNC_0(VAR_7, VAR_9);
 } else {
  VAR_9 = VAR_1 | (VAR_8->be_class << VAR_0);
  if (VAR_8->be_encoding == VAR_4 ||
      VAR_8->be_encoding == VAR_5)
   VAR_9 |= VAR_3;

  FUNC_0(VAR_7, VAR_9);

  for (VAR_10 = 0, VAR_12 = VAR_8->be_type; VAR_12 > 0; VAR_12 >>= 7)
   VAR_11[VAR_10++] = VAR_12 & ~VAR_2;

  while (VAR_10-- > 0) {
   if (VAR_10 > 0)
    VAR_11[VAR_10] |= VAR_2;
   FUNC_0(VAR_7, VAR_11[VAR_10]);
  }
 }

 if (VAR_8->be_len < VAR_2) {

  FUNC_0(VAR_7, VAR_8->be_len);
 } else {
  for (VAR_10 = 0, VAR_13 = VAR_8->be_len; VAR_13 > 0; VAR_13 >>= 8)
   VAR_11[VAR_10++] = VAR_13 & 0xff;

  FUNC_0(VAR_7, VAR_10 | VAR_2);

  while (VAR_10 > 0)
   FUNC_0(VAR_7, VAR_11[--VAR_10]);
 }
}

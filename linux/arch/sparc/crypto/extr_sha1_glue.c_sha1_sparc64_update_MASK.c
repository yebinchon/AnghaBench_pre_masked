
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct sha1_state {unsigned int count; scalar_t__ buffer; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sha1_state*,int const*,unsigned int,unsigned int) ;
 int FUNC_1 (scalar_t__,int const*,unsigned int) ;
 struct sha1_state* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_1, const u8 *VAR_2,
          unsigned int VAR_3)
{
 struct sha1_state *VAR_4 = FUNC_2(VAR_1);
 unsigned int VAR_5 = VAR_4->count % VAR_0;


 if (VAR_5 + VAR_3 < VAR_0) {
  VAR_4->count += VAR_3;
  FUNC_1(VAR_4->buffer + VAR_5, VAR_2, VAR_3);
 } else
  FUNC_0(VAR_4, VAR_2, VAR_3, VAR_5);

 return 0;
}

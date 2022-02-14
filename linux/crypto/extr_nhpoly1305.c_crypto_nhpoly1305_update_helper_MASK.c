
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;
struct nhpoly1305_state {int buflen; int const* buffer; } ;
struct nhpoly1305_key {int dummy; } ;
typedef int nh_t ;


 unsigned int VAR_0 ;
 struct nhpoly1305_key* FUNC_0 (int ) ;
 int FUNC_1 (int const*,int const*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (struct nhpoly1305_state*,struct nhpoly1305_key const*,int const*,unsigned int,int ) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 struct nhpoly1305_state* FUNC_5 (struct shash_desc*) ;

int FUNC_6(struct shash_desc *VAR_1,
        const u8 *VAR_2, unsigned int VAR_3,
        nh_t VAR_4)
{
 struct nhpoly1305_state *VAR_5 = FUNC_5(VAR_1);
 const struct nhpoly1305_key *VAR_6 = FUNC_0(VAR_1->tfm);
 unsigned int VAR_7;

 if (VAR_5->buflen) {
  VAR_7 = FUNC_2(VAR_3, (int)VAR_0 - VAR_5->buflen);
  FUNC_1(&VAR_5->buffer[VAR_5->buflen], VAR_2, VAR_7);
  VAR_5->buflen += VAR_7;
  if (VAR_5->buflen < VAR_0)
   return 0;
  FUNC_3(VAR_5, VAR_6, VAR_5->buffer, VAR_0,
     VAR_4);
  VAR_5->buflen = 0;
  VAR_2 += VAR_7;
  VAR_3 -= VAR_7;
 }

 if (VAR_3 >= VAR_0) {
  VAR_7 = FUNC_4(VAR_3, VAR_0);
  FUNC_3(VAR_5, VAR_6, VAR_2, VAR_7, VAR_4);
  VAR_2 += VAR_7;
  VAR_3 -= VAR_7;
 }

 if (VAR_3) {
  FUNC_1(VAR_5->buffer, VAR_2, VAR_3);
  VAR_5->buflen = VAR_3;
 }
 return 0;
}

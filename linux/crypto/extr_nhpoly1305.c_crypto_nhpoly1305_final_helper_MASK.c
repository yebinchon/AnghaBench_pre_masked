
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;
struct nhpoly1305_state {int buflen; int poly_state; scalar_t__ nh_remaining; int * buffer; } ;
struct nhpoly1305_key {int dummy; } ;
typedef int nh_t ;


 scalar_t__ VAR_0 ;
 struct nhpoly1305_key* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (struct nhpoly1305_state*,struct nhpoly1305_key const*,int *,scalar_t__,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct nhpoly1305_state*,struct nhpoly1305_key const*) ;
 struct nhpoly1305_state* FUNC_5 (struct shash_desc*) ;

int FUNC_6(struct shash_desc *VAR_1, u8 *VAR_2, nh_t VAR_3)
{
 struct nhpoly1305_state *VAR_4 = FUNC_5(VAR_1);
 const struct nhpoly1305_key *VAR_5 = FUNC_0(VAR_1->tfm);

 if (VAR_4->buflen) {
  FUNC_1(&VAR_4->buffer[VAR_4->buflen], 0,
         VAR_0 - VAR_4->buflen);
  FUNC_2(VAR_4, VAR_5, VAR_4->buffer, VAR_0,
     VAR_3);
 }

 if (VAR_4->nh_remaining)
  FUNC_4(VAR_4, VAR_5);

 FUNC_3(&VAR_4->poly_state, VAR_2);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ber_oid {int dummy; } ;
struct ber_element {size_t be_len; int be_free; int * be_val; } ;


 int VAR_0 ;
 int FUNC_0 (struct ber_element*) ;
 struct ber_element* FUNC_1 (int ) ;
 int FUNC_2 (struct ber_element*,struct ber_element*) ;
 size_t FUNC_3 (struct ber_oid*,int *,size_t) ;
 int * FUNC_4 (int,size_t) ;

struct ber_element *
FUNC_5(struct ber_element *VAR_1, struct ber_oid *VAR_2)
{
 struct ber_element *VAR_3;
 u_int8_t *VAR_4;
 size_t VAR_5;

 if ((VAR_3 = FUNC_1(VAR_0)) == ((void*)0))
  return (((void*)0));

 if ((VAR_5 = FUNC_3(VAR_2, ((void*)0), 0)) == 0)
  goto fail;

 if ((VAR_4 = FUNC_4(1, VAR_5)) == ((void*)0))
  goto fail;

 VAR_3->be_val = VAR_4;
 VAR_3->be_len = VAR_5;
 VAR_3->be_free = 1;

 if (FUNC_3(VAR_2, VAR_4, VAR_5) != VAR_5)
  goto fail;

 FUNC_2(VAR_1, VAR_3);

 return (VAR_3);

 fail:
 FUNC_0(VAR_3);
 return (((void*)0));
}

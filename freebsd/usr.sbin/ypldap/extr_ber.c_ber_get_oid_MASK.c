
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ber_oid {int* bo_id; size_t bo_n; } ;
struct ber_element {scalar_t__ be_encoding; int* be_val; size_t be_len; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ber_oid*,int) ;

int
FUNC_1(struct ber_element *VAR_2, struct ber_oid *VAR_3)
{
 u_int8_t *VAR_4;
 size_t VAR_5, VAR_6 = 0, VAR_7 = 0;

 if (VAR_2->be_encoding != VAR_1)
  return (-1);

 VAR_4 = VAR_2->be_val;
 VAR_5 = VAR_2->be_len;

 if (!VAR_4[VAR_6])
  return (-1);

 FUNC_0(VAR_3, sizeof(*VAR_3));
 VAR_3->bo_id[VAR_7++] = VAR_4[VAR_6] / 40;
 VAR_3->bo_id[VAR_7++] = VAR_4[VAR_6++] % 40;
 for (; VAR_6 < VAR_5 && VAR_7 < VAR_0; VAR_6++) {
  VAR_3->bo_id[VAR_7] = (VAR_3->bo_id[VAR_7] << 7) + (VAR_4[VAR_6] & ~0x80);
  if (VAR_4[VAR_6] & 0x80)
   continue;
  VAR_7++;
 }
 VAR_3->bo_n = VAR_7;

 return (0);
}

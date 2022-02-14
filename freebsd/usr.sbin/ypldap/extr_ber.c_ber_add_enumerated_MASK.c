
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct ber_element {long long be_numeric; int be_len; } ;


 int VAR_0 ;
 struct ber_element* FUNC_0 (int ) ;
 int FUNC_1 (struct ber_element*,struct ber_element*) ;

struct ber_element *
FUNC_2(struct ber_element *VAR_1, long long VAR_2)
{
 struct ber_element *VAR_3;
 u_int VAR_4, VAR_5 = 0;
 u_char VAR_6, VAR_7 = 0;

 if ((VAR_3 = FUNC_0(VAR_0)) == ((void*)0))
  return ((void*)0);

 VAR_3->be_numeric = VAR_2;

 for (VAR_4 = 0; VAR_4 < sizeof(long long); VAR_4++) {
  VAR_6 = VAR_2 & 0xff;
  if (VAR_6 != 0 && VAR_6 != 0xff)
   VAR_5 = VAR_4;
  if ((VAR_6 == 0 && VAR_7 & 0x80) ||
      (VAR_6 == 0xff && (VAR_7 & 0x80) == 0))
   VAR_5 = VAR_4;
  VAR_2 >>= 8;
  VAR_7 = VAR_6;
 }
 VAR_3->be_len = VAR_5 + 1;

 FUNC_1(VAR_1, VAR_3);

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint8_t ;
struct ber_element {int be_encoding; int be_len; struct ber_element* be_next; struct ber_element* be_sub; int be_val; scalar_t__ be_numeric; } ;
struct ber {int dummy; } ;
 int FUNC_0 (struct ber*,struct ber_element*) ;
 int FUNC_1 (struct ber*,unsigned long long) ;
 int FUNC_2 (struct ber*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ber *VAR_0, struct ber_element *VAR_1)
{
 unsigned long long VAR_2;
 int VAR_3;
 uint8_t VAR_4;

 FUNC_0(VAR_0, VAR_1);

 switch (VAR_1->be_encoding) {
 case 136:
 case 133:
 case 135:
  VAR_2 = (unsigned long long)VAR_1->be_numeric;
  for (VAR_3 = VAR_1->be_len; VAR_3 > 0; VAR_3--) {
   VAR_4 = (VAR_2 >> ((VAR_3 - 1) * 8)) & 0xff;
   FUNC_1(VAR_0, VAR_4);
  }
  break;
 case 137:
  return -1;
 case 130:
 case 131:
  FUNC_2(VAR_0, VAR_1->be_val, VAR_1->be_len);
  break;
 case 132:
 case 134:
  break;
 case 129:
 case 128:
  if (VAR_1->be_sub && FUNC_3(VAR_0, VAR_1->be_sub) == -1)
   return -1;
  break;
 }

 if (VAR_1->be_next == ((void*)0))
  return 0;
 return FUNC_3(VAR_0, VAR_1->be_next);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct sockaddr_nb {scalar_t__* snb_name; } ;
struct mbchain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__*) ;
 int FUNC_1 (struct mbchain*,scalar_t__*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2(struct mbchain *VAR_2, struct sockaddr_nb *VAR_3)
{
 int VAR_4;
 u_char VAR_5, *VAR_6;

 VAR_6 = VAR_3->snb_name;
 if (*VAR_6 == 0)
  return VAR_0;
 FUNC_0("[%s]\n", VAR_6);
 for (;;) {
  VAR_5 = (*VAR_6) + 1;
  VAR_4 = FUNC_1(VAR_2, VAR_6, VAR_5, VAR_1);
  if (VAR_4)
   return VAR_4;
  if (VAR_5 == 1)
   break;
  VAR_6 += VAR_5;
 }
 return 0;
}

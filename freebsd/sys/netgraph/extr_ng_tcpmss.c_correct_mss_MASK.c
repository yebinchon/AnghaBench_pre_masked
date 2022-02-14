
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef scalar_t__ u_char ;
struct tcphdr {scalar_t__ th_sum; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_3(struct tcphdr *VAR_5, int VAR_6, uint16_t VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 u_char *VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 uint16_t VAR_14;

 for (VAR_9 = VAR_6 - sizeof(struct tcphdr), VAR_11 = (u_char *)(VAR_5 + 1);
      VAR_9 > 0; VAR_9 -= VAR_10, VAR_11 += VAR_10) {
  if (*VAR_11 == VAR_2)
   break;
  else if (*VAR_11 == VAR_4)
   VAR_10 = 1;
  else {
   VAR_10 = *(VAR_11 + 1);
   if (VAR_10 <= 0 || VAR_10 > VAR_9)
    break;
   if (*VAR_11 == VAR_3) {
    if (VAR_10 != VAR_1)
     continue;
    VAR_12 = FUNC_1(VAR_11 + 2);
    if (VAR_12 > VAR_7) {
     if ((VAR_8 & VAR_0) == 0) {
      VAR_12 -= VAR_7;
      VAR_14 = FUNC_1(&VAR_5->th_sum);
      FUNC_0(VAR_12, VAR_14);
      FUNC_2(&VAR_5->th_sum, VAR_14);
     }
     FUNC_2(VAR_11 + 2, VAR_7);
     VAR_13 = 1;
    }
   }
  }
 }
 return (VAR_13);
}

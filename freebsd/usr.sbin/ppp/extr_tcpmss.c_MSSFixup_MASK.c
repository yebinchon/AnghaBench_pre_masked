
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef scalar_t__ u_char ;
struct tcphdr {int th_off; int th_flags; int th_sum; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct tcphdr *VAR_6, size_t VAR_7, u_int16_t VAR_8)
{
  size_t VAR_9, VAR_10, VAR_11;
  u_char *VAR_12;
  u_int16_t *VAR_13;
  int VAR_14;

  VAR_9 = VAR_6->th_off << 2;


  if (VAR_9 <= sizeof(struct tcphdr) || VAR_9 > VAR_7)
    return;


  if (!(VAR_6->th_flags & VAR_5))
    return;

  for (VAR_10 = VAR_9 - sizeof(struct tcphdr), VAR_12 = (u_char *)(VAR_6 + 1);
       VAR_10 > 0; VAR_10 -= VAR_11, VAR_12 += VAR_11) {
    if (*VAR_12 == VAR_2)
      break;
    else if (*VAR_12 == VAR_4)
      VAR_11 = 1;
    else {
      VAR_11 = *(VAR_12 + 1);
      if (VAR_11 <= 0 || VAR_11 > VAR_10)
        break;
      if (*VAR_12 == VAR_3) {
        if (VAR_11 != VAR_1)
          continue;
        VAR_13 = (u_int16_t *)(VAR_12 + 2);
        if (FUNC_3(*VAR_13) > VAR_8) {
          FUNC_2(VAR_0, "MSS: %u -> %u\n",
               FUNC_3(*VAR_13), VAR_8);
          VAR_14 = *VAR_13;
          *VAR_13 = FUNC_1(VAR_8);
          VAR_14 -= *VAR_13;
          FUNC_0(VAR_14, VAR_6->th_sum);
        }
      }
    }
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tcpopt {int* to_signature; int to_nsacks; int* to_sacks; int to_tfo_len; int* to_tfo_cookie; scalar_t__ to_flags; void* to_tsecr; void* to_tsval; int to_wscale; int to_mss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;





 int FUNC_0 (int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int,int ) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int VAR_20 ;

void
FUNC_5(struct tcpopt *VAR_21, u_char *VAR_22, int VAR_23, int VAR_24)
{
 int VAR_25, VAR_26;

 VAR_21->to_flags = 0;
 for (; VAR_23 > 0; VAR_23 -= VAR_26, VAR_22 += VAR_26) {
  VAR_25 = VAR_22[0];
  if (VAR_25 == VAR_6)
   break;
  if (VAR_25 == VAR_7)
   VAR_26 = 1;
  else {
   if (VAR_23 < 2)
    break;
   VAR_26 = VAR_22[1];
   if (VAR_26 < 2 || VAR_26 > VAR_23)
    break;
  }
  switch (VAR_25) {
  case 133:
   if (VAR_26 != VAR_0)
    continue;
   if (!(VAR_24 & VAR_16))
    continue;
   VAR_21->to_flags |= VAR_10;
   FUNC_1((char *)VAR_22 + 2,
       (char *)&VAR_21->to_mss, sizeof(VAR_21->to_mss));
   VAR_21->to_mss = FUNC_4(VAR_21->to_mss);
   break;
  case 128:
   if (VAR_26 != VAR_5)
    continue;
   if (!(VAR_24 & VAR_16))
    continue;
   VAR_21->to_flags |= VAR_13;
   VAR_21->to_wscale = FUNC_2(VAR_22[2], VAR_8);
   break;
  case 129:
   if (VAR_26 != VAR_4)
    continue;
   VAR_21->to_flags |= VAR_15;
   FUNC_1((char *)VAR_22 + 2,
       (char *)&VAR_21->to_tsval, sizeof(VAR_21->to_tsval));
   VAR_21->to_tsval = FUNC_3(VAR_21->to_tsval);
   FUNC_1((char *)VAR_22 + 6,
       (char *)&VAR_21->to_tsecr, sizeof(VAR_21->to_tsecr));
   VAR_21->to_tsecr = FUNC_3(VAR_21->to_tsecr);
   break;
  case 130:







   if (VAR_26 != VAR_3)
    continue;
   VAR_21->to_flags |= VAR_14;
   VAR_21->to_signature = VAR_22 + 2;
   break;
  case 131:
   if (VAR_26 != VAR_2)
    continue;
   if (!(VAR_24 & VAR_16))
    continue;
   if (!VAR_17)
    continue;
   VAR_21->to_flags |= VAR_12;
   break;
  case 132:
   if (VAR_26 <= 2 || (VAR_26 - 2) % VAR_1 != 0)
    continue;
   if (VAR_24 & VAR_16)
    continue;
   VAR_21->to_flags |= VAR_11;
   VAR_21->to_nsacks = (VAR_26 - 2) / VAR_1;
   VAR_21->to_sacks = VAR_22 + 2;
   FUNC_0(VAR_20);
   break;
  case 134:





   if (!(VAR_24 & VAR_16))
    continue;
   if (!VAR_18 &&
       !VAR_19)
    continue;
   VAR_21->to_flags |= VAR_9;
   VAR_21->to_tfo_len = VAR_26 - 2;
   VAR_21->to_tfo_cookie = VAR_21->to_tfo_len ? VAR_22 + 2 : ((void*)0);
   break;
  default:
   continue;
  }
 }
}

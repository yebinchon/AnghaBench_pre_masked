
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_char ;
struct in_addr {int dummy; } ;
struct TYPE_8__ {scalar_t__* uh_sum; scalar_t__ newaddr; scalar_t__ oldaddr; } ;
struct TYPE_7__ {int rdlen; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
typedef TYPE_1__ NBTNsResourceA ;
typedef TYPE_2__ NBTNsResource ;
typedef TYPE_3__ NBTArguments ;


 int FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 char* FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,...) ;

__attribute__((used)) static u_char *
FUNC_6(
    NBTNsResource * VAR_2,
    char *VAR_3,
    NBTArguments * VAR_4)
{
 NBTNsResourceA *VAR_5;
 u_short VAR_6;





 if (VAR_2 == ((void*)0) || (char *)(VAR_2 + 1) > VAR_3)
  return (((void*)0));


 VAR_5 = (NBTNsResourceA *) ((u_char *) VAR_2 + sizeof(NBTNsResource));


 VAR_6 = FUNC_4(VAR_2->rdlen);







 while (VAR_6 != 0) {
  if (VAR_5 == ((void*)0) || (char *)(VAR_5 + 1) > VAR_3)
   return (((void*)0));



  if (!FUNC_2(&VAR_4->oldaddr, &VAR_5->addr, sizeof(struct in_addr))) {
   if (*VAR_4->uh_sum != 0) {
    int VAR_7;
    u_short *VAR_8;

    VAR_8 = (u_short *) & (VAR_5->addr);
    VAR_7 = *VAR_8++;
    VAR_7 += *VAR_8;
    VAR_8 = (u_short *) & VAR_4->newaddr;
    VAR_7 -= *VAR_8++;
    VAR_7 -= *VAR_8;
    FUNC_0(VAR_7, *VAR_4->uh_sum);
   }
   VAR_5->addr = VAR_4->newaddr;
  }
  VAR_5++;
  VAR_6 -= VAR_1;
 }
 if (VAR_5 == ((void*)0) || (char *)(VAR_5 + 1) > VAR_3)
  VAR_5 = ((void*)0);
 return ((u_char *) VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct in_addr {int dummy; } ;
struct TYPE_8__ {scalar_t__* uh_sum; scalar_t__ newaddr; scalar_t__ oldaddr; } ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_6__ {int rdlen; } ;
typedef TYPE_1__ NBTNsResource ;
typedef TYPE_2__ NBTNsRNB ;
typedef TYPE_3__ NBTArguments ;


 int FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 char* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static u_char *
FUNC_6(
    NBTNsResource * VAR_3,
    char *VAR_4,
    NBTArguments * VAR_5)
{
 NBTNsRNB *VAR_6;
 u_short VAR_7;





 if (VAR_3 == ((void*)0) || (char *)(VAR_3 + 1) > VAR_4)
  return (((void*)0));

 VAR_7 = FUNC_4(VAR_3->rdlen);


 VAR_6 = (NBTNsRNB *) ((u_char *) VAR_3 + VAR_2);
 while (VAR_6 != ((void*)0) && VAR_7 != 0) {
  if ((char *)(VAR_6 + 1) > VAR_4) {
   VAR_6 = ((void*)0);
   break;
  }



  if (!FUNC_2(&VAR_5->oldaddr, &VAR_6->addr, sizeof(struct in_addr))) {
   if (*VAR_5->uh_sum != 0) {
    int VAR_8;
    u_short *VAR_9;

    VAR_9 = (u_short *) & (VAR_6->addr);
    VAR_8 = *VAR_9++;
    VAR_8 += *VAR_9;
    VAR_9 = (u_short *) & (VAR_5->newaddr);
    VAR_8 -= *VAR_9++;
    VAR_8 -= *VAR_9;
    FUNC_0(VAR_8, *VAR_5->uh_sum);
   }
   VAR_6->addr = VAR_5->newaddr;



  }





  VAR_6 = (NBTNsRNB *) ((u_char *) VAR_6 + VAR_1);
  VAR_7 -= VAR_1;
 }
 if (VAR_6 == ((void*)0) || (char *)(VAR_6 + 1) > VAR_4) {
  VAR_6 = ((void*)0);
 }
 return ((u_char *) VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ifq_maxlen; } ;
struct ifnet {int if_hdrlen; TYPE_1__ if_snd; int if_start; int if_output; int if_ioctl; int if_mtu; } ;
struct if_clone {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ifnet** VAR_7 ;
 int FUNC_0 (struct ifnet*,int ,int ) ;
 struct ifnet* FUNC_1 (int ) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_4(struct if_clone *VAR_13, int VAR_14, caddr_t VAR_15)
{
 struct ifnet *VAR_16;

 if (VAR_14 >= VAR_4)
  return (VAR_1);

 VAR_16 = FUNC_1(VAR_3);
 if (VAR_16 == ((void*)0)) {
  return (VAR_2);
 }
 FUNC_3(VAR_16, VAR_10, VAR_14);
 VAR_16->if_mtu = VAR_5;
 VAR_16->if_ioctl = VAR_9;
 VAR_16->if_output = VAR_11;
 VAR_16->if_start = VAR_12;
 VAR_16->if_snd.ifq_maxlen = VAR_8;
 VAR_16->if_hdrlen = VAR_6;
 FUNC_2(VAR_16);

 FUNC_0(VAR_16, VAR_0, VAR_6);

 VAR_7[VAR_14] = VAR_16;

 return (0);
}

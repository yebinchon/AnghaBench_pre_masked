
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct table_info {int data; } ;
struct sockaddr_in6 {int sin6_len; scalar_t__ sin6_family; int rti_addrs; int sin6_addr; struct sockaddr** rti_info; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct rt_addrinfo {int sin6_len; scalar_t__ sin6_family; int rti_addrs; int sin6_addr; struct sockaddr** rti_info; } ;
typedef int mask6 ;
typedef int key6 ;
struct TYPE_5__ {int addr6; int addr; } ;
struct TYPE_6__ {scalar_t__ subtype; TYPE_1__ k; } ;
typedef TYPE_2__ ipfw_obj_tentry ;
typedef int info ;
typedef int dst6 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sockaddr_in6*,int) ;
 scalar_t__ FUNC_1 (int ,struct sockaddr*,int ,int ,struct sockaddr_in6*) ;
 int FUNC_2 (struct sockaddr*,struct sockaddr*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_5, struct table_info *VAR_6,
    ipfw_obj_tentry *VAR_7)
{
 struct rt_addrinfo VAR_8;
 struct sockaddr_in6 VAR_9, VAR_10, VAR_11;
 struct sockaddr *VAR_12, *VAR_13, *VAR_14;


 FUNC_0(&VAR_10, sizeof(VAR_10));
 VAR_10 = sizeof(VAR_10);
 VAR_12 = (struct sockaddr *)&VAR_10;
 FUNC_0(&VAR_11, sizeof(VAR_11));
 VAR_11 = sizeof(VAR_11);
 VAR_14 = (struct sockaddr *)&VAR_11;

 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.rti_info[VAR_2] = VAR_12;
 VAR_8.rti_info[VAR_3] = VAR_14;


 FUNC_0(&VAR_9, sizeof(VAR_9));
 VAR_9 = VAR_7->subtype;
 VAR_13 = (struct sockaddr *)&VAR_9;

 if (VAR_7->subtype == VAR_0) {
  ((struct sockaddr_in *)&VAR_9)->sin_addr = VAR_7->k.addr;
  VAR_9 = sizeof(struct sockaddr_in);
 } else {
  VAR_9 = VAR_7->k.addr6;
  VAR_9 = sizeof(struct sockaddr_in6);
 }

 if (FUNC_1(VAR_6->data, VAR_13, 0, 0, &VAR_8) != 0)
  return (VAR_1);
 if ((VAR_8.rti_addrs & VAR_4) == 0)
  VAR_14 = ((void*)0);

 FUNC_2(VAR_12, VAR_14, VAR_7);

 return (0);
}

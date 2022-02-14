
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct rtable {int dst; } ;
struct qedr_dev {int dummy; } ;
struct neighbour {int nud_state; int ha; } ;
typedef int __be32 ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int *) ;
 int FUNC_1 (struct qedr_dev*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct rtable*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct neighbour* FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 struct rtable* FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (struct rtable*) ;
 int FUNC_7 (struct neighbour*,int *) ;
 int FUNC_8 (struct neighbour*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(struct qedr_dev *VAR_4,
     struct sockaddr_in *VAR_5,
     struct sockaddr_in *VAR_6, u8 *VAR_7)
{
 __be32 VAR_8 = VAR_5->sin_addr.s_addr;
 __be32 VAR_9 = VAR_6->sin_addr.s_addr;
 struct neighbour *VAR_10 = ((void*)0);
 struct rtable *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 VAR_11 = FUNC_5(&VAR_3, VAR_9, VAR_8, 0, 0);
 if (FUNC_2(VAR_11)) {
  FUNC_1(VAR_4, "ip_route_output returned error\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_3(&VAR_11->dst, &VAR_9);

 if (VAR_10) {
  FUNC_9();
  if (VAR_10->nud_state & VAR_1) {
   FUNC_4(VAR_7, VAR_10->ha);
   FUNC_0(VAR_4, VAR_2, "mac_addr=[%pM]\n", VAR_7);
  } else {
   FUNC_7(VAR_10, ((void*)0));
  }
  FUNC_10();
  FUNC_8(VAR_10);
 }

 FUNC_6(VAR_11);

 return VAR_12;
}

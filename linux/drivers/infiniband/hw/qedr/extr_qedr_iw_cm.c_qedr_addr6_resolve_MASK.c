
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr_in6 {int sin6_addr; } ;
struct qedr_dev {int dummy; } ;
struct neighbour {int nud_state; int ha; } ;
struct flowi6 {int daddr; int saddr; } ;
struct dst_entry {scalar_t__ error; } ;
typedef int fl6 ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int *) ;
 int FUNC_1 (struct qedr_dev*,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct neighbour* FUNC_2 (struct dst_entry*,int *) ;
 int FUNC_3 (struct dst_entry*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 struct dst_entry* FUNC_5 (int *,int *,struct flowi6*) ;
 int FUNC_6 (struct flowi6*,int ,int) ;
 int FUNC_7 (struct neighbour*,int *) ;
 int FUNC_8 (struct neighbour*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(struct qedr_dev *VAR_4,
     struct sockaddr_in6 *VAR_5,
     struct sockaddr_in6 *VAR_6, u8 *VAR_7)
{
 struct neighbour *VAR_8 = ((void*)0);
 struct dst_entry *VAR_9;
 struct flowi6 VAR_10;
 int VAR_11 = 0;

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_10 = VAR_6->sin6_addr;
 VAR_10 = VAR_5->sin6_addr;

 VAR_9 = FUNC_5(&VAR_3, ((void*)0), &VAR_10);

 if ((!VAR_9) || VAR_9->error) {
  if (VAR_9) {
   FUNC_3(VAR_9);
   FUNC_1(VAR_4,
          "ip6_route_output returned dst->error = %d\n",
          VAR_9->error);
  }
  return -VAR_0;
 }
 VAR_8 = FUNC_2(VAR_9, &VAR_10);
 if (VAR_8) {
  FUNC_9();
  if (VAR_8->nud_state & VAR_1) {
   FUNC_4(VAR_7, VAR_8->ha);
   FUNC_0(VAR_4, VAR_2, "mac_addr=[%pM]\n", VAR_7);
  } else {
   FUNC_7(VAR_8, ((void*)0));
  }
  FUNC_10();
  FUNC_8(VAR_8);
 }

 FUNC_3(VAR_9);

 return VAR_11;
}

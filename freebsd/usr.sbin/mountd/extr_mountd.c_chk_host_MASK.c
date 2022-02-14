
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct hostlist {int ht_flag; struct hostlist* ht_next; struct grouplist* ht_grp; } ;
struct TYPE_3__ {int nt_mask; int nt_net; } ;
struct TYPE_4__ {TYPE_1__ gt_net; struct addrinfo* gt_addrinfo; } ;
struct grouplist {int gr_type; int gr_numsecflavors; int* gr_secflavors; TYPE_2__ gr_ptr; } ;
struct dirlist {int dp_flag; struct hostlist* dp_hosts; } ;
struct addrinfo {struct sockaddr* ai_addr; struct addrinfo* ai_next; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct sockaddr*,struct sockaddr*,struct sockaddr*) ;

__attribute__((used)) static int
FUNC_1(struct dirlist *VAR_2, struct sockaddr *VAR_3, int *VAR_4,
 int *VAR_5, int *VAR_6, int **VAR_7)
{
 struct hostlist *VAR_8;
 struct grouplist *VAR_9;
 struct addrinfo *VAR_10;

 if (VAR_2) {
  if (VAR_2->dp_flag & VAR_0)
   *VAR_4 = VAR_2->dp_flag;
  VAR_8 = VAR_2->dp_hosts;
  while (VAR_8) {
   VAR_9 = VAR_8->ht_grp;
   switch (VAR_9->gr_type) {
   case 129:
    VAR_10 = VAR_9->gr_ptr.gt_addrinfo;
    for (; VAR_10; VAR_10 = VAR_10->ai_next) {
     if (!FUNC_0(VAR_10->ai_addr, VAR_3, ((void*)0))) {
      *VAR_5 =
          (VAR_8->ht_flag | VAR_1);
      if (VAR_6 != ((void*)0)) {
       *VAR_6 =
           VAR_9->gr_numsecflavors;
       *VAR_7 =
           VAR_9->gr_secflavors;
      }
      return (1);
     }
    }
    break;
   case 128:
    if (!FUNC_0(VAR_3, (struct sockaddr *)
        &VAR_9->gr_ptr.gt_net.nt_net,
        (struct sockaddr *)
        &VAR_9->gr_ptr.gt_net.nt_mask)) {
     *VAR_5 = (VAR_8->ht_flag | VAR_1);
     if (VAR_6 != ((void*)0)) {
      *VAR_6 =
          VAR_9->gr_numsecflavors;
      *VAR_7 =
          VAR_9->gr_secflavors;
     }
     return (1);
    }
    break;
   }
   VAR_8 = VAR_8->ht_next;
  }
 }
 return (0);
}

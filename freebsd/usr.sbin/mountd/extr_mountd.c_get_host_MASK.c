
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct addrinfo* gt_addrinfo; } ;
struct grouplist {scalar_t__ gr_type; TYPE_1__ gr_ptr; struct grouplist* gr_next; } ;
struct addrinfo {char* ai_canonname; struct addrinfo* ai_next; int ai_addr; int ai_flags; int ai_addrlen; int ai_protocol; } ;
typedef int host ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_2 (int ,int ,char*,int,int *,int ,int ) ;
 int FUNC_3 (struct addrinfo*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int VAR_9 ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_8(char *VAR_10, struct grouplist *VAR_11, struct grouplist *VAR_12)
{
 struct grouplist *VAR_13;
 struct addrinfo *VAR_14, *VAR_15, VAR_16;
 int VAR_17;
 char VAR_18[VAR_6];

 if (VAR_11->gr_type != VAR_3) {
  FUNC_7(VAR_5, "Bad netgroup type for ip host %s", VAR_10);
  return (1);
 }
 FUNC_3(&VAR_16, 0, sizeof VAR_16);
 VAR_16.ai_flags = VAR_0;
 VAR_16.ai_protocol = VAR_4;
 VAR_17 = FUNC_1(VAR_10, ((void*)0), &VAR_16, &VAR_14);
 if (VAR_17 != 0) {
  FUNC_7(VAR_5,"can't get address info for host %s", VAR_10);
  return 1;
 }
 VAR_11->gr_ptr.gt_addrinfo = VAR_14;
 while (VAR_14 != ((void*)0)) {
  if (VAR_14->ai_canonname == ((void*)0)) {
   if (FUNC_2(VAR_14->ai_addr, VAR_14->ai_addrlen, VAR_18,
       sizeof VAR_18, ((void*)0), 0, VAR_7) != 0)
    FUNC_6(VAR_18, "?", sizeof(VAR_18));
   VAR_14->ai_canonname = FUNC_5(VAR_18);
   VAR_14->ai_flags |= VAR_0;
  }
  if (VAR_8)
   FUNC_0(VAR_9, "got host %s\n", VAR_14->ai_canonname);




  for (VAR_13 = VAR_12; VAR_13 != ((void*)0);
      VAR_13 = VAR_13->gr_next) {
   if (VAR_13->gr_type != VAR_1)
    continue;
   for (VAR_15 = VAR_13->gr_ptr.gt_addrinfo; VAR_15 != ((void*)0);
       VAR_15 = VAR_15->ai_next) {
    if (FUNC_4(VAR_15->ai_addr, VAR_14->ai_addr, ((void*)0)) != 0)
     continue;
    if (VAR_8)
     FUNC_0(VAR_9,
         "ignoring duplicate host %s\n",
         VAR_14->ai_canonname);
    VAR_11->gr_type = VAR_2;
    return (0);
   }
  }
  VAR_14 = VAR_14->ai_next;
 }
 VAR_11->gr_type = VAR_1;
 return (0);
}

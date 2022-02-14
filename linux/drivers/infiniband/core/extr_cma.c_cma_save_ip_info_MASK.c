
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct ib_cm_event {struct cma_hdr* private_data; } ;
struct cma_hdr {scalar_t__ cma_version; } ;
typedef int __be64 ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cma_hdr*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sockaddr_in*,struct sockaddr_in*,struct cma_hdr*,int ) ;
 int FUNC_3 (struct sockaddr_in6*,struct sockaddr_in6*,struct cma_hdr*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sockaddr *VAR_3,
       struct sockaddr *VAR_4,
       const struct ib_cm_event *VAR_5,
       __be64 VAR_6)
{
 struct cma_hdr *VAR_7;
 __be16 VAR_8;

 VAR_7 = VAR_5->private_data;
 if (VAR_7->cma_version != VAR_0)
  return -VAR_2;

 VAR_8 = FUNC_4(FUNC_1(VAR_6));

 switch (FUNC_0(VAR_7)) {
 case 4:
  FUNC_2((struct sockaddr_in *)VAR_3,
      (struct sockaddr_in *)VAR_4, VAR_7, VAR_8);
  break;
 case 6:
  FUNC_3((struct sockaddr_in6 *)VAR_3,
      (struct sockaddr_in6 *)VAR_4, VAR_7, VAR_8);
  break;
 default:
  return -VAR_1;
 }

 return 0;
}

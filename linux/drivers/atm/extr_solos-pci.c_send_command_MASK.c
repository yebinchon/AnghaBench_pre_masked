
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct solos_card {TYPE_1__* dev; } ;
struct sk_buff {int dummy; } ;
struct pkt_hdr {void* type; void* vci; void* vpi; void* size; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct sk_buff* FUNC_0 (size_t,int ) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct solos_card*,int,struct sk_buff*,int *) ;
 struct pkt_hdr* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,char const*,size_t) ;

__attribute__((used)) static int FUNC_7(struct solos_card *VAR_3, int VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct sk_buff *VAR_7;
 struct pkt_hdr *VAR_8;

 if (VAR_6 > (VAR_0 - sizeof(*VAR_8))) {
  FUNC_2(&VAR_3->dev->dev, "Command is too big.  Dropping request\n");
  return 0;
 }
 VAR_7 = FUNC_0(VAR_6 + sizeof(*VAR_8), VAR_1);
 if (!VAR_7) {
  FUNC_3(&VAR_3->dev->dev, "Failed to allocate sk_buff in send_command()\n");
  return 0;
 }

 VAR_8 = FUNC_5(VAR_7, sizeof(*VAR_8));

 VAR_8->size = FUNC_1(VAR_6);
 VAR_8->vpi = FUNC_1(0);
 VAR_8->vci = FUNC_1(0);
 VAR_8->type = FUNC_1(VAR_2);

 FUNC_6(VAR_7, VAR_5, VAR_6);

 FUNC_4(VAR_3, VAR_4, VAR_7, ((void*)0));

 return 0;
}

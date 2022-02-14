
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ipoib_header {scalar_t__ reserved; int proto; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (struct sk_buff*,void const*) ;
 struct ipoib_header* FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1,
        struct net_device *VAR_2,
        unsigned short VAR_3,
        const void *VAR_4,
        const void *VAR_5,
        unsigned int VAR_6)
{
 struct ipoib_header *VAR_7;

 VAR_7 = FUNC_2(VAR_1, sizeof(*VAR_7));

 VAR_7->proto = FUNC_0(VAR_3);
 VAR_7->reserved = 0;






 FUNC_1(VAR_1, VAR_4);

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int tc_verd; scalar_t__ protocol; struct net_device* dev; scalar_t__ data; } ;
struct net_device {int priv_flags; int name; scalar_t__ ip6_ptr; scalar_t__ ip_ptr; scalar_t__ ingress_queue; } ;
struct inet6_dev {int addr_list; } ;
struct in_device {int ifa_list; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 struct net_device* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,struct sk_buff*) ;
 int FUNC_10 (struct net_device*,struct sk_buff*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_5)
{
 struct net_device *VAR_6;
 struct net_device *VAR_7 = ((void*)0);
 int VAR_8 = 0;





 FUNC_7(VAR_5->data + 32);
 FUNC_2();

 VAR_6 = VAR_5->dev;




 if (VAR_4 &&
     (VAR_6->priv_flags & VAR_2)) {
  VAR_7 = FUNC_8(VAR_6);
  if (!VAR_7) {
   FUNC_1("master dev is NULL %s\n");
   goto rx_exit;
  }
  VAR_6 = VAR_7;
 }
 if (FUNC_5(FUNC_4(VAR_0) == VAR_5->protocol)) {
  struct in_device *VAR_9;




  VAR_9 = (struct in_device *)VAR_6->ip_ptr;
  if (FUNC_11(!VAR_9)) {
   FUNC_0("no IP processing for device: %s\n", VAR_6->name);
   goto rx_exit;
  }





  if (FUNC_11(!VAR_9->ifa_list)) {
   FUNC_0("no IP address for device: %s\n", VAR_6->name);
   goto rx_exit;
  }

  VAR_8 = FUNC_9(VAR_6, VAR_5);

 } else if (FUNC_5(FUNC_4(VAR_1) == VAR_5->protocol)) {
  struct inet6_dev *VAR_10;




  VAR_10 = (struct inet6_dev *)VAR_6->ip6_ptr;
  if (FUNC_11(!VAR_10)) {
   FUNC_0("no IPv6 processing for device: %s\n", VAR_6->name);
   goto rx_exit;
  }





  if (FUNC_11(FUNC_6(&VAR_10->addr_list))) {
   FUNC_0("no IPv6 address for device: %s\n", VAR_6->name);
   goto rx_exit;
  }

  VAR_8 = FUNC_10(VAR_6, VAR_5);

 } else {
  FUNC_0("not IP packet\n");
 }

rx_exit:
 if (VAR_7) {
  FUNC_3(VAR_7);
 }

 return VAR_8;
}

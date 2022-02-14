
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int len; char* data; int mac_header; } ;
struct net_device {int name; struct mvswitch_priv* phy_ptr; } ;
struct mvswitch_priv {int* vlans; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 char* FUNC_11 (struct sk_buff*,scalar_t__) ;
 char* FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static struct sk_buff *
FUNC_15(struct net_device *VAR_11, struct sk_buff *VAR_12)
{
 struct mvswitch_priv *VAR_13;
 char *VAR_14 = ((void*)0);
 u16 VAR_15;

 VAR_13 = VAR_11->phy_ptr;
 if (FUNC_14(!VAR_13))
  goto error;

 if (FUNC_14(VAR_12->len < 16))
  goto error;
 if (FUNC_0(VAR_12, &VAR_15))
  goto error;

 if (FUNC_14((VAR_15 > 15 || !VAR_13->vlans[VAR_15])))
  goto error;

 if (VAR_12->len <= 64) {
  if (FUNC_8(VAR_12, 0, 64 + VAR_10 - VAR_12->len, VAR_0))
   goto error_expand;

  VAR_14 = VAR_12->data + 64;
  VAR_12->len = 64 + VAR_10;
 } else {
  if (FUNC_9(VAR_12) || FUNC_14(FUNC_13(VAR_12) < 4)) {
   if (FUNC_8(VAR_12, 0, 4, VAR_0))
    goto error_expand;
  }
  VAR_14 = FUNC_12(VAR_12, 4);
 }


 FUNC_5(VAR_12->data + 4, VAR_12->data, 12);
 VAR_12->data += 4;
 VAR_12->len -= 4;
 VAR_12->mac_header += 4;


 if (!VAR_14)
  goto error;
 *((__be32 *) VAR_14) = FUNC_3((
  (VAR_7 << VAR_6) |
  ((VAR_13->vlans[VAR_15] & VAR_8) << VAR_9)
 ));


 return VAR_12;

error_expand:
 if (FUNC_6())
  FUNC_7("%s: failed to expand/update skb for the switch\n", VAR_11->name);

error:

 FUNC_4(VAR_12);
 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_family; } ;
struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct listen_ctx {int synq; int state; struct chtls_dev* cdev; struct sock* lsk; } ;
struct chtls_dev {int tids; TYPE_1__* lldi; } ;
struct adapter {int flags; } ;
struct TYPE_4__ {int inet_sport; int inet_rcv_saddr; } ;
struct TYPE_3__ {int * rxq_ids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 struct net_device* FUNC_1 (struct chtls_dev*,struct sock*) ;
 int FUNC_2 (int ,scalar_t__,struct listen_ctx*) ;
 int FUNC_3 (struct net_device*,int,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int,scalar_t__) ;
 TYPE_2__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct listen_ctx*) ;
 struct listen_ctx* FUNC_7 (int,int ) ;
 int FUNC_8 (struct chtls_dev*,struct sock*,int) ;
 int FUNC_9 (struct chtls_dev*,struct sock*) ;
 scalar_t__ FUNC_10 (struct chtls_dev*,struct sock*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 struct port_info* FUNC_13 (struct net_device*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*) ;

int FUNC_19(struct chtls_dev *VAR_9, struct sock *VAR_10)
{
 struct net_device *VAR_11;
 struct listen_ctx *VAR_12;
 struct adapter *VAR_13;
 struct port_info *VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_10->sk_family != VAR_6)
  return -VAR_2;

 FUNC_14();
 VAR_11 = FUNC_1(VAR_9, VAR_10);
 FUNC_15();
 if (!VAR_11)
  return -VAR_3;

 VAR_14 = FUNC_13(VAR_11);
 VAR_13 = VAR_14->adapter;
 if (!(VAR_13->flags & VAR_0))
  return -VAR_3;

 if (FUNC_10(VAR_9, VAR_10) >= 0)
  return -VAR_1;

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_5);
 if (!VAR_12)
  return -VAR_4;

 FUNC_0(VAR_8);
 VAR_12->lsk = VAR_10;
 VAR_12->cdev = VAR_9;
 VAR_12->state = VAR_7;
 FUNC_16(&VAR_12->synq);

 VAR_15 = FUNC_2(VAR_9->tids, VAR_10->sk_family, VAR_12);
 if (VAR_15 < 0)
  goto free_ctx;

 FUNC_17(VAR_10);
 if (!FUNC_8(VAR_9, VAR_10, VAR_15))
  goto free_stid;

 VAR_16 = FUNC_3(VAR_11, VAR_15,
      FUNC_5(VAR_10)->inet_rcv_saddr,
      FUNC_5(VAR_10)->inet_sport, 0,
      VAR_9->lldi->rxq_ids[0]);
 if (VAR_16 > 0)
  VAR_16 = FUNC_12(VAR_16);
 if (VAR_16)
  goto del_hash;
 return 0;
del_hash:
 FUNC_9(VAR_9, VAR_10);
free_stid:
 FUNC_4(VAR_9->tids, VAR_15, VAR_10->sk_family);
 FUNC_18(VAR_10);
free_ctx:
 FUNC_6(VAR_12);
 FUNC_11(VAR_8);
 return -VAR_3;
}

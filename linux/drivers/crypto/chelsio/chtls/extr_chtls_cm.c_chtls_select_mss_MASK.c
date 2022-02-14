
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct tcp_sock {unsigned int advmss; } ;
struct sock {int dummy; } ;
struct iphdr {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_4__ {scalar_t__ tstamp; int mss; } ;
struct cpl_pass_accept_req {TYPE_1__ tcpopt; } ;
struct chtls_sock {struct chtls_dev* cdev; struct sock* sk; } ;
struct chtls_dev {TYPE_2__* lldi; } ;
struct TYPE_6__ {unsigned int icsk_pmtu_cookie; } ;
struct TYPE_5__ {int mtus; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct tcp_sock*) ;
 struct dst_entry* FUNC_1 (struct sock*) ;
 unsigned int FUNC_2 (int ,unsigned int,unsigned int,int,unsigned int*) ;
 unsigned int FUNC_3 (struct dst_entry*) ;
 TYPE_3__* FUNC_4 (struct sock*) ;
 unsigned int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;

__attribute__((used)) static unsigned int FUNC_8(const struct chtls_sock *VAR_1,
         unsigned int VAR_2,
         struct cpl_pass_accept_req *VAR_3)
{
 struct chtls_dev *VAR_4;
 struct dst_entry *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 struct tcp_sock *VAR_9;
 unsigned int VAR_10;
 struct sock *VAR_11;

 VAR_10 = FUNC_5(VAR_3->tcpopt.mss);
 VAR_11 = VAR_1->sk;
 VAR_5 = FUNC_1(VAR_11);
 VAR_4 = VAR_1->cdev;
 VAR_9 = FUNC_7(VAR_11);
 VAR_6 = 0;

 VAR_7 = sizeof(struct iphdr) + sizeof(struct tcphdr);
 if (VAR_3->tcpopt.tstamp)
  VAR_6 += FUNC_6(VAR_0, 4);

 VAR_9->advmss = FUNC_3(VAR_5);
 if (FUNC_0(VAR_9) && VAR_9->advmss > FUNC_0(VAR_9))
  VAR_9->advmss = FUNC_0(VAR_9);
 if (VAR_9->advmss > VAR_2 - VAR_7)
  VAR_9->advmss = VAR_2 - VAR_7;
 if (VAR_10 && VAR_9->advmss > VAR_10)
  VAR_9->advmss = VAR_10;

 VAR_9->advmss = FUNC_2(VAR_4->lldi->mtus,
         VAR_7 + VAR_6,
         VAR_9->advmss - VAR_6,
         8, &VAR_8);
 VAR_9->advmss -= VAR_7;

 FUNC_4(VAR_11)->icsk_pmtu_cookie = VAR_2;
 return VAR_8;
}

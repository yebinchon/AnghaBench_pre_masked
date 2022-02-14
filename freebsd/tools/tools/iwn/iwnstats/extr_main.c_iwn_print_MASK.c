
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_2__ {int general; int ht; int cck; int ofdm; } ;
struct iwn_stats {int tx; TYPE_1__ rx; } ;
struct iwnstats {struct iwn_stats st; } ;


 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (struct iwnstats*,struct iwn_stats*) ;
 int FUNC_2 (struct iwnstats*,int *) ;
 int FUNC_3 (struct iwnstats*,int *,char*) ;
 int FUNC_4 (struct iwnstats*,int *) ;
 int FUNC_5 (struct iwnstats*,int *) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(struct iwnstats *VAR_0)
{
 struct iwn_stats *VAR_1;
 struct timeval VAR_2;

 VAR_1 = &VAR_0->st;

 FUNC_0(&VAR_2, ((void*)0));
 FUNC_6("time=%ld.%.6ld\n", (long)VAR_2.tv_sec, (long)VAR_2.tv_usec);

 FUNC_1(VAR_0, VAR_1);


 FUNC_3(VAR_0, &VAR_1->rx.ofdm, "ofdm");
 FUNC_3(VAR_0, &VAR_1->rx.cck, "cck");
 FUNC_2(VAR_0, &VAR_1->rx.ht);
 FUNC_4(VAR_0, &VAR_1->rx.general);


 FUNC_5(VAR_0, &VAR_1->tx);
 FUNC_6("--\n");
}

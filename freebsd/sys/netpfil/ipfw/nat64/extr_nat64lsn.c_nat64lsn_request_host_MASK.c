
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ipfw_flow_id {int dummy; } ;
struct nat64lsn_job_item {int src6_hval; int proto; int port; int faddr; struct ipfw_flow_id f_id; struct mbuf* m; } ;
struct TYPE_2__ {int stats; } ;
struct nat64lsn_cfg {TYPE_1__ base; } ;
struct mbuf {int dummy; } ;
typedef int in_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 struct nat64lsn_job_item* FUNC_1 (struct nat64lsn_cfg*,int ) ;
 int FUNC_2 (struct nat64lsn_cfg*,struct nat64lsn_job_item*) ;

__attribute__((used)) static int
FUNC_3(struct nat64lsn_cfg *VAR_3,
    const struct ipfw_flow_id *VAR_4, struct mbuf **VAR_5, uint32_t VAR_6,
    in_addr_t VAR_7, uint16_t VAR_8, uint8_t VAR_9)
{
 struct nat64lsn_job_item *VAR_10;

 VAR_10 = FUNC_1(VAR_3, VAR_1);
 if (VAR_10 != ((void*)0)) {
  VAR_10->m = *VAR_5;
  VAR_10->f_id = *VAR_4;
  VAR_10->faddr = VAR_7;
  VAR_10->port = VAR_8;
  VAR_10->proto = VAR_9;
  VAR_10->src6_hval = VAR_6;

  FUNC_2(VAR_3, VAR_10);
  FUNC_0(&VAR_3->base.stats, VAR_2);
  *VAR_5 = ((void*)0);
 }
 return (VAR_0);
}

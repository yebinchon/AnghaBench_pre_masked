
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ipfw_flow_id {int dummy; } ;
struct nat64lsn_job_item {struct nat64lsn_host* host; int state_hval; int proto; int port; int faddr; struct ipfw_flow_id f_id; struct mbuf* m; } ;
struct nat64lsn_host {int dummy; } ;
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
FUNC_3(struct nat64lsn_cfg *VAR_3, struct nat64lsn_host *VAR_4,
    const struct ipfw_flow_id *VAR_5, struct mbuf **VAR_6, uint32_t VAR_7,
    in_addr_t VAR_8, uint16_t VAR_9, uint8_t VAR_10)
{
 struct nat64lsn_job_item *VAR_11;

 VAR_11 = FUNC_1(VAR_3, VAR_1);
 if (VAR_11 != ((void*)0)) {
  VAR_11->m = *VAR_6;
  VAR_11->f_id = *VAR_5;
  VAR_11->faddr = VAR_8;
  VAR_11->port = VAR_9;
  VAR_11->proto = VAR_10;
  VAR_11->state_hval = VAR_7;
  VAR_11->host = VAR_4;

  FUNC_2(VAR_3, VAR_11);
  FUNC_0(&VAR_3->base.stats, VAR_2);
  *VAR_6 = ((void*)0);
 }
 return (VAR_0);
}

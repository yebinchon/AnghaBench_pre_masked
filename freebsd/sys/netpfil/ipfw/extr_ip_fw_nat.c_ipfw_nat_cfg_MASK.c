
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {size_t sopt_valsize; } ;
struct nat44_cfg_redir {int spool_cnt; int proto; int rport_cnt; int pport_cnt; int rport; int pport; int lport; int raddr; int paddr; int laddr; int mode; } ;
struct nat44_cfg_nat {int redir_cnt; int mode; int ip; int if_name; int name; } ;
struct cfg_redir_legacy {int spool_cnt; int proto; int rport_cnt; int pport_cnt; int rport; int pport; int lport; int raddr; int paddr; int laddr; int mode; } ;
struct cfg_nat_legacy {scalar_t__ id; int redir_cnt; int mode; int ip; int if_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (size_t,int ,int) ;
 int FUNC_2 (int *,struct nat44_cfg_nat*) ;
 size_t FUNC_3 (size_t,int) ;
 int FUNC_4 (int ,int,char*,scalar_t__) ;
 int FUNC_5 (struct sockopt*,char*,size_t,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct sockopt *VAR_5)
{
 struct cfg_nat_legacy *VAR_6;
 struct nat44_cfg_nat *VAR_7;
 struct cfg_redir_legacy *VAR_8;
 struct nat44_cfg_redir *VAR_9;
 char *VAR_10;
 size_t VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = VAR_5->sopt_valsize;
 VAR_12 = VAR_11 + 128;






 VAR_10 = FUNC_1(FUNC_3(VAR_11, 8) + VAR_12, VAR_1, VAR_2 | VAR_3);
 VAR_13 = FUNC_5(VAR_5, VAR_10, VAR_11, sizeof(struct cfg_nat_legacy));
 if (VAR_13 != 0)
  goto out;

 VAR_6 = (struct cfg_nat_legacy *)VAR_10;
 if (VAR_6->id < 0) {
  VAR_13 = VAR_0;
  goto out;
 }

 VAR_7 = (struct nat44_cfg_nat *)&VAR_10[FUNC_3(VAR_11, 8)];
 FUNC_4(VAR_7->name, sizeof(VAR_7->name), "%d", VAR_6->id);
 FUNC_6(VAR_7->if_name, VAR_6->if_name, sizeof(VAR_7->if_name));
 VAR_7->ip = VAR_6->ip;
 VAR_7->mode = VAR_6->mode;
 VAR_7->redir_cnt = VAR_6->redir_cnt;

 if (VAR_11 < sizeof(*VAR_6) + VAR_6->redir_cnt * sizeof(*VAR_8)) {
  VAR_13 = VAR_0;
  goto out;
 }

 VAR_9 = (struct nat44_cfg_redir *)(VAR_7 + 1);
 VAR_8 = (struct cfg_redir_legacy *)(VAR_6 + 1);
 for (VAR_14 = 0; VAR_14 < VAR_6->redir_cnt; VAR_14++) {
  VAR_9->mode = VAR_8->mode;
  VAR_9->laddr = VAR_8->laddr;
  VAR_9->paddr = VAR_8->paddr;
  VAR_9->raddr = VAR_8->raddr;
  VAR_9->lport = VAR_8->lport;
  VAR_9->pport = VAR_8->pport;
  VAR_9->rport = VAR_8->rport;
  VAR_9->pport_cnt = VAR_8->pport_cnt;
  VAR_9->rport_cnt = VAR_8->rport_cnt;
  VAR_9->proto = VAR_8->proto;
  VAR_9->spool_cnt = VAR_8->spool_cnt;

  VAR_9++;
  VAR_8++;
 }

 FUNC_2(&VAR_4, VAR_7);

out:
 FUNC_0(VAR_10, VAR_1);
 return (VAR_13);
}

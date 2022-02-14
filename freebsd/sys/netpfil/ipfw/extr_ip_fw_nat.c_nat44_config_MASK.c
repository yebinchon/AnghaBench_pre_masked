
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat44_cfg_nat {int name; int if_name; int mode; int redir_cnt; int ip; } ;
struct ip_fw_chain {int gencnt; int nat; } ;
struct cfg_nat {int redir_chain; int ip; int lib; int mode; int if_name; int redir_cnt; int id; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct cfg_nat*,int ) ;
 int FUNC_6 (struct cfg_nat*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (char*,struct cfg_nat*) ;
 int FUNC_11 (struct cfg_nat*,int *) ;
 int FUNC_12 (struct ip_fw_chain*,int ) ;
 int FUNC_13 (struct cfg_nat*) ;
 struct cfg_nat* FUNC_14 (int *,int ) ;
 struct cfg_nat* FUNC_15 (int,int ,int) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_18(struct ip_fw_chain *VAR_4, struct nat44_cfg_nat *VAR_5)
{
 struct cfg_nat *VAR_6, *VAR_7;
 int VAR_8;




 FUNC_0(VAR_4);
 VAR_8 = VAR_4->gencnt;
 VAR_6 = FUNC_14(&VAR_4->nat, VAR_5->name);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_4);

  VAR_6 = FUNC_15(sizeof(struct cfg_nat), VAR_0, VAR_1 | VAR_2);
  VAR_6->lib = FUNC_7(((void*)0));
  FUNC_4(&VAR_6->redir_chain);
 } else {

  FUNC_2(VAR_4);
  FUNC_6(VAR_6, VAR_3);
  FUNC_12(VAR_4, VAR_6->id);
  FUNC_3(VAR_4);
  FUNC_1(VAR_4);
 }




 VAR_6->id = FUNC_17(VAR_5->name, ((void*)0), 10);





 VAR_6->ip = VAR_5->ip;
 VAR_6->redir_cnt = VAR_5->redir_cnt;
 VAR_6->mode = VAR_5->mode;
 FUNC_16(VAR_6->if_name, VAR_5->if_name, sizeof(VAR_6->if_name));
 FUNC_9(VAR_6->lib, VAR_6->mode, ~0);
 FUNC_8(VAR_6->lib, VAR_6->ip);





 FUNC_11(VAR_6, &VAR_6->redir_chain);

 FUNC_10((char *)(VAR_5 + 1), VAR_6);
 FUNC_0(VAR_4);


 VAR_7 = ((void*)0);
 if (VAR_8 != VAR_4->gencnt)
     VAR_7 = FUNC_14(&VAR_4->nat, VAR_5->name);
 FUNC_2(VAR_4);
 if (VAR_7 != ((void*)0))
  FUNC_6(VAR_7, VAR_3);
 FUNC_5(&VAR_4->nat, VAR_6, VAR_3);
 FUNC_3(VAR_4);
 VAR_4->gencnt++;

 FUNC_1(VAR_4);

 if (VAR_7 != ((void*)0))
  FUNC_13(VAR_6);
}

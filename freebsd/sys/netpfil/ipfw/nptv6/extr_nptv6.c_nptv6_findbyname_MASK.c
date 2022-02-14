
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int type; int uidx; } ;
struct named_object {int dummy; } ;
struct ip_fw_chain {int dummy; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int) ;
 int FUNC_2 (int ,struct tid_info*,int ,struct named_object**) ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_1, struct tid_info *VAR_2,
    struct named_object **VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(FUNC_0(VAR_1), VAR_2,
     VAR_0, VAR_3);
 FUNC_1("uidx %u, type %u, err %d", VAR_2->uidx, VAR_2->type, VAR_4);
 return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tentry_info {int dummy; } ;
struct ta_buf_chash {int ent; } ;
struct ip_fw_chain {int dummy; } ;


 int FUNC_0 (struct tentry_info*,int *) ;

__attribute__((used)) static int
FUNC_1(struct ip_fw_chain *VAR_0, struct tentry_info *VAR_1,
    void *VAR_2)
{
 struct ta_buf_chash *VAR_3;

 VAR_3 = (struct ta_buf_chash *)VAR_2;

 return (FUNC_0(VAR_1, &VAR_3->ent));
}

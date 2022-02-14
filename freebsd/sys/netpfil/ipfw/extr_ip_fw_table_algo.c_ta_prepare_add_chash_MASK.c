
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tentry_info {int dummy; } ;
struct ta_buf_chash {struct chashentry* ent_ptr; } ;
struct ip_fw_chain {int dummy; } ;
struct chashentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct chashentry*,int ) ;
 struct chashentry* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct tentry_info*,struct chashentry*) ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_3, struct tentry_info *VAR_4,
    void *VAR_5)
{
 struct ta_buf_chash *VAR_6;
 struct chashentry *VAR_7;
 int VAR_8;

 VAR_6 = (struct ta_buf_chash *)VAR_5;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0, VAR_1 | VAR_2);

 VAR_8 = FUNC_2(VAR_4, VAR_7);
 if (VAR_8 != 0) {
  FUNC_0(VAR_7, VAR_0);
  return (VAR_8);
 }
 VAR_6->ent_ptr = VAR_7;

 return (0);
}

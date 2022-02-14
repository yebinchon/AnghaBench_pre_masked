
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tentry_info {int dummy; } ;
struct ta_buf_fhash {int * ent_ptr; } ;
struct ip_fw_chain {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct ip_fw_chain *VAR_1, struct tentry_info *VAR_2,
    void *VAR_3)
{
 struct ta_buf_fhash *VAR_4;

 VAR_4 = (struct ta_buf_fhash *)VAR_3;

 if (VAR_4->ent_ptr != ((void*)0))
  FUNC_0(VAR_4->ent_ptr, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tentry_info {scalar_t__ paddr; } ;
struct ta_buf_ifidx {int dummy; } ;
struct ip_fw_chain {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct ip_fw_chain *VAR_2, struct tentry_info *VAR_3,
    void *VAR_4)
{
 struct ta_buf_ifidx *VAR_5;
 char *VAR_6;

 VAR_5 = (struct ta_buf_ifidx *)VAR_4;


 VAR_6 = (char *)VAR_3->paddr;
 if (FUNC_0(VAR_6, VAR_1) == VAR_1)
  return (VAR_0);

 return (0);
}

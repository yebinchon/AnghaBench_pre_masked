
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct table_info {int (* lookup ) (struct table_info*,void*,int ,int *) ;} ;
struct ip_fw_chain {int dummy; } ;


 struct table_info* FUNC_0 (struct ip_fw_chain*,int ) ;
 int FUNC_1 (struct table_info*,void*,int ,int *) ;

int
FUNC_2(struct ip_fw_chain *VAR_0, uint16_t VAR_1, uint16_t VAR_2,
    void *VAR_3, uint32_t *VAR_4)
{
 struct table_info *VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1);

 return (VAR_5->lookup(VAR_5, VAR_3, VAR_2, VAR_4));
}

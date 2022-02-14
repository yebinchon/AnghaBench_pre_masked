
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tentry_info {scalar_t__ paddr; } ;
struct TYPE_2__ {int number; } ;
struct ta_buf_numarray {TYPE_1__ na; } ;
struct ip_fw_chain {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct ip_fw_chain *VAR_0, struct tentry_info *VAR_1,
    void *VAR_2)
{
 struct ta_buf_numarray *VAR_3;

 VAR_3 = (struct ta_buf_numarray *)VAR_2;

 VAR_3->na.number = *((uint32_t *)VAR_1->paddr);

 return (0);
}

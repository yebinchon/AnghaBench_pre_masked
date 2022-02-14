
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct named_object {scalar_t__ etlv; } ;
struct ip_fw_chain {int dummy; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 struct named_object* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ip_fw_chain*,int ,int ,int ) ;

int
FUNC_4(struct ip_fw_chain *VAR_2, uint16_t VAR_3,
    uint16_t VAR_4)
{
 struct named_object *VAR_5;

 FUNC_1(VAR_2);
 VAR_5 = FUNC_2(FUNC_0(VAR_2), VAR_3);
 if (VAR_5 == ((void*)0) || VAR_5->etlv != VAR_1)
  return (VAR_0);

 FUNC_3(VAR_2, VAR_3, VAR_4, 0);
 return (0);
}

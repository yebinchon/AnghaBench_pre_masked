
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct linux_pcic {scalar_t__ pcic_config_space_data; scalar_t__ pcic_config_space_addr; } ;


 int FUNC_0 (unsigned int,unsigned int,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct linux_pcic VAR_0 ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1, unsigned int VAR_2,
    int VAR_3, u32 VAR_4)
{
 struct linux_pcic *VAR_5;
 unsigned long VAR_6;

 VAR_5 = &VAR_0;

 FUNC_2(VAR_6);
 FUNC_3(FUNC_0(VAR_1, VAR_2, VAR_3), VAR_5->pcic_config_space_addr);
 FUNC_3(VAR_4, VAR_5->pcic_config_space_data + (VAR_3&4));
 FUNC_1(VAR_6);
 return 0;
}

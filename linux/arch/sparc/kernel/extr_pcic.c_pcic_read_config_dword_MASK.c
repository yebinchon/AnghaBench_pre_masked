
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct linux_pcic {scalar_t__ pcic_config_space_data; int pcic_config_space_addr; } ;


 int FUNC_0 (unsigned int,unsigned int,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 struct linux_pcic VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_3, unsigned int VAR_4,
    int VAR_5, u32 *VAR_6)
{
 struct linux_pcic *VAR_7;
 unsigned long VAR_8;

 VAR_7 = &VAR_0;

 FUNC_2(VAR_8);




 FUNC_5(FUNC_0(VAR_3, VAR_4, VAR_5), VAR_7->pcic_config_space_addr);
 VAR_1 = 2;
 VAR_2 = 0;
 *VAR_6 = FUNC_4(VAR_7->pcic_config_space_data + (VAR_5&4));
 FUNC_3();
 if (VAR_2) {
  VAR_1 = 0;
  FUNC_1(VAR_8);
  *VAR_6 = ~0;
  return 0;
 }
 VAR_1 = 0;
 FUNC_1(VAR_8);
 return 0;
}

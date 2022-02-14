
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ipfw_sopt_handler {int * handler; int version; int opcode; } ;
typedef int sopt_handler_f ;
typedef int h ;


 scalar_t__ FUNC_0 (struct ipfw_sopt_handler*,int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ipfw_sopt_handler*,int ,int) ;

__attribute__((used)) static struct ipfw_sopt_handler *
FUNC_2(uint16_t VAR_3, uint8_t VAR_4, sopt_handler_f *VAR_5)
{
 struct ipfw_sopt_handler *VAR_6, VAR_7;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.opcode = VAR_3;
 VAR_7.version = VAR_4;
 VAR_7.handler = VAR_5;

 VAR_6 = (struct ipfw_sopt_handler *)FUNC_0(&VAR_7, VAR_1,
     VAR_2, sizeof(VAR_7), VAR_0);

 return (VAR_6);
}

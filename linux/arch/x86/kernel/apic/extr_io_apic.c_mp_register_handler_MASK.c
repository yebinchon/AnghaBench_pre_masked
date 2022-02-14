
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irq_flow_handler_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_3, unsigned long VAR_4)
{
 irq_flow_handler_t VAR_5;
 bool VAR_6;

 if (VAR_4) {
  FUNC_2(VAR_3, VAR_0);
  VAR_6 = 1;
 } else {
  FUNC_1(VAR_3, VAR_0);
  VAR_6 = 0;
 }

 VAR_5 = VAR_6 ? VAR_2 : VAR_1;
 FUNC_0(VAR_3, VAR_5, 0, VAR_6 ? "fasteoi" : "edge");
}

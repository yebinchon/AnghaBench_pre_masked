
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct pcips2_data* port_data; } ;
struct pcips2_data {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct serio *VAR_3, unsigned char VAR_4)
{
 struct pcips2_data *VAR_5 = VAR_3->port_data;
 unsigned int VAR_6;

 do {
  VAR_6 = FUNC_1(VAR_5->base + VAR_1);
  FUNC_0();
 } while (!(VAR_6 & VAR_2));

 FUNC_2(VAR_4, VAR_5->base + VAR_0);

 return 0;
}

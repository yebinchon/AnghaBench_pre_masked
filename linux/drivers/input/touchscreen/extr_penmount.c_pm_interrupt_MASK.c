
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct pm {unsigned char* data; size_t idx; int (* parse_packet ) (struct pm*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct pm* FUNC_0 (struct serio*) ;
 int FUNC_1 (struct pm*) ;

__attribute__((used)) static irqreturn_t FUNC_2(struct serio *VAR_1,
  unsigned char VAR_2, unsigned int VAR_3)
{
 struct pm *VAR_4 = FUNC_0(VAR_1);

 VAR_4->data[VAR_4->idx] = VAR_2;

 VAR_4->parse_packet(VAR_4);

 return VAR_0;
}

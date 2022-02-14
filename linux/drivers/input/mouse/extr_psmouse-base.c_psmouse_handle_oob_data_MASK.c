
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct psmouse {int oob_data_type; void* extra_buttons; int dev; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (struct psmouse*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_0, u8 VAR_1)
{
 switch (VAR_0->oob_data_type) {
 case 128:
  VAR_0->oob_data_type = VAR_1;
  break;

 case 129:
  FUNC_1(VAR_0->dev, VAR_1);
  FUNC_0(VAR_0->dev);

  VAR_0->extra_buttons = VAR_1;
  VAR_0->oob_data_type = 128;
  break;

 default:
  FUNC_2(VAR_0,
        "unknown OOB_DATA type: 0x%02x\n",
        VAR_0->oob_data_type);
  VAR_0->oob_data_type = 128;
  break;
 }
}

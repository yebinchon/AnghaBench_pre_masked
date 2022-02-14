
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_vv {unsigned int resources; } ;
struct saa7146_fh {unsigned int resources; struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;

int FUNC_1(struct saa7146_fh *VAR_0, unsigned int VAR_1)
{
 struct saa7146_dev *VAR_2 = VAR_0->dev;
 struct saa7146_vv *VAR_3 = VAR_2->vv_data;

 if (VAR_0->resources & VAR_1) {
  FUNC_0("already allocated! want: 0x%02x, cur:0x%02x\n",
        VAR_1, VAR_3->resources);

  return 1;
 }


 if (VAR_3->resources & VAR_1) {
  FUNC_0("locked! vv->resources:0x%02x, we want:0x%02x\n",
        VAR_3->resources, VAR_1);

  return 0;
 }

 VAR_0->resources |= VAR_1;
 VAR_3->resources |= VAR_1;
 FUNC_0("res: get 0x%02x, cur:0x%02x\n", VAR_1, VAR_3->resources);
 return 1;
}

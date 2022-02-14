
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct regmap_ibt_context {struct hci_dev* hdev; void* op_write; void* op_read; } ;
struct regmap {int dummy; } ;
struct hci_dev {int dev; } ;


 int VAR_0 ;
 struct regmap* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct hci_dev*,char*,void*,void*) ;
 struct regmap_ibt_context* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct regmap* FUNC_3 (int *,int *,struct regmap_ibt_context*,int *) ;

struct regmap *FUNC_4(struct hci_dev *VAR_4, u16 VAR_5,
       u16 VAR_6)
{
 struct regmap_ibt_context *VAR_7;

 FUNC_1(VAR_4, "regmap: Init R%x-W%x region", VAR_5,
      VAR_6);

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->op_read = VAR_5;
 VAR_7->op_write = VAR_6;
 VAR_7->hdev = VAR_4;

 return FUNC_3(&VAR_4->dev, &VAR_2, VAR_7, &VAR_3);
}

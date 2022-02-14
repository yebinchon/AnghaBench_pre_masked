
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iadc_chip {scalar_t__ gain; scalar_t__* offset; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct iadc_chip*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct iadc_chip *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_3, &VAR_6->gain);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_4,
     &VAR_6->offset[VAR_5]);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6->gain == VAR_6->offset[VAR_5]) {
  FUNC_0(VAR_6->dev, "error: internal offset == gain %d\n",
   VAR_6->gain);
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_6, VAR_1,
     &VAR_6->offset[VAR_2]);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6->gain == VAR_6->offset[VAR_2]) {
  FUNC_0(VAR_6->dev, "error: external offset == gain %d\n",
   VAR_6->gain);
  return -VAR_0;
 }

 return 0;
}

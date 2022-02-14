
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {scalar_t__ module_pa; scalar_t__* offsets; int dev; } ;
struct resource {scalar_t__ start; } ;
typedef enum sysc_registers { ____Placeholder_sysc_registers } sysc_registers ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;



 struct resource* FUNC_0 (int ,int ,char const*) ;
 char** VAR_3 ;
 int FUNC_1 (struct sysc*,struct resource*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sysc *VAR_4, enum sysc_registers VAR_5)
{
 struct resource *VAR_6;
 const char *VAR_7;

 switch (VAR_5) {
 case 130:
 case 129:
 case 128:
  VAR_7 = VAR_3[VAR_5];
  break;
 default:
  return -VAR_0;
 }

 VAR_6 = FUNC_0(FUNC_2(VAR_4->dev),
        VAR_2, VAR_7);
 if (!VAR_6) {
  VAR_4->offsets[VAR_5] = -VAR_1;

  return 0;
 }

 VAR_4->offsets[VAR_5] = VAR_6->start - VAR_4->module_pa;
 if (VAR_5 == 130)
  FUNC_1(VAR_4, VAR_6);

 return 0;
}

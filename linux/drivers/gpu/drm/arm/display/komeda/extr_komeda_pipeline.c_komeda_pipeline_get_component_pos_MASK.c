
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_pipeline {int ctrlr; int improc; int merger; int splitter; int * scalers; int compiz; int wb_layer; int * layers; struct komeda_dev* mdev; } ;
struct komeda_dev {struct komeda_pipeline** pipelines; } ;
struct komeda_component {int dummy; } ;


 int FUNC_0 (char*,int) ;
 struct komeda_component** FUNC_1 (int ) ;

__attribute__((used)) static struct komeda_component **
FUNC_2(struct komeda_pipeline *VAR_0, int VAR_1)
{
 struct komeda_dev *VAR_2 = VAR_0->mdev;
 struct komeda_pipeline *VAR_3 = ((void*)0);
 struct komeda_component **VAR_4 = ((void*)0);

 switch (VAR_1) {
 case 137:
 case 136:
 case 135:
 case 134:
  VAR_4 = FUNC_1(VAR_0->layers[VAR_1 - 137]);
  break;
 case 128:
  VAR_4 = FUNC_1(VAR_0->wb_layer);
  break;
 case 141:
 case 140:
  VAR_3 = VAR_2->pipelines[VAR_1 - 141];
  if (!VAR_3) {
   FUNC_0("compiz-%d doesn't exist.\n", VAR_1);
   return ((void*)0);
  }
  VAR_4 = FUNC_1(VAR_3->compiz);
  break;
 case 132:
 case 131:
  VAR_4 = FUNC_1(VAR_0->scalers[VAR_1 - 132]);
  break;
 case 130:
  VAR_4 = FUNC_1(VAR_0->splitter);
  break;
 case 133:
  VAR_4 = FUNC_1(VAR_0->merger);
  break;
 case 139:
 case 138:
  VAR_3 = VAR_2->pipelines[VAR_1 - 139];
  if (!VAR_3) {
   FUNC_0("ips-%d doesn't exist.\n", VAR_1);
   return ((void*)0);
  }
  VAR_4 = FUNC_1(VAR_3->improc);
  break;
 case 129:
  VAR_4 = FUNC_1(VAR_0->ctrlr);
  break;
 default:
  VAR_4 = ((void*)0);
  FUNC_0("Unknown pipeline resource ID: %d.\n", VAR_1);
  break;
 }

 return VAR_4;
}

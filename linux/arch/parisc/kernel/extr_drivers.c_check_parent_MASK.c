
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_tree_data {struct device* dev; int modpath; int index; } ;
struct device {int * bus; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*,int ,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ,int ) ;
 int VAR_0 ;
 struct device* FUNC_4 (struct device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct device * VAR_1, void * VAR_2)
{
 struct parse_tree_data * VAR_3 = VAR_2;

 if (FUNC_0(VAR_1)) {
  if (VAR_1->bus == &VAR_0) {
   if (FUNC_2(VAR_1, VAR_3->index, VAR_3->modpath))
    VAR_3->dev = VAR_1;
  } else if (FUNC_1(VAR_1)) {
   if (FUNC_3(VAR_1, VAR_3->index, VAR_3->modpath))
    VAR_3->dev = VAR_1;
  } else if (VAR_1->bus == ((void*)0)) {

   struct device *VAR_4 = FUNC_4(VAR_1, VAR_3->index, VAR_3->modpath);
   if (VAR_4)
    VAR_3->dev = VAR_4;
  }
 }
 return VAR_3->dev != ((void*)0);
}

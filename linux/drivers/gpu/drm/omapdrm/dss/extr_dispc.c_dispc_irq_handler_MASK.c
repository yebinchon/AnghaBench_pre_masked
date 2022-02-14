
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int user_data; int (* user_handler ) (int,int ) ;int is_enabled; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct dispc_device *VAR_3 = VAR_2;

 if (!VAR_3->is_enabled)
  return VAR_0;

 return VAR_3->user_handler(VAR_1, VAR_3->user_data);
}

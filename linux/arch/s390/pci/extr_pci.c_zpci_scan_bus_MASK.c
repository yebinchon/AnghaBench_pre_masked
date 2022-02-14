
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zpci_dev {TYPE_1__* bus; int max_bus_speed; } ;
struct TYPE_3__ {int max_bus_speed; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (int *,int ,int *,struct zpci_dev*,int *) ;
 int VAR_3 ;
 int FUNC_4 (struct zpci_dev*) ;
 int FUNC_5 (struct zpci_dev*,int *) ;

__attribute__((used)) static int FUNC_6(struct zpci_dev *VAR_4)
{
 FUNC_0(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_5(VAR_4, &VAR_3);
 if (VAR_5)
  goto error;

 VAR_4->bus = FUNC_3(((void*)0), VAR_1, &VAR_2,
          VAR_4, &VAR_3);
 if (!VAR_4->bus) {
  VAR_5 = -VAR_0;
  goto error;
 }
 VAR_4->bus->max_bus_speed = VAR_4->max_bus_speed;
 FUNC_1(VAR_4->bus);
 return 0;

error:
 FUNC_4(VAR_4);
 FUNC_2(&VAR_3);
 return VAR_5;
}

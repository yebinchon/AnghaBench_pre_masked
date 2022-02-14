
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int busy_polling; scalar_t__ polling_guard; int timestamp; int work; int lock; int list; int wait; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 struct acpi_ec* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct acpi_ec *FUNC_6(void)
{
 struct acpi_ec *VAR_3 = FUNC_3(sizeof(struct acpi_ec), VAR_0);

 if (!VAR_3)
  return ((void*)0);
 FUNC_4(&VAR_3->mutex);
 FUNC_2(&VAR_3->wait);
 FUNC_0(&VAR_3->list);
 FUNC_5(&VAR_3->lock);
 FUNC_1(&VAR_3->work, VAR_1);
 VAR_3->timestamp = VAR_2;
 VAR_3->busy_polling = 1;
 VAR_3->polling_guard = 0;
 return VAR_3;
}

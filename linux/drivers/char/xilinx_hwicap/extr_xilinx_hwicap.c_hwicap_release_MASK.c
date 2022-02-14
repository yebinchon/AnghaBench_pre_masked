
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode {int dummy; } ;
struct hwicap_drvdata {int write_buffer_in_use; int sem; scalar_t__ is_open; scalar_t__* write_buffer; TYPE_1__* config; } ;
struct file {struct hwicap_drvdata* private_data; } ;
struct TYPE_2__ {int (* set_configuration ) (struct hwicap_drvdata*,int *,int) ;} ;


 int FUNC_0 (struct hwicap_drvdata*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hwicap_drvdata*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct hwicap_drvdata *VAR_2 = VAR_1->private_data;
 int VAR_3;
 int VAR_4 = 0;

 FUNC_1(&VAR_2->sem);

 if (VAR_2->write_buffer_in_use) {

  for (VAR_3 = VAR_2->write_buffer_in_use; VAR_3 < 4; VAR_3++)
   VAR_2->write_buffer[VAR_3] = 0;

  VAR_4 = VAR_2->config->set_configuration(VAR_2,
    (u32 *) VAR_2->write_buffer, 1);
  if (VAR_4)
   goto error;
 }

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  goto error;

 error:
 VAR_2->is_open = 0;
 FUNC_2(&VAR_2->sem);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct occ_client {int lock; struct occ* occ; int * buffer; } ;
struct occ {int dummy; } ;
struct miscdevice {int lock; struct occ* occ; int * buffer; } ;
struct inode {int dummy; } ;
struct file {struct occ_client* private_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct occ_client*) ;
 struct occ_client* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 struct occ* FUNC_5 (struct occ_client*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_5, struct file *VAR_6)
{
 struct occ_client *VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 struct miscdevice *VAR_8 = VAR_6->private_data;
 struct occ *VAR_9 = FUNC_5(VAR_8);

 if (!VAR_7)
  return -VAR_0;

 VAR_7->buffer = (u8 *)FUNC_1(VAR_1);
 if (!VAR_7->buffer) {
  FUNC_2(VAR_7);
  return -VAR_0;
 }

 VAR_7->occ = VAR_9;
 FUNC_4(&VAR_7->lock);
 VAR_6->private_data = VAR_7;


 FUNC_0((VAR_2 + 3) > VAR_4);
 FUNC_0((VAR_3 + 7) > VAR_4);

 return 0;
}

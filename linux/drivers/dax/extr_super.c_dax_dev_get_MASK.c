
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; int i_data; int i_flags; int i_mode; int * i_cdev; } ;
struct dax_device {int cdev; int flags; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__,int) ;
 struct inode* FUNC_1 (int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 struct dax_device* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static struct dax_device *FUNC_6(dev_t VAR_9)
{
 struct dax_device *VAR_10;
 struct inode *VAR_11;

 VAR_11 = FUNC_1(VAR_7, FUNC_0(VAR_9 + VAR_1, 31),
   VAR_8, VAR_6, &VAR_9);

 if (!VAR_11)
  return ((void*)0);

 VAR_10 = FUNC_4(VAR_11);
 if (VAR_11->i_state & VAR_3) {
  FUNC_3(VAR_0, &VAR_10->flags);
  VAR_11->i_cdev = &VAR_10->cdev;
  VAR_11->i_mode = VAR_5;
  VAR_11->i_flags = VAR_4;
  FUNC_2(&VAR_11->i_data, VAR_2);
  FUNC_5(VAR_11);
 }

 return VAR_10;
}

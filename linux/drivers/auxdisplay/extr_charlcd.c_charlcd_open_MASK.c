
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; } ;
struct charlcd_priv {int must_clear; int lcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 struct charlcd_priv* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct file*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_5, struct file *VAR_6)
{
 struct charlcd_priv *VAR_7 = FUNC_3(VAR_4);
 int VAR_8;

 VAR_8 = -VAR_0;
 if (!FUNC_0(&VAR_3))
  goto fail;

 VAR_8 = -VAR_1;
 if (VAR_6->f_mode & VAR_2)
  goto fail;

 if (VAR_7->must_clear) {
  FUNC_2(&VAR_7->lcd);
  VAR_7->must_clear = 0;
 }
 return FUNC_4(VAR_5, VAR_6);

 fail:
 FUNC_1(&VAR_3);
 return VAR_8;
}

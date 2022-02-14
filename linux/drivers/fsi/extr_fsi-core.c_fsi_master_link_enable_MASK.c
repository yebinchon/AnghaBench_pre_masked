
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master {int (* link_enable ) (struct fsi_master*,int) ;} ;


 int FUNC_0 (struct fsi_master*,int) ;

__attribute__((used)) static int FUNC_1(struct fsi_master *VAR_0, int VAR_1)
{
 if (VAR_0->link_enable)
  return VAR_0->link_enable(VAR_0, VAR_1);

 return 0;
}

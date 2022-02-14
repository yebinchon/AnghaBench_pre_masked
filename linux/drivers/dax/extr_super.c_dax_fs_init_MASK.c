
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct dax_device {int dummy; } ;
struct TYPE_5__ {int mnt_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int ,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_10;

 VAR_5 = FUNC_3("dax_cache", sizeof(struct dax_device), 0,
   (VAR_2|VAR_4|
    VAR_3|VAR_1),
   VAR_9);
 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_2(&VAR_6);
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_1(VAR_7);
  goto err_mount;
 }
 VAR_8 = VAR_7->mnt_sb;

 return 0;

 err_mount:
 FUNC_4(VAR_5);

 return VAR_10;
}

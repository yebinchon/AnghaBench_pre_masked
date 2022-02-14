
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_user_lr_setup {int WLE; int RLE; } ;
struct opal_dev {int dummy; } ;


 int FUNC_0 (struct opal_dev*,int *,int,int,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline int FUNC_2(struct opal_dev *VAR_0, u8 *VAR_1,
       struct opal_user_lr_setup *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, !!VAR_2->RLE, !!VAR_2->WLE,
     0, 0);
 if (VAR_3)
  FUNC_1("Failed to create enable global lr command\n");

 return VAR_3;
}

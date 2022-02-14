
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {scalar_t__ class; int tdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (struct ata_device*) ;
 scalar_t__ FUNC_2 (struct ata_device*) ;

__attribute__((used)) static int FUNC_3(struct ata_device *VAR_3, bool VAR_4)
{
 int VAR_5 = VAR_0;
 if (!VAR_4)
  goto out;





 if (VAR_3->class == VAR_2 &&
     !(FUNC_1(VAR_3) && FUNC_2(VAR_3)))
  VAR_5 = VAR_1;

out:
 return FUNC_0(&VAR_3->tdev, ((void*)0), VAR_5);
}

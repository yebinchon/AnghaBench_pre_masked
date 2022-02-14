
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_device {int index; int refs; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nbd_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct nbd_device *VAR_2)
{
 if (FUNC_3(&VAR_2->refs,
     &VAR_1)) {
  FUNC_0(&VAR_0, VAR_2->index);
  FUNC_2(VAR_2);
  FUNC_1(&VAR_1);
 }
}

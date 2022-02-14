
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {scalar_t__ refcnt; int flags; } ;
struct gendisk {struct pktcdvd_device* private_data; } ;
typedef int fmode_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pktcdvd_device*,int) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct gendisk *VAR_3, fmode_t VAR_4)
{
 struct pktcdvd_device *VAR_5 = VAR_3->private_data;

 FUNC_1(&VAR_2);
 FUNC_1(&VAR_1);
 VAR_5->refcnt--;
 FUNC_0(VAR_5->refcnt < 0);
 if (VAR_5->refcnt == 0) {
  int VAR_6 = FUNC_4(VAR_0, &VAR_5->flags);
  FUNC_3(VAR_5, VAR_6);
 }
 FUNC_2(&VAR_1);
 FUNC_2(&VAR_2);
}

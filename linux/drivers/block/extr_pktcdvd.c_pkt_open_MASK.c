
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {int refcnt; int flags; } ;
struct block_device {int bd_dev; } ;
typedef int fmode_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct pktcdvd_device* FUNC_4 (int ) ;
 int FUNC_5 (struct pktcdvd_device*,int) ;
 int VAR_6 ;
 int FUNC_6 (struct block_device*,int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct block_device *VAR_7, fmode_t VAR_8)
{
 struct pktcdvd_device *VAR_9 = ((void*)0);
 int VAR_10;

 FUNC_2(&VAR_6);
 FUNC_2(&VAR_5);
 VAR_9 = FUNC_4(FUNC_1(VAR_7->bd_dev));
 if (!VAR_9) {
  VAR_10 = -VAR_2;
  goto out;
 }
 FUNC_0(VAR_9->refcnt < 0);

 VAR_9->refcnt++;
 if (VAR_9->refcnt > 1) {
  if ((VAR_8 & VAR_3) &&
      !FUNC_7(VAR_4, &VAR_9->flags)) {
   VAR_10 = -VAR_1;
   goto out_dec;
  }
 } else {
  VAR_10 = FUNC_5(VAR_9, VAR_8 & VAR_3);
  if (VAR_10)
   goto out_dec;




  FUNC_6(VAR_7, VAR_0);
 }

 FUNC_3(&VAR_5);
 FUNC_3(&VAR_6);
 return 0;

out_dec:
 VAR_9->refcnt--;
out:
 FUNC_3(&VAR_5);
 FUNC_3(&VAR_6);
 return VAR_10;
}

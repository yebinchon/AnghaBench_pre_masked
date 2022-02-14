
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,struct pktcdvd_device*,char*) ;
 scalar_t__ FUNC_2 (struct pktcdvd_device*) ;
 int FUNC_3 (struct pktcdvd_device*,int ) ;
 int FUNC_4 (struct pktcdvd_device*,int ,int ) ;
 int FUNC_5 (struct pktcdvd_device*) ;

__attribute__((used)) static void FUNC_6(struct pktcdvd_device *VAR_3, int VAR_4)
{
 if (VAR_4 && FUNC_2(VAR_3))
  FUNC_1(1, VAR_3, "not flushing cache\n");

 FUNC_3(VAR_3, 0);

 FUNC_4(VAR_3, VAR_2, VAR_2);
 FUNC_0(VAR_3->bdev, VAR_1 | VAR_0);

 FUNC_5(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alps_data {int flags; int dev_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(unsigned char VAR_1[][4],
           struct alps_data *VAR_2)
{
 unsigned char VAR_3;

 if (FUNC_0(VAR_2->dev_id))
  VAR_3 = (VAR_1[1][0] >> 1) & 0x01;
 else
  VAR_3 = (VAR_1[1][1] >> 3) & 0x01;

 if (VAR_3)
  VAR_2->flags |= VAR_0;

 return 0;
}

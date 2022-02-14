
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {int flags; scalar_t__ unit; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ata_channel* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct ata_channel *VAR_3 = FUNC_2(VAR_2);


 VAR_3->unit = 0;
 VAR_3->flags = (VAR_1|VAR_0);
 FUNC_0(VAR_2);

 return FUNC_1(VAR_2);
}

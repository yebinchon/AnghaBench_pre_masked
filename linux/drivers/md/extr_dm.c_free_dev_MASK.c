
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int stats; int table_devices; int disk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mapped_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mapped_device*) ;

__attribute__((used)) static void FUNC_9(struct mapped_device *VAR_1)
{
 int VAR_2 = FUNC_0(FUNC_2(VAR_1->disk));

 FUNC_8(VAR_1);

 FUNC_1(VAR_1);

 FUNC_5(&VAR_1->table_devices);
 FUNC_3(&VAR_1->stats);
 FUNC_4(VAR_2);

 FUNC_7(VAR_0);
 FUNC_6(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brd_device {int brd_disk; int brd_list; } ;


 int FUNC_0 (struct brd_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct brd_device *VAR_0)
{
 FUNC_2(&VAR_0->brd_list);
 FUNC_1(VAR_0->brd_disk);
 FUNC_0(VAR_0);
}

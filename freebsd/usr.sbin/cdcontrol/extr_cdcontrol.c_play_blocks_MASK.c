
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc_play_blocks {int blk; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct ioc_play_blocks*) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, int VAR_3)
{
 struct ioc_play_blocks VAR_4;

 VAR_4.blk = VAR_2;
 VAR_4.len = VAR_3;

 return FUNC_0 (VAR_1, VAR_0, &VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dummy; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct videobuf_queue *VAR_1, unsigned int *VAR_2, unsigned int *VAR_3)
{
 int VAR_4,VAR_5;

 VAR_5 = 16 * 2 ;
 VAR_4 = VAR_0;

 *VAR_3 = VAR_5 * VAR_4;
 *VAR_2 = 2;

 FUNC_0("count:%d, size:%d\n", *VAR_2, *VAR_3);

 return 0;
}

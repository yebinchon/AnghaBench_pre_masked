
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_channel {int dar; int count; int mode; scalar_t__ sar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_1(struct dma_channel *VAR_6)
{
 if (VAR_6->sar || !VAR_6->dar)
  return -VAR_1;

 VAR_5 = 0;

 FUNC_0(VAR_6->dar, VAR_2);
 FUNC_0(VAR_6->count, VAR_3);
 FUNC_0(VAR_6->mode & VAR_0, VAR_4);

 return 0;
}

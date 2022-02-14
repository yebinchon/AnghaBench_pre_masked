
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct brd_device {int dummy; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int sector_t ;
struct TYPE_2__ {struct brd_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct brd_device*,struct page*,int ,int ,unsigned int,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct page*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct block_device *VAR_2, sector_t VAR_3,
         struct page *VAR_4, unsigned int VAR_5)
{
 struct brd_device *VAR_6 = VAR_2->bd_disk->private_data;
 int VAR_7;

 if (FUNC_0(VAR_4))
  return -VAR_0;
 VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_1, 0, VAR_5, VAR_3);
 FUNC_3(VAR_4, FUNC_2(VAR_5), VAR_7);
 return VAR_7;
}

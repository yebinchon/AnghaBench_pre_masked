
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {int dummy; } ;
struct gendisk {int dummy; } ;
struct block_device {int dummy; } ;


 struct block_device* FUNC_0 (int ) ;
 struct hd_struct* FUNC_1 (struct gendisk*,int) ;
 int FUNC_2 (struct hd_struct*) ;
 int FUNC_3 (struct hd_struct*) ;

struct block_device *FUNC_4(struct gendisk *VAR_0, int VAR_1)
{
 struct hd_struct *VAR_2;
 struct block_device *VAR_3 = ((void*)0);

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  VAR_3 = FUNC_0(FUNC_3(VAR_2));
 FUNC_2(VAR_2);

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
struct bio {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct bio* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,struct block_device*) ;
 int FUNC_3 (struct bio*,int ,int ) ;
 int FUNC_4 (struct bio*) ;

__attribute__((used)) static int FUNC_5(struct block_device *VAR_1, gfp_t VAR_2)
{
 struct bio *VAR_3 = FUNC_0(VAR_2, 0);
 int VAR_4;


 FUNC_2(VAR_3, VAR_1);
 FUNC_3(VAR_3, VAR_0, 0);

 VAR_4 = FUNC_4(VAR_3);
 FUNC_1(VAR_3);

 return VAR_4;
}

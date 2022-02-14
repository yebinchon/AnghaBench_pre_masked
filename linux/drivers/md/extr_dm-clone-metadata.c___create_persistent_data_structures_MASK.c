
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {int bm; int bdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct dm_clone_metadata*,int) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct dm_clone_metadata *VAR_3,
            bool VAR_4)
{
 int VAR_5;


 VAR_3->bm = FUNC_4(VAR_3->bdev,
      VAR_1 << VAR_2,
      VAR_0);
 if (FUNC_1(VAR_3->bm)) {
  FUNC_0("Failed to create block manager");
  return FUNC_2(VAR_3->bm);
 }

 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (VAR_5)
  FUNC_5(VAR_3->bm);

 return VAR_5;
}

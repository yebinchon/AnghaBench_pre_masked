
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct era_metadata {int bm; int bdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct era_metadata*,int) ;

__attribute__((used)) static int FUNC_6(struct era_metadata *VAR_2,
       bool VAR_3)
{
 int VAR_4;

 VAR_2->bm = FUNC_3(VAR_2->bdev, VAR_0,
      VAR_1);
 if (FUNC_1(VAR_2->bm)) {
  FUNC_0("could not create block manager");
  return FUNC_2(VAR_2->bm);
 }

 VAR_4 = FUNC_5(VAR_2, VAR_3);
 if (VAR_4)
  FUNC_4(VAR_2->bm);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lima_device {int ddev; } ;
struct lima_bo {int gem; int va; int lock; } ;


 int VAR_0 ;
 struct lima_bo* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct lima_bo*) ;
 struct lima_bo* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct lima_bo *FUNC_7(struct lima_device *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct lima_bo *VAR_5;
 int VAR_6;

 VAR_3 = FUNC_2(VAR_3);

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_6(&VAR_5->lock);
 FUNC_1(&VAR_5->va);

 VAR_6 = FUNC_3(VAR_2->ddev, &VAR_5->gem, VAR_3);
 if (VAR_6) {
  FUNC_4(VAR_5);
  return FUNC_0(VAR_6);
 }

 return VAR_5;
}

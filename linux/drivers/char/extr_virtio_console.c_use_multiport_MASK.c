
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ports_device {int vdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct ports_device *VAR_1)
{




 if (!VAR_1->vdev)
  return 0;
 return FUNC_0(VAR_1->vdev, VAR_0);
}

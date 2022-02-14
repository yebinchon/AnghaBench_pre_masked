
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {TYPE_1__* ring; int srbm_mutex; } ;
struct TYPE_2__ {int ready; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct radeon_device*,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_5, bool VAR_6)
{
 if (VAR_6)
  FUNC_0(VAR_2, 0);
 else {




  FUNC_2(&VAR_5->srbm_mutex);
  FUNC_1(VAR_5,&VAR_5->ring[VAR_0]);
  FUNC_1(VAR_5,&VAR_5->ring[VAR_1]);
  FUNC_3(&VAR_5->srbm_mutex);

  FUNC_0(VAR_2, (VAR_3 | VAR_4));
  VAR_5->ring[VAR_0].ready = 0;
  VAR_5->ring[VAR_1].ready = 0;
 }
 FUNC_4(50);
}

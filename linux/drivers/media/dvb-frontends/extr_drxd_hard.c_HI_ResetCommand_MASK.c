
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxd_state {int mutex; } ;


 int FUNC_0 (struct drxd_state*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drxd_state*,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct drxd_state *VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_3->mutex);
 VAR_4 = FUNC_1(VAR_3, VAR_2,
    VAR_1, 0);
 if (VAR_4 == 0)
  VAR_4 = FUNC_0(VAR_3, VAR_0, ((void*)0));
 FUNC_4(&VAR_3->mutex);
 FUNC_2(1);
 return VAR_4;
}

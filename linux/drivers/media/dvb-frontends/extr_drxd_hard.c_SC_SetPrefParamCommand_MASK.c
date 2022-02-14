
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drxd_state {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drxd_state*,int ) ;
 int FUNC_1 (struct drxd_state*) ;
 int FUNC_2 (struct drxd_state*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct drxd_state *VAR_4,
      u16 VAR_5, u16 VAR_6, u16 VAR_7)
{
 int VAR_8;

 FUNC_3(&VAR_4->mutex);
 do {
  VAR_8 = FUNC_1(VAR_4);
  if (VAR_8 < 0)
   break;
  VAR_8 = FUNC_2(VAR_4, VAR_0, VAR_5, 0);
  if (VAR_8 < 0)
   break;
  VAR_8 = FUNC_2(VAR_4, VAR_3, VAR_7, 0);
  if (VAR_8 < 0)
   break;
  VAR_8 = FUNC_2(VAR_4, VAR_2, VAR_6, 0);
  if (VAR_8 < 0)
   break;

  VAR_8 = FUNC_0(VAR_4, VAR_1);
  if (VAR_8 < 0)
   break;
 } while (0);
 FUNC_4(&VAR_4->mutex);
 return VAR_8;
}
